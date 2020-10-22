#ifndef STUDENTS_TABLE_WIDGET_H
#define STUDENTS_TABLE_WIDGET_H

#include "startup_data.h"
#include "tt_widget.h"

class students_table_widget : public tt_widget {
Q_OBJECT
public:
    explicit students_table_widget(const QString &gr_name,
                       startup_data *s_data,
                       QWidget *parent = nullptr);
//    virtual ~students_table_widget();
    //были ли изменения в данных
    virtual void check_change_data();

public slots:
    //вызываются из выпадающего меню или по горячей клавише
    virtual void remove_row();
    virtual void insert_after_row();
    virtual void insert_before_row();

private slots:
    //нажатие на кнопку "Редакт." в списке студентов
    //параметр - "группа:ФИО студента",
    //например - "I-ПСЖД:Безверхий Данил Анатольевич"
    void clicked(const QString &text);

private:
    startup_data *s_d;

    QMap<QPushButton *,bool> p_buttons;
    //Изменение цвета кнопки в таблице списка студентов (красный или черный)
    void change_botton_color(QPushButton *button, bool red_color);
    //вставка новой строки
    void insert_row(int iserted_row, const QStringList &student);
    bool must_saved;
    //сохранение таблицы в файле с именем objectName()
    void save_students_to_file();
};

#endif // STUDENTS_TABLE_WIDGET_H
