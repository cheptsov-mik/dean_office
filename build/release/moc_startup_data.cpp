/****************************************************************************
** Meta object code from reading C++ file 'startup_data.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../startup_data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startup_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_R_Dialog_t {
    QByteArrayData data[4];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_R_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_R_Dialog_t qt_meta_stringdata_R_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "R_Dialog"
QT_MOC_LITERAL(1, 9, 11), // "before_exit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3) // "res"

    },
    "R_Dialog\0before_exit\0\0res"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_R_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void R_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<R_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->before_exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject R_Dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_R_Dialog.data,
    qt_meta_data_R_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *R_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *R_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_R_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int R_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Password_Dialog_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Password_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Password_Dialog_t qt_meta_stringdata_Password_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 15) // "Password_Dialog"

    },
    "Password_Dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Password_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Password_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Password_Dialog::staticMetaObject = { {
    &R_Dialog::staticMetaObject,
    qt_meta_stringdata_Password_Dialog.data,
    qt_meta_data_Password_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Password_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Password_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Password_Dialog.stringdata0))
        return static_cast<void*>(this);
    return R_Dialog::qt_metacast(_clname);
}

int Password_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = R_Dialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Change_Password_Dialog_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Change_Password_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Change_Password_Dialog_t qt_meta_stringdata_Change_Password_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 22) // "Change_Password_Dialog"

    },
    "Change_Password_Dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Change_Password_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Change_Password_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Change_Password_Dialog::staticMetaObject = { {
    &R_Dialog::staticMetaObject,
    qt_meta_stringdata_Change_Password_Dialog.data,
    qt_meta_data_Change_Password_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Change_Password_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Change_Password_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Change_Password_Dialog.stringdata0))
        return static_cast<void*>(this);
    return R_Dialog::qt_metacast(_clname);
}

int Change_Password_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = R_Dialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_startup_data_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_startup_data_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_startup_data_t qt_meta_stringdata_startup_data = {
    {
QT_MOC_LITERAL(0, 0, 12) // "startup_data"

    },
    "startup_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_startup_data[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void startup_data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject startup_data::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_startup_data.data,
    qt_meta_data_startup_data,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *startup_data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startup_data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_startup_data.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int startup_data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
