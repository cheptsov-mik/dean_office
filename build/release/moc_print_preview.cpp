/****************************************************************************
** Meta object code from reading C++ file 'print_preview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../print_preview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'print_preview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Js_Object_t {
    QByteArrayData data[17];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Js_Object_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Js_Object_t qt_meta_stringdata_Js_Object = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Js_Object"
QT_MOC_LITERAL(1, 10, 5), // "f_img"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "name"
QT_MOC_LITERAL(4, 22, 9), // "curr_year"
QT_MOC_LITERAL(5, 32, 26), // "student_list_by_group_size"
QT_MOC_LITERAL(6, 59, 10), // "name_group"
QT_MOC_LITERAL(7, 70, 25), // "get_student_list_by_group"
QT_MOC_LITERAL(8, 96, 6), // "number"
QT_MOC_LITERAL(9, 103, 27), // "get_student_budget_contract"
QT_MOC_LITERAL(10, 131, 6), // "to_str"
QT_MOC_LITERAL(11, 138, 3), // "num"
QT_MOC_LITERAL(12, 142, 10), // "msg_to_log"
QT_MOC_LITERAL(13, 153, 3), // "msg"
QT_MOC_LITERAL(14, 157, 6), // "result"
QT_MOC_LITERAL(15, 164, 3), // "add"
QT_MOC_LITERAL(16, 168, 3) // "par"

    },
    "Js_Object\0f_img\0\0name\0curr_year\0"
    "student_list_by_group_size\0name_group\0"
    "get_student_list_by_group\0number\0"
    "get_student_budget_contract\0to_str\0"
    "num\0msg_to_log\0msg\0result\0add\0par"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Js_Object[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x02 /* Public */,
       4,    0,   62,    2, 0x02 /* Public */,
       5,    1,   63,    2, 0x02 /* Public */,
       7,    2,   66,    2, 0x02 /* Public */,
       9,    1,   71,    2, 0x02 /* Public */,
      10,    1,   74,    2, 0x02 /* Public */,
      12,    1,   77,    2, 0x02 /* Public */,
      14,    0,   80,    2, 0x02 /* Public */,
      15,    1,   81,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Int, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    6,    8,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void Js_Object::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Js_Object *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->f_img((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->curr_year();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->student_list_by_group_size((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->get_student_list_by_group((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->get_student_budget_contract((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->to_str((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->msg_to_log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { QString _r = _t->result();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->add((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Js_Object::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Js_Object.data,
    qt_meta_data_Js_Object,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Js_Object::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Js_Object::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Js_Object.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Js_Object::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_print_preview_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_print_preview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_print_preview_t qt_meta_stringdata_print_preview = {
    {
QT_MOC_LITERAL(0, 0, 13), // "print_preview"
QT_MOC_LITERAL(1, 14, 10), // "sl_preview"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "QPrinter*"
QT_MOC_LITERAL(4, 36, 7), // "printer"
QT_MOC_LITERAL(5, 44, 6) // "create"

    },
    "print_preview\0sl_preview\0\0QPrinter*\0"
    "printer\0create"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_print_preview[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::QObjectStar,

       0        // eod
};

void print_preview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<print_preview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sl_preview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: { QObject* _r = _t->create();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject print_preview::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_print_preview.data,
    qt_meta_data_print_preview,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *print_preview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *print_preview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_print_preview.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int print_preview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
