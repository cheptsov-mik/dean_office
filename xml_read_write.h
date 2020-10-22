#ifndef XML_READ_WRITE_H
#define XML_READ_WRITE_H

#include <QString>
#include <QVector>
#include <QMap>
#include <QStringList>
#include <QTextCodec>
#include <QSettings>

class xml_read_write{

public:
    //возвращает случайное id
    static QString randx(int size = 10);
    QMap<QString,QString> students_with_key; //список студентов(всех) - <id,name>

    explicit xml_read_write(){
        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    }
    void set_curr_year(const QString &c_year){ curr_year = c_year; }
    QString get_adobe_path(){
        QSettings m(xml_adobe_key, QSettings::NativeFormat);
        return m.value( "Default", "0" ).toString();
    }

    QMap<QString,QVector<QStringList>> load_all_students_from_dirs(const QString &year_dir,
                                                     QVector<QStringList> *groups);
    void create_students_xml_blank(const QString &file_name);
    void xml_students_save(const QString &gr_name,
                           QVector<QStringList> *deleted_students,
                           QVector<QStringList> *students);
    void save_students_to_file(QVector<QStringList> *students, const QString &file_name);

    void xml_specialties_save(QVector<QStringList> *specialty,
                              QVector<QStringList> *specialization);

    void xml_specialties_read(QVector<QStringList> *specialty,
                              QVector<QStringList> *specialization);

    void groups_load_from_xml(QVector<QStringList> *groups);
    void groups_save_to_xml(QVector<QStringList> *groups);

    void change_password_at_xml(const QString &new_pass,
                                const QStringList &curr_user,
                                QVector<QStringList> *users);

    QVector <QStringList> xml_users_read();

    QMap<QString,QString> xml_data_read(QVector<QString> *forms,
                                        QVector<QString> *budget_contract,
                                        QMap<QString,QString> *prog,
                                        QVector<QStringList> *deans);
    QString get_full_ftp_url(){
        return QString("ftp://"+xml_ftp_data[0]+
                ":"+xml_ftp_data[1]+"@"+xml_ftp_data[2]);
    }

private:
    QString curr_year;
    //Имена xml файлов общих данных и пользователей
    const QString xml_file_name = "dean_data/startup.xml";
    //имя файла специальностей и специализаций
    QString xml_file_specialties;
    //имя файла пользователей
    QString xml_file_users;
    //Данные для FTP сервера
    //[0]-user; [1]-password; [2]-url
    QStringList xml_ftp_data;
    //путь в реестре к Adobe
    QString xml_adobe_key;
    //Считывает список студентов из каталога группы
    QVector<QStringList> load_students_group(const QString &file_name);
    //записывает в xml список студентов группы и создает id, если отсутствует
    void save_students_to_xml_group(const QString &group, QVector<QStringList> *students);
};


#endif // XML_READ_WRITE_H
