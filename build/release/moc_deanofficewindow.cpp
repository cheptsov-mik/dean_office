/****************************************************************************
** Meta object code from reading C++ file 'deanofficewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../deanofficewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deanofficewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeanOfficeWindow_t {
    QByteArrayData data[22];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeanOfficeWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeanOfficeWindow_t qt_meta_stringdata_DeanOfficeWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DeanOfficeWindow"
QT_MOC_LITERAL(1, 17, 28), // "on_change_password_triggered"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "on_find_triggered"
QT_MOC_LITERAL(4, 65, 17), // "on_quit_triggered"
QT_MOC_LITERAL(5, 83, 23), // "on_arx_to_ftp_triggered"
QT_MOC_LITERAL(6, 107, 25), // "on_edit_reports_triggered"
QT_MOC_LITERAL(7, 133, 27), // "on_edit_specialty_triggered"
QT_MOC_LITERAL(8, 161, 32), // "on_edit_specialization_triggered"
QT_MOC_LITERAL(9, 194, 24), // "on_edit_groups_triggered"
QT_MOC_LITERAL(10, 219, 26), // "on_edit_students_triggered"
QT_MOC_LITERAL(11, 246, 11), // "itemClicked"
QT_MOC_LITERAL(12, 258, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 275, 4), // "item"
QT_MOC_LITERAL(14, 280, 6), // "column"
QT_MOC_LITERAL(15, 287, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(16, 305, 17), // "tabCloseRequested"
QT_MOC_LITERAL(17, 323, 5), // "index"
QT_MOC_LITERAL(18, 329, 14), // "currentChanged"
QT_MOC_LITERAL(19, 344, 10), // "run_report"
QT_MOC_LITERAL(20, 355, 9), // "file_name"
QT_MOC_LITERAL(21, 365, 9) // "about_box"

    },
    "DeanOfficeWindow\0on_change_password_triggered\0"
    "\0on_find_triggered\0on_quit_triggered\0"
    "on_arx_to_ftp_triggered\0"
    "on_edit_reports_triggered\0"
    "on_edit_specialty_triggered\0"
    "on_edit_specialization_triggered\0"
    "on_edit_groups_triggered\0"
    "on_edit_students_triggered\0itemClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "itemDoubleClicked\0tabCloseRequested\0"
    "index\0currentChanged\0run_report\0"
    "file_name\0about_box"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeanOfficeWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    2,   98,    2, 0x0a /* Public */,
      15,    2,  103,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,
      21,    0,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

void DeanOfficeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeanOfficeWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_change_password_triggered(); break;
        case 1: _t->on_find_triggered(); break;
        case 2: _t->on_quit_triggered(); break;
        case 3: _t->on_arx_to_ftp_triggered(); break;
        case 4: _t->on_edit_reports_triggered(); break;
        case 5: _t->on_edit_specialty_triggered(); break;
        case 6: _t->on_edit_specialization_triggered(); break;
        case 7: _t->on_edit_groups_triggered(); break;
        case 8: _t->on_edit_students_triggered(); break;
        case 9: _t->itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->run_report((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->about_box(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeanOfficeWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_DeanOfficeWindow.data,
    qt_meta_data_DeanOfficeWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeanOfficeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeanOfficeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeanOfficeWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DeanOfficeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
