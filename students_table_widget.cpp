#include "students_table_widget.h"
#include "portfolio_dialog.h"

students_table_widget::students_table_widget(
        const QString &gr_name,
        startup_data *s_data,
        QWidget *parent) : tt_widget(parent), s_d(s_data), must_saved(false) {
    setObjectName(gr_name);
    setColumnCount(2);
    setHorizontalHeaderLabels(QStringList()<<""<<""<<"");
    horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    QTabWidget *tabWidget = static_cast<QTabWidget *>(parent);
    tabWidget->addTab(this, gr_name);

    for(int i=0;i<s_d->students[gr_name].size();++i)
        insert_row(i,s_d->students[gr_name][i]);

    setCurrentItem(item(0, 0));
    setFocus();
}

void students_table_widget::clicked(const QString &text){
    QPushButton *button = findChild<QPushButton*>(text);
    if(!button) return;
    if(!text.split(":")[1].isEmpty()){
        Portfolio_Dialog *pd = new Portfolio_Dialog(text.split(":")[1],s_d);
        if(pd->exec()){
            change_botton_color(button,false);
        }
    }
}

void students_table_widget::check_change_data(){
    //количество студентов группы не изменилось
    if(rowCount()==s_d->students[objectName()].size()){
        for(int r=0;r<rowCount();++r){
            QPushButton *button = static_cast<QPushButton *>(cellWidget(r, 1));
            if(item(r,0)->text()!=s_d->students[objectName()][r][0]){
                s_d->students[objectName()][r][0] = item(r,0)->text();
                if(p_buttons[button]) s_d->students[objectName()][r][2] = "true";
                else s_d->students[objectName()][r][2] = "false";
                must_saved = true;
            }
        }
    }
    //добавление студента
    //была вставка строки
    if(rowCount()>s_d->students[objectName()].size()){
        QMap<QString,QStringList*> tmp_st_name;
        for(int i=0;i<s_d->students[objectName()].size();++i)
            tmp_st_name.insert(s_d->students[objectName()][i][0], &s_d->students[objectName()][i]);
        for(int r=0;r<rowCount();++r)
            if(!tmp_st_name.contains(item(r,0)->text())){
                QStringList sl = QStringList()<<item(r,0)->text()<<""<<objectName()<<"false";
                s_d->students[objectName()].append(sl);
            }
    }
    //удаление студента
    if(rowCount()<s_d->students[objectName()].size()) save_students_to_file();
    if(must_saved) save_students_to_file();
}

void students_table_widget::insert_row(int iserted_row, const QStringList &student){
    insertRow(iserted_row);
    QTableWidgetItem *item = new QTableWidgetItem(student[0]);
    setItem(iserted_row,0, item);
    QPushButton *button = new QPushButton("Редакт.",this);
    p_buttons.insert(button,false);
    button->setObjectName(QString("%1:%2").arg(objectName()).arg(student[0]));
    setCellWidget(iserted_row, 1, button);
    connect(button, &QPushButton::clicked, [this, button](){ clicked(button->objectName()); });
    change_botton_color(button, !(student[2]=="true"));
}

void students_table_widget::insert_after_row(){
    if(rowCount()==0) insert_row(0,QStringList()<<""<<""<<"");
    else insert_row(currentItem()->row()+1,QStringList()<<""<<""<<"");
    if(rowCount()==1) setCurrentItem(item(1, 0));
    else setCurrentItem(item(currentItem()->row()+1, 0));
    must_saved = true;
}

void students_table_widget::insert_before_row(){
    if(rowCount()==0) return;
    else insert_row(currentItem()->row(),QStringList()<<""<<""<<"");
    setCurrentItem(item(currentItem()->row(), 0));
    must_saved = true;
}

void students_table_widget::remove_row(){
    if(rowCount()==0) return;
    for(auto st:s_d->students[objectName()])
        if(st[0]==item(currentItem()->row(),0)->text())
            s_d->deleted_students[objectName()].append(st);
    removeRow(currentItem()->row());
    must_saved = true;
}

void students_table_widget::change_botton_color(QPushButton *button, bool red_color){
    QPalette pal = button->palette();
    if(red_color) {
        pal.setColor(QPalette::Button, QColor(Qt::red));
        p_buttons[button]=false;
    } else {
        pal.setColor(QPalette::Button, QColor(Qt::white));
        p_buttons[button]=true;
    }
    button->setAutoFillBackground(true);
    button->setPalette(pal);
    button->update();
}

void students_table_widget::save_students_to_file(){
    QString file_name = QString("dean_data/%1/%2/list_of_students.xml")
            .arg(s_d->curr_year).arg(objectName());
    if(message_about_save(file_name)){
        s_d->xrw.save_students_to_file(&s_d->students[objectName()],file_name);
        must_saved = false;
    }
}

