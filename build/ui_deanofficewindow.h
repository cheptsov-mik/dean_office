/********************************************************************************
** Form generated from reading UI file 'deanofficewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEANOFFICEWINDOW_H
#define UI_DEANOFFICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeanOfficeWindow
{
public:
    QAction *find;
    QAction *exit;
    QAction *change_password;
    QAction *quit;
    QAction *copy;
    QAction *paste;
    QAction *insert_after;
    QAction *insert_before;
    QAction *delete_str;
    QAction *about;
    QAction *edit_specialty;
    QAction *edit_specialization;
    QAction *edit_groups;
    QAction *edit_students;
    QAction *arx_to_ftp;
    QAction *edit_reports;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *layout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_edit;
    QMenu *menu_reports;
    QMenu *menu_about;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DeanOfficeWindow)
    {
        if (DeanOfficeWindow->objectName().isEmpty())
            DeanOfficeWindow->setObjectName(QString::fromUtf8("DeanOfficeWindow"));
        DeanOfficeWindow->resize(821, 564);
        find = new QAction(DeanOfficeWindow);
        find->setObjectName(QString::fromUtf8("find"));
        exit = new QAction(DeanOfficeWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        change_password = new QAction(DeanOfficeWindow);
        change_password->setObjectName(QString::fromUtf8("change_password"));
        quit = new QAction(DeanOfficeWindow);
        quit->setObjectName(QString::fromUtf8("quit"));
        copy = new QAction(DeanOfficeWindow);
        copy->setObjectName(QString::fromUtf8("copy"));
        paste = new QAction(DeanOfficeWindow);
        paste->setObjectName(QString::fromUtf8("paste"));
        insert_after = new QAction(DeanOfficeWindow);
        insert_after->setObjectName(QString::fromUtf8("insert_after"));
        insert_before = new QAction(DeanOfficeWindow);
        insert_before->setObjectName(QString::fromUtf8("insert_before"));
        delete_str = new QAction(DeanOfficeWindow);
        delete_str->setObjectName(QString::fromUtf8("delete_str"));
        about = new QAction(DeanOfficeWindow);
        about->setObjectName(QString::fromUtf8("about"));
        edit_specialty = new QAction(DeanOfficeWindow);
        edit_specialty->setObjectName(QString::fromUtf8("edit_specialty"));
        edit_specialization = new QAction(DeanOfficeWindow);
        edit_specialization->setObjectName(QString::fromUtf8("edit_specialization"));
        edit_groups = new QAction(DeanOfficeWindow);
        edit_groups->setObjectName(QString::fromUtf8("edit_groups"));
        edit_students = new QAction(DeanOfficeWindow);
        edit_students->setObjectName(QString::fromUtf8("edit_students"));
        arx_to_ftp = new QAction(DeanOfficeWindow);
        arx_to_ftp->setObjectName(QString::fromUtf8("arx_to_ftp"));
        edit_reports = new QAction(DeanOfficeWindow);
        edit_reports->setObjectName(QString::fromUtf8("edit_reports"));
        centralWidget = new QWidget(DeanOfficeWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 821, 511));
        layout = new QHBoxLayout(horizontalLayoutWidget);
        layout->setSpacing(6);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(horizontalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        layout->addWidget(treeWidget);

        DeanOfficeWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DeanOfficeWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 821, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_edit = new QMenu(menu);
        menu_edit->setObjectName(QString::fromUtf8("menu_edit"));
        menu_reports = new QMenu(menuBar);
        menu_reports->setObjectName(QString::fromUtf8("menu_reports"));
        menu_about = new QMenu(menuBar);
        menu_about->setObjectName(QString::fromUtf8("menu_about"));
        DeanOfficeWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DeanOfficeWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DeanOfficeWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DeanOfficeWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DeanOfficeWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_reports->menuAction());
        menuBar->addAction(menu_about->menuAction());
        menu->addAction(menu_edit->menuAction());
        menu->addAction(find);
        menu->addAction(change_password);
        menu->addAction(arx_to_ftp);
        menu->addAction(edit_reports);
        menu->addSeparator();
        menu->addAction(quit);
        menu_edit->addAction(edit_specialty);
        menu_edit->addAction(edit_specialization);
        menu_edit->addAction(edit_groups);
        menu_edit->addAction(edit_students);
        menu_about->addAction(about);

        retranslateUi(DeanOfficeWindow);

        QMetaObject::connectSlotsByName(DeanOfficeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeanOfficeWindow)
    {
        DeanOfficeWindow->setWindowTitle(QCoreApplication::translate("DeanOfficeWindow", "DeanOfficeWindow", nullptr));
        find->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
#if QT_CONFIG(shortcut)
        find->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("DeanOfficeWindow", "????", nullptr));
        change_password->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        quit->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        copy->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        copy->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        paste->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        paste->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        insert_after->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\277\320\276\321\201\320\273\320\265", nullptr));
#if QT_CONFIG(shortcut)
        insert_after->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        insert_before->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203 \320\277\320\265\321\200\320\265\320\264", nullptr));
#if QT_CONFIG(shortcut)
        insert_before->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Shift+Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        delete_str->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        delete_str->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        about->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        edit_specialty->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        edit_specialty->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_specialization->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
#if QT_CONFIG(shortcut)
        edit_specialization->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_groups->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\223\321\200\321\203\320\277\320\277\321\213", nullptr));
#if QT_CONFIG(shortcut)
        edit_groups->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_students->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
#if QT_CONFIG(shortcut)
        edit_students->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        arx_to_ftp->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\221\320\224 \320\275\320\260 \321\201\320\265\321\200\320\262\320\265\321\200", nullptr));
#if QT_CONFIG(shortcut)
        arx_to_ftp->setShortcut(QCoreApplication::translate("DeanOfficeWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_reports->setText(QCoreApplication::translate("DeanOfficeWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\276\321\202\321\207\320\265\321\202\320\276\320\262", nullptr));
        menu->setTitle(QCoreApplication::translate("DeanOfficeWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        menu_edit->setTitle(QCoreApplication::translate("DeanOfficeWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        menu_reports->setTitle(QCoreApplication::translate("DeanOfficeWindow", "\320\236\321\202\321\207\320\265\321\202\321\213", nullptr));
        menu_about->setTitle(QCoreApplication::translate("DeanOfficeWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeanOfficeWindow: public Ui_DeanOfficeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEANOFFICEWINDOW_H
