/********************************************************************************
** Form generated from reading UI file 'Portfolio_Dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTFOLIO_DIALOG_H
#define UI_PORTFOLIO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Potfolio_Dialog
{
public:
    QLabel *label_foto;
    QLabel *label_dean;
    QLabel *label_prog;
    QLabel *label_specialty;
    QLabel *label_specialization;
    QLabel *label_portfolio_name;
    QLabel *label_form;
    QLabel *label_group;
    QLabel *label_name;
    QLabel *label_name_engl;
    QLabel *label_name_born;
    QLabel *label_name_prikaz;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_pdf;
    QLabel *label_institut;
    QLineEdit *name_engl;
    QLineEdit *name_born;
    QLineEdit *name_prikaz;
    QLabel *label_table_head;
    QTableWidget *table_perewod;
    QLabel *label_add_data;
    QTextEdit *textEdit_add_data;
    QLabel *label_kontakts;
    QTextEdit *textEdit_kontakts;
    QPushButton *pushButton_prev_edu;
    QPushButton *pushButton_edu;
    QPushButton *pushButton_other;
    QPushButton *pushButton_cam;
    QLabel *label_budget_contract;
    QComboBox *comboBox;

    void setupUi(QDialog *Potfolio_Dialog)
    {
        if (Potfolio_Dialog->objectName().isEmpty())
            Potfolio_Dialog->setObjectName(QString::fromUtf8("Potfolio_Dialog"));
        Potfolio_Dialog->resize(877, 677);
        Potfolio_Dialog->setAutoFillBackground(true);
        Potfolio_Dialog->setInputMethodHints(Qt::ImhNone);
        label_foto = new QLabel(Potfolio_Dialog);
        label_foto->setObjectName(QString::fromUtf8("label_foto"));
        label_foto->setGeometry(QRect(710, 100, 95, 121));
        label_foto->setFrameShape(QFrame::Box);
        label_foto->setAlignment(Qt::AlignCenter);
        label_dean = new QLabel(Potfolio_Dialog);
        label_dean->setObjectName(QString::fromUtf8("label_dean"));
        label_dean->setGeometry(QRect(40, 90, 521, 16));
        label_prog = new QLabel(Potfolio_Dialog);
        label_prog->setObjectName(QString::fromUtf8("label_prog"));
        label_prog->setGeometry(QRect(40, 110, 521, 16));
        label_specialty = new QLabel(Potfolio_Dialog);
        label_specialty->setObjectName(QString::fromUtf8("label_specialty"));
        label_specialty->setGeometry(QRect(40, 130, 521, 16));
        label_specialization = new QLabel(Potfolio_Dialog);
        label_specialization->setObjectName(QString::fromUtf8("label_specialization"));
        label_specialization->setGeometry(QRect(40, 150, 521, 16));
        label_portfolio_name = new QLabel(Potfolio_Dialog);
        label_portfolio_name->setObjectName(QString::fromUtf8("label_portfolio_name"));
        label_portfolio_name->setGeometry(QRect(320, 220, 271, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_portfolio_name->setFont(font);
        label_portfolio_name->setAlignment(Qt::AlignCenter);
        label_form = new QLabel(Potfolio_Dialog);
        label_form->setObjectName(QString::fromUtf8("label_form"));
        label_form->setGeometry(QRect(290, 250, 331, 20));
        label_form->setAlignment(Qt::AlignCenter);
        label_group = new QLabel(Potfolio_Dialog);
        label_group->setObjectName(QString::fromUtf8("label_group"));
        label_group->setGeometry(QRect(40, 170, 521, 16));
        label_name = new QLabel(Potfolio_Dialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(110, 290, 661, 16));
        label_name_engl = new QLabel(Potfolio_Dialog);
        label_name_engl->setObjectName(QString::fromUtf8("label_name_engl"));
        label_name_engl->setGeometry(QRect(110, 310, 171, 16));
        label_name_born = new QLabel(Potfolio_Dialog);
        label_name_born->setObjectName(QString::fromUtf8("label_name_born"));
        label_name_born->setGeometry(QRect(110, 330, 171, 16));
        label_name_prikaz = new QLabel(Potfolio_Dialog);
        label_name_prikaz->setObjectName(QString::fromUtf8("label_name_prikaz"));
        label_name_prikaz->setGeometry(QRect(110, 350, 171, 16));
        pushButton_save = new QPushButton(Potfolio_Dialog);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(780, 570, 75, 23));
        pushButton_cancel = new QPushButton(Potfolio_Dialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(780, 600, 75, 23));
        pushButton_pdf = new QPushButton(Potfolio_Dialog);
        pushButton_pdf->setObjectName(QString::fromUtf8("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(780, 630, 75, 23));
        label_institut = new QLabel(Potfolio_Dialog);
        label_institut->setObjectName(QString::fromUtf8("label_institut"));
        label_institut->setGeometry(QRect(120, 0, 671, 91));
        label_institut->setFont(font);
        label_institut->setAlignment(Qt::AlignCenter);
        name_engl = new QLineEdit(Potfolio_Dialog);
        name_engl->setObjectName(QString::fromUtf8("name_engl"));
        name_engl->setGeometry(QRect(280, 310, 481, 20));
        name_born = new QLineEdit(Potfolio_Dialog);
        name_born->setObjectName(QString::fromUtf8("name_born"));
        name_born->setGeometry(QRect(280, 330, 481, 20));
        name_prikaz = new QLineEdit(Potfolio_Dialog);
        name_prikaz->setObjectName(QString::fromUtf8("name_prikaz"));
        name_prikaz->setGeometry(QRect(280, 350, 481, 20));
        label_table_head = new QLabel(Potfolio_Dialog);
        label_table_head->setObjectName(QString::fromUtf8("label_table_head"));
        label_table_head->setGeometry(QRect(230, 380, 441, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_table_head->setFont(font1);
        table_perewod = new QTableWidget(Potfolio_Dialog);
        if (table_perewod->columnCount() < 3)
            table_perewod->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_perewod->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_perewod->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_perewod->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table_perewod->setObjectName(QString::fromUtf8("table_perewod"));
        table_perewod->setGeometry(QRect(110, 400, 651, 141));
        table_perewod->horizontalHeader()->setCascadingSectionResizes(false);
        table_perewod->horizontalHeader()->setDefaultSectionSize(215);
        label_add_data = new QLabel(Potfolio_Dialog);
        label_add_data->setObjectName(QString::fromUtf8("label_add_data"));
        label_add_data->setGeometry(QRect(110, 550, 181, 16));
        label_add_data->setFont(font1);
        textEdit_add_data = new QTextEdit(Potfolio_Dialog);
        textEdit_add_data->setObjectName(QString::fromUtf8("textEdit_add_data"));
        textEdit_add_data->setGeometry(QRect(110, 570, 291, 41));
        label_kontakts = new QLabel(Potfolio_Dialog);
        label_kontakts->setObjectName(QString::fromUtf8("label_kontakts"));
        label_kontakts->setGeometry(QRect(450, 550, 181, 16));
        label_kontakts->setFont(font1);
        textEdit_kontakts = new QTextEdit(Potfolio_Dialog);
        textEdit_kontakts->setObjectName(QString::fromUtf8("textEdit_kontakts"));
        textEdit_kontakts->setGeometry(QRect(450, 570, 291, 41));
        pushButton_prev_edu = new QPushButton(Potfolio_Dialog);
        pushButton_prev_edu->setObjectName(QString::fromUtf8("pushButton_prev_edu"));
        pushButton_prev_edu->setGeometry(QRect(110, 630, 161, 23));
        pushButton_edu = new QPushButton(Potfolio_Dialog);
        pushButton_edu->setObjectName(QString::fromUtf8("pushButton_edu"));
        pushButton_edu->setGeometry(QRect(340, 630, 161, 23));
        pushButton_other = new QPushButton(Potfolio_Dialog);
        pushButton_other->setObjectName(QString::fromUtf8("pushButton_other"));
        pushButton_other->setGeometry(QRect(580, 630, 161, 23));
        pushButton_cam = new QPushButton(Potfolio_Dialog);
        pushButton_cam->setObjectName(QString::fromUtf8("pushButton_cam"));
        pushButton_cam->setGeometry(QRect(720, 240, 75, 23));
        label_budget_contract = new QLabel(Potfolio_Dialog);
        label_budget_contract->setObjectName(QString::fromUtf8("label_budget_contract"));
        label_budget_contract->setGeometry(QRect(40, 190, 141, 16));
        comboBox = new QComboBox(Potfolio_Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 190, 501, 22));

        retranslateUi(Potfolio_Dialog);

        QMetaObject::connectSlotsByName(Potfolio_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Potfolio_Dialog)
    {
        Potfolio_Dialog->setWindowTitle(QCoreApplication::translate("Potfolio_Dialog", "Dialog", nullptr));
        label_foto->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\244\320\276\321\202\320\276", nullptr));
        label_dean->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202:", nullptr));
        label_prog->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260:", nullptr));
        label_specialty->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_specialization->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217:", nullptr));
        label_portfolio_name->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\237\320\236\320\240\320\242\320\244\320\236\320\233\320\230\320\236 \320\241\320\242\320\243\320\224\320\225\320\235\320\242\320\220", nullptr));
        label_form->setText(QCoreApplication::translate("Potfolio_Dialog", "(\321\204\320\276\321\200\320\274\320\260 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217:      )", nullptr));
        label_group->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\223\321\200\321\203\320\277\320\277\320\260:", nullptr));
        label_name->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\244\320\230\320\236", nullptr));
        label_name_engl->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\244\320\230\320\236 (\320\260\320\275\320\263\320\273.)", nullptr));
        label_name_born->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_name_prikaz->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\227\320\260\321\207\320\270\321\201\320\273\320\265\320\275 (\320\275\321\213\320\271/\320\275\320\260) \320\277\321\200\320\270\320\272\320\260\320\267\320\276\320\274 \320\276\321\202:", nullptr));
        pushButton_save->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_pdf->setText(QCoreApplication::translate("Potfolio_Dialog", "PDF", nullptr));
        label_institut->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\223\320\236\320\241\320\243\320\224\320\220\320\240\320\241\320\242\320\222\320\225\320\235\320\235\320\220\320\257 \320\236\320\221\320\240\320\220\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\254\320\235\320\220\320\257 \320\236\320\240\320\223\320\220\320\235\320\230\320\227\320\220\320\246\320\230\320\257 \320\222\320\253\320\241\320\250\320\225\320\223\320\236 \320\237\320\240\320\236\320\244\320\225\320\241\320\241\320\230\320\236\320\235\320\220\320\233\320\254\320\235\320\236\320\223\320\236 \320\236\320\221\320\240\320\220\320\227\320\236\320\222\320\220\320\235\320\230\320\257 \"\320\224\320\236\320\235\320\225\320\246\320\232\320\230\320\231 \320\230\320\235\320\241\320\242\320\230\320\242\320\243\320\242 \320\226\320\225\320\233\320\225\320\227\320\235\320\236\320\224\320\236\320\240\320\236\320\226\320\235\320\236\320\223\320\236 \320\242\320\240\320\220\320\235\320\241\320\237\320\236\320\240\320\242\320\220\"", nullptr));
        label_table_head->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \321\201 \320\272\321\203\321\200\321\201\320\260 \320\275\320\260 \320\272\321\203\321\200\321\201, \320\277\320\265\321\200\320\265\321\200\321\213\320\262 \320\262 \320\260\320\272\320\260\320\264\320\265\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\274 \320\276\321\202\320\277\321\203\321\201\320\272\320\265, \320\277\320\276\320\276\321\211\321\200\320\265\320\275\320\270\321\217, \320\262\320\267\321\213\321\201\320\272\320\260\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_perewod->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\232\321\203\321\200\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_perewod->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\235\320\276\320\274\320\265\321\200 \320\270 \320\264\320\260\321\202\320\260 \320\277\321\200\320\270\320\272\320\260\320\267\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_perewod->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\241\320\276\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \320\277\321\200\320\270\320\272\320\260\320\267\320\260", nullptr));
        label_add_data->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_kontakts->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", nullptr));
        pushButton_prev_edu->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\265\320\265 \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_edu->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\243\321\207\320\265\320\261\320\275\320\260\321\217 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButton_other->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\224\321\200\321\203\320\263\320\270\320\265 \320\262\320\270\320\264\321\213 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        pushButton_cam->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\244\320\276\321\202\320\276", nullptr));
        label_budget_contract->setText(QCoreApplication::translate("Potfolio_Dialog", "\320\236\320\261\321\203\321\207\320\260\320\265\321\202\321\201\321\217 \320\267\320\260 \321\201\321\207\320\265\321\202 \321\201\321\200\320\265\320\264\321\201\321\202\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Potfolio_Dialog: public Ui_Potfolio_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTFOLIO_DIALOG_H
