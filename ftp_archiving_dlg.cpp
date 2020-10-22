#include <QMessageBox>
#include <QtNetwork>
#include <QStyleFactory>
#include <QCryptographicHash>

#include "ftp_archiving_dlg.h"

void worker_script::run(){
    int ret_counter = 0;
    while(ftp_a_dlg->ftp_file_list.size()==0){
        QThread::msleep(500);
        if(ret_counter==10){
            qWarning("error connected to FTP server");
            emit finished();
            return;
        } else ret_counter++;
    }

    for(int i = 0;i<str_command.size();++i){
//        qInfo("command %s",str_command[i].toUtf8().constData());
        if(ftp_a_dlg->ftp){
            //слова в скобках
            QString name = str_command[i].split("(\"")[1].remove(")\"");
            QString name_ftp = QLatin1String(name.toLocal8Bit());
            QEventLoop wait;
            connect(ftp_a_dlg->ftp, &QFtp::commandFinished, &wait, &QEventLoop::quit);
            if(str_command[i].indexOf("download")==0){
                if(QFileInfo::exists(name)) QFile::remove(name);
                emit msg(QString("Скачивание файла %1").arg(name));
                emit download(name_ftp);
            } else if(str_command[i].indexOf("mkdir")==0){
                emit msg(QString("Создание дирректории %1").arg(name));
                emit mkdir(name_ftp);
            } else if(str_command[i].indexOf("cd")==0){
                emit msg(QString("Смена дирректории %1").arg(name));
                emit cd(name_ftp);
            } else if(str_command[i].indexOf("put")==0){
                QFile d_file(name);
                if(d_file.open(QIODevice::ReadOnly)){
                    emit msg(QString("Закачка файла %1 на FTP сервер").arg(name));
                    emit put(d_file.readAll(), name_ftp);
                    d_file.close();
                } else qWarning("error open file %s",name.toUtf8().constData());
            }
            wait.exec();
//            qInfo("command %s execute",str_command[i].toUtf8().constData());
        }
        emit set_progress_value(i);
//        qInfo("worker_script::set_progress_value(%d)", i);
    }
//    qInfo("worker_script finished...");
    emit finished();
}

QStringList ftp_archiving_dlg::parse_commands(const QString& dirName) {
    QDir dir(dirName);
    if (!dir.exists())
        qFatal("No such directory : %s", dir.dirName().toUtf8().constData());
    QStringList fileNames;
    fileNames.append("mkdir(\""+dirName+")\"");
    QStringList fileList = dir.entryList(QDir::Files);
    for ( QStringList::Iterator fit = fileList.begin(); fit != fileList.end(); ++fit )
        fileNames.append("put(\""+dir.path()+"/"+*fit+")\"");
    QStringList dirList = dir.entryList( QDir::Dirs );
    dirList.removeAll(".");
    dirList.removeAll("..");
    for ( QStringList::Iterator dit = dirList.begin(); dit != dirList.end(); ++dit ) {
        QDir curDir = dir;
        curDir.cd( *dit );
        QStringList curList = parse_commands(curDir.path());
        for ( QStringList::Iterator it = curList.begin(); it != curList.end(); ++it )
            fileNames.append(QFileInfo(*it).filePath());
    }
    return fileNames;
}

ftp_archiving_dlg::ftp_archiving_dlg(QStringList params,
                                     QWidget *parent) :
    QDialog(parent),ftp(nullptr),file(nullptr),
    networkSession(nullptr),workerThread(nullptr),
    loc_codec(QTextCodec::codecForLocale()){
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    setWindowTitle(params[0]);
    curr_dir = params[1];
    QStringList commands = parse_commands(curr_dir);
/*
    QFile f_tmp("tmp_synchro_ftp.txt");
    if(!f_tmp.open(QIODevice::WriteOnly | QIODevice::Text))
        qFatal("Error open file tmp_synchro_ftp.txt");
    QTextStream stream(&f_tmp);
    for(auto f_str:commands) stream << f_str <<"\n";
    f_tmp.close();
*/
    str_url = params[2];
    resize(400, 126);
    buttonBox = new QDialogButtonBox(this);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setGeometry(QRect(30, 80, 341, 32));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
    label = new QLabel(this);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 381, 16));
    progressBar = new QProgressBar(this);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    progressBar->setGeometry(QRect(10, 40, 381, 23));
    progressBar->setMaximum(commands.size()-1);
    progressBar->setValue(0);

    QObject::connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("CP1251"));
    workerThread = new worker_script(commands, this, nullptr);
    connect(workerThread, &worker_script::download, this, &ftp_archiving_dlg::downloadFile);
    connect(workerThread, &worker_script::msg, label, &QLabel::setText);
    connect(workerThread, &worker_script::set_progress_value, progressBar, &QProgressBar::setValue);
    connect(workerThread, &worker_script::finished, this, &ftp_archiving_dlg::finished);

    connectOrDisconnect();
}

