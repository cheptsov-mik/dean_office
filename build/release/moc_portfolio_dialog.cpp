/****************************************************************************
** Meta object code from reading C++ file 'portfolio_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../portfolio_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portfolio_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Portfolio_Dialog_t {
    QByteArrayData data[14];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Portfolio_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Portfolio_Dialog_t qt_meta_stringdata_Portfolio_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Portfolio_Dialog"
QT_MOC_LITERAL(1, 17, 18), // "save_table_to_file"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_pushButton_cam_pressed"
QT_MOC_LITERAL(4, 63, 26), // "on_pushButton_save_pressed"
QT_MOC_LITERAL(5, 90, 28), // "on_pushButton_cancel_pressed"
QT_MOC_LITERAL(6, 119, 25), // "on_pushButton_pdf_pressed"
QT_MOC_LITERAL(7, 145, 30), // "on_pushButton_prev_edu_pressed"
QT_MOC_LITERAL(8, 176, 25), // "on_pushButton_edu_pressed"
QT_MOC_LITERAL(9, 202, 27), // "on_pushButton_other_pressed"
QT_MOC_LITERAL(10, 230, 8), // "captured"
QT_MOC_LITERAL(11, 239, 2), // "im"
QT_MOC_LITERAL(12, 242, 18), // "comboBox_activated"
QT_MOC_LITERAL(13, 261, 5) // "index"

    },
    "Portfolio_Dialog\0save_table_to_file\0"
    "\0on_pushButton_cam_pressed\0"
    "on_pushButton_save_pressed\0"
    "on_pushButton_cancel_pressed\0"
    "on_pushButton_pdf_pressed\0"
    "on_pushButton_prev_edu_pressed\0"
    "on_pushButton_edu_pressed\0"
    "on_pushButton_other_pressed\0captured\0"
    "im\0comboBox_activated\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Portfolio_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Portfolio_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Portfolio_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save_table_to_file(); break;
        case 1: _t->on_pushButton_cam_pressed(); break;
        case 2: _t->on_pushButton_save_pressed(); break;
        case 3: _t->on_pushButton_cancel_pressed(); break;
        case 4: _t->on_pushButton_pdf_pressed(); break;
        case 5: _t->on_pushButton_prev_edu_pressed(); break;
        case 6: _t->on_pushButton_edu_pressed(); break;
        case 7: _t->on_pushButton_other_pressed(); break;
        case 8: _t->captured((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Portfolio_Dialog::staticMetaObject = { {
    &R_Dialog::staticMetaObject,
    qt_meta_stringdata_Portfolio_Dialog.data,
    qt_meta_data_Portfolio_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Portfolio_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Portfolio_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Portfolio_Dialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "student_data"))
        return static_cast< student_data*>(this);
    return R_Dialog::qt_metacast(_clname);
}

int Portfolio_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = R_Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
