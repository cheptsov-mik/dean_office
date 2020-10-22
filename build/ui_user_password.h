/********************************************************************************
** Form generated from reading UI file 'user_password.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PASSWORD_H
#define UI_USER_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_UserPasswordDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_name;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QComboBox *comboBox_name;

    void setupUi(QDialog *UserPasswordDialog)
    {
        if (UserPasswordDialog->objectName().isEmpty())
            UserPasswordDialog->setObjectName(QString::fromUtf8("UserPasswordDialog"));
        UserPasswordDialog->resize(199, 181);
        UserPasswordDialog->setModal(false);
        buttonBox = new QDialogButtonBox(UserPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 140, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_name = new QLabel(UserPasswordDialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(10, 10, 111, 16));
        label_password = new QLabel(UserPasswordDialog);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(10, 70, 47, 13));
        lineEdit_password = new QLineEdit(UserPasswordDialog);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(10, 90, 181, 20));
        comboBox_name = new QComboBox(UserPasswordDialog);
        comboBox_name->setObjectName(QString::fromUtf8("comboBox_name"));
        comboBox_name->setGeometry(QRect(10, 30, 181, 22));

        retranslateUi(UserPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *UserPasswordDialog)
    {
        UserPasswordDialog->setWindowTitle(QCoreApplication::translate("UserPasswordDialog", "\320\222\321\205\320\276\320\264 \320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        label_name->setText(QCoreApplication::translate("UserPasswordDialog", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_password->setText(QCoreApplication::translate("UserPasswordDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPasswordDialog: public Ui_UserPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PASSWORD_H