void ftp_archiving_dlg::finished(){
    progressBar->close();
    QTextCodec::setCodecForLocale(loc_codec);
}

void ftp_archiving_dlg::connectOrDisconnect() {
    if (ftp) {        
        ftp->abort();
        ftp->deleteLater();
        ftp = nullptr;
        return;
    }

    if (!networkSession || !networkSession->isOpen()) {
        if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
            if (!networkSession) {
                // Get saved network configuration
                QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
                settings.beginGroup(QLatin1String("QtNetwork"));
                const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
                settings.endGroup();

                // If the saved network configuration is not currently discovered use the system default
                QNetworkConfiguration config = manager.configurationFromIdentifier(id);
                if ((config.state() & QNetworkConfiguration::Discovered) !=
                    QNetworkConfiguration::Discovered) {
                    config = manager.defaultConfiguration();
                }

                networkSession = new QNetworkSession(config, this);
                connect(networkSession, SIGNAL(opened()), this, SLOT(connectToFtp()));
                connect(networkSession, SIGNAL(error(QNetworkSession::SessionError)), this, SLOT(enableConnectButton()));
            }
            networkSession->open();
            return;
        }
    }
    connectToFtp();
}

void ftp_archiving_dlg::connectToFtp() {
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(commandFinished(int,bool)),
            this, SLOT(ftpCommandFinished(int,bool)));
    connect(ftp, SIGNAL(listInfo(QUrlInfo)),
            this, SLOT(addToList(QUrlInfo)));
    connect(workerThread, &worker_script::mkdir, ftp, &QFtp::mkdir);
    connect(workerThread, &worker_script::cd, ftp, &QFtp::cd);
    connect(workerThread, &worker_script::put, this, &ftp_archiving_dlg::put);

    QUrl url(str_url);
    if (!url.isValid() || url.scheme().toLower() != QLatin1String("ftp")) {
        ftp->connectToHost(str_url, 21);
        ftp->login();
    } else {
        ftp->connectToHost(url.host(), url.port(21));

        if (!url.userName().isEmpty())
            ftp->login(QUrl::fromPercentEncoding(url.userName().toLatin1()), url.password());
        else
            ftp->login();
        if (!url.path().isEmpty())
            ftp->cd(url.path());
    }
}

void ftp_archiving_dlg::put(const QByteArray &data, const QString &file){
    ftp->put(data,file);
}

void ftp_archiving_dlg::downloadFile(const QString &fileName){
//    qInfo("ftp_archiving_dlg::downloadFile(%s)",fileName.toUtf8().constData());
    if (QFile::exists(fileName))  QFile::remove(fileName);
    file = new QFile(fileName);
    if (!file->open(QIODevice::WriteOnly)) {
        qWarning("Ошибка записи файла %s: %s",
                 fileName.toUtf8().constData(),
                 file->errorString().toUtf8().constData());
        delete file;
        return;
    }
    ftp->get(fileName, file);
}

void ftp_archiving_dlg::cancelDownload() {
    ftp->abort();

    if (file->exists()) {
        file->close();
        file->remove();
    }
    delete file;
}

void ftp_archiving_dlg::ftpCommandFinished(int, bool error){
    if (ftp->currentCommand() == QFtp::ConnectToHost) {
        if (error) {
            qWarning("Unable to connect to the FTP server "
                    "at %s. Please check that the host "
                    "name is correct.",str_url.toUtf8().constData());
            connectOrDisconnect();
            return;
        }
        workerThread->start();
        return;
    }

    if (ftp->currentCommand() == QFtp::Login){
        ftp->list();
    }

    if (ftp->currentCommand() == QFtp::Get) {
        if (error) {
            file->close();
            file->remove();
        } else {
            file->close();
        }
        delete file;
    } else if (ftp->currentCommand() == QFtp::List) {

    }
}

void ftp_archiving_dlg::addToList(const QUrlInfo &urlInfo) {
    QString tmp = QString("%1;%2;%3")
            .arg(urlInfo.name())
            .arg(urlInfo.isDir()?"F":QString::number(urlInfo.size()))
            .arg(urlInfo.lastModified().toString("dd.MM.yyyy hh:mm:ss"));
    ftp_file_list.append(tmp);
//    qInfo("addToList: %s",tmp.toUtf8().constData());
}
