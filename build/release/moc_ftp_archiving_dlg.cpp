/****************************************************************************
** Meta object code from reading C++ file 'ftp_archiving_dlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ftp_archiving_dlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftp_archiving_dlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ftp_archiving_dlg_t {
    QByteArrayData data[17];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ftp_archiving_dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ftp_archiving_dlg_t qt_meta_stringdata_ftp_archiving_dlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ftp_archiving_dlg"
QT_MOC_LITERAL(1, 18, 12), // "downloadFile"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "fileName"
QT_MOC_LITERAL(4, 41, 3), // "put"
QT_MOC_LITERAL(5, 45, 4), // "data"
QT_MOC_LITERAL(6, 50, 4), // "file"
QT_MOC_LITERAL(7, 55, 8), // "finished"
QT_MOC_LITERAL(8, 64, 19), // "connectOrDisconnect"
QT_MOC_LITERAL(9, 84, 14), // "cancelDownload"
QT_MOC_LITERAL(10, 99, 12), // "connectToFtp"
QT_MOC_LITERAL(11, 112, 18), // "ftpCommandFinished"
QT_MOC_LITERAL(12, 131, 9), // "commandId"
QT_MOC_LITERAL(13, 141, 5), // "error"
QT_MOC_LITERAL(14, 147, 9), // "addToList"
QT_MOC_LITERAL(15, 157, 8), // "QUrlInfo"
QT_MOC_LITERAL(16, 166, 7) // "urlInfo"

    },
    "ftp_archiving_dlg\0downloadFile\0\0"
    "fileName\0put\0data\0file\0finished\0"
    "connectOrDisconnect\0cancelDownload\0"
    "connectToFtp\0ftpCommandFinished\0"
    "commandId\0error\0addToList\0QUrlInfo\0"
    "urlInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ftp_archiving_dlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    2,   57,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    2,   66,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void ftp_archiving_dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ftp_archiving_dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->put((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->connectOrDisconnect(); break;
        case 4: _t->cancelDownload(); break;
        case 5: _t->connectToFtp(); break;
        case 6: _t->ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->addToList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ftp_archiving_dlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ftp_archiving_dlg.data,
    qt_meta_data_ftp_archiving_dlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ftp_archiving_dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ftp_archiving_dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ftp_archiving_dlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ftp_archiving_dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_worker_script_t {
    QByteArrayData data[12];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_worker_script_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_worker_script_t qt_meta_stringdata_worker_script = {
    {
QT_MOC_LITERAL(0, 0, 13), // "worker_script"
QT_MOC_LITERAL(1, 14, 8), // "download"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "s"
QT_MOC_LITERAL(4, 26, 5), // "mkdir"
QT_MOC_LITERAL(5, 32, 2), // "cd"
QT_MOC_LITERAL(6, 35, 3), // "put"
QT_MOC_LITERAL(7, 39, 4), // "data"
QT_MOC_LITERAL(8, 44, 4), // "file"
QT_MOC_LITERAL(9, 49, 18), // "set_progress_value"
QT_MOC_LITERAL(10, 68, 8), // "finished"
QT_MOC_LITERAL(11, 77, 3) // "msg"

    },
    "worker_script\0download\0\0s\0mkdir\0cd\0"
    "put\0data\0file\0set_progress_value\0"
    "finished\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_worker_script[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    2,   58,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      10,    0,   66,    2, 0x06 /* Public */,
      11,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void worker_script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<worker_script *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->download((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mkdir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->cd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->put((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->set_progress_value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->finished(); break;
        case 6: _t->msg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (worker_script::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::download)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (worker_script::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::mkdir)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (worker_script::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::cd)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (worker_script::*)(const QByteArray & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::put)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (worker_script::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::set_progress_value)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (worker_script::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::finished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (worker_script::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&worker_script::msg)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject worker_script::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_worker_script.data,
    qt_meta_data_worker_script,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *worker_script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *worker_script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_worker_script.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int worker_script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void worker_script::download(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void worker_script::mkdir(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void worker_script::cd(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void worker_script::put(const QByteArray & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void worker_script::set_progress_value(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void worker_script::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void worker_script::msg(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
