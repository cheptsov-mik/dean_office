/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[47];
    char stringdata0[654];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 8), // "captured"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "setCamera"
QT_MOC_LITERAL(4, 27, 11), // "QCameraInfo"
QT_MOC_LITERAL(5, 39, 10), // "cameraInfo"
QT_MOC_LITERAL(6, 50, 11), // "startCamera"
QT_MOC_LITERAL(7, 62, 10), // "stopCamera"
QT_MOC_LITERAL(8, 73, 6), // "record"
QT_MOC_LITERAL(9, 80, 5), // "pause"
QT_MOC_LITERAL(10, 86, 4), // "stop"
QT_MOC_LITERAL(11, 91, 8), // "setMuted"
QT_MOC_LITERAL(12, 100, 10), // "toggleLock"
QT_MOC_LITERAL(13, 111, 9), // "takeImage"
QT_MOC_LITERAL(14, 121, 19), // "displayCaptureError"
QT_MOC_LITERAL(15, 141, 26), // "QCameraImageCapture::Error"
QT_MOC_LITERAL(16, 168, 11), // "errorString"
QT_MOC_LITERAL(17, 180, 24), // "configureCaptureSettings"
QT_MOC_LITERAL(18, 205, 22), // "configureVideoSettings"
QT_MOC_LITERAL(19, 228, 22), // "configureImageSettings"
QT_MOC_LITERAL(20, 251, 20), // "displayRecorderError"
QT_MOC_LITERAL(21, 272, 18), // "displayCameraError"
QT_MOC_LITERAL(22, 291, 18), // "updateCameraDevice"
QT_MOC_LITERAL(23, 310, 8), // "QAction*"
QT_MOC_LITERAL(24, 319, 6), // "action"
QT_MOC_LITERAL(25, 326, 17), // "updateCameraState"
QT_MOC_LITERAL(26, 344, 14), // "QCamera::State"
QT_MOC_LITERAL(27, 359, 17), // "updateCaptureMode"
QT_MOC_LITERAL(28, 377, 19), // "updateRecorderState"
QT_MOC_LITERAL(29, 397, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(30, 419, 5), // "state"
QT_MOC_LITERAL(31, 425, 23), // "setExposureCompensation"
QT_MOC_LITERAL(32, 449, 5), // "index"
QT_MOC_LITERAL(33, 455, 16), // "updateRecordTime"
QT_MOC_LITERAL(34, 472, 20), // "processCapturedImage"
QT_MOC_LITERAL(35, 493, 9), // "requestId"
QT_MOC_LITERAL(36, 503, 3), // "img"
QT_MOC_LITERAL(37, 507, 16), // "updateLockStatus"
QT_MOC_LITERAL(38, 524, 19), // "QCamera::LockStatus"
QT_MOC_LITERAL(39, 544, 25), // "QCamera::LockChangeReason"
QT_MOC_LITERAL(40, 570, 17), // "displayViewfinder"
QT_MOC_LITERAL(41, 588, 20), // "displayCapturedImage"
QT_MOC_LITERAL(42, 609, 15), // "readyForCapture"
QT_MOC_LITERAL(43, 625, 5), // "ready"
QT_MOC_LITERAL(44, 631, 10), // "imageSaved"
QT_MOC_LITERAL(45, 642, 2), // "id"
QT_MOC_LITERAL(46, 645, 8) // "fileName"

    },
    "Camera\0captured\0\0setCamera\0QCameraInfo\0"
    "cameraInfo\0startCamera\0stopCamera\0"
    "record\0pause\0stop\0setMuted\0toggleLock\0"
    "takeImage\0displayCaptureError\0"
    "QCameraImageCapture::Error\0errorString\0"
    "configureCaptureSettings\0"
    "configureVideoSettings\0configureImageSettings\0"
    "displayRecorderError\0displayCameraError\0"
    "updateCameraDevice\0QAction*\0action\0"
    "updateCameraState\0QCamera::State\0"
    "updateCaptureMode\0updateRecorderState\0"
    "QMediaRecorder::State\0state\0"
    "setExposureCompensation\0index\0"
    "updateRecordTime\0processCapturedImage\0"
    "requestId\0img\0updateLockStatus\0"
    "QCamera::LockStatus\0QCamera::LockChangeReason\0"
    "displayViewfinder\0displayCapturedImage\0"
    "readyForCapture\0ready\0imageSaved\0id\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  157,    2, 0x08 /* Private */,
       6,    0,  160,    2, 0x08 /* Private */,
       7,    0,  161,    2, 0x08 /* Private */,
       8,    0,  162,    2, 0x08 /* Private */,
       9,    0,  163,    2, 0x08 /* Private */,
      10,    0,  164,    2, 0x08 /* Private */,
      11,    1,  165,    2, 0x08 /* Private */,
      12,    0,  168,    2, 0x08 /* Private */,
      13,    0,  169,    2, 0x08 /* Private */,
      14,    3,  170,    2, 0x08 /* Private */,
      17,    0,  177,    2, 0x08 /* Private */,
      18,    0,  178,    2, 0x08 /* Private */,
      19,    0,  179,    2, 0x08 /* Private */,
      20,    0,  180,    2, 0x08 /* Private */,
      21,    0,  181,    2, 0x08 /* Private */,
      22,    1,  182,    2, 0x08 /* Private */,
      25,    1,  185,    2, 0x08 /* Private */,
      27,    0,  188,    2, 0x08 /* Private */,
      28,    1,  189,    2, 0x08 /* Private */,
      31,    1,  192,    2, 0x08 /* Private */,
      33,    0,  195,    2, 0x08 /* Private */,
      34,    2,  196,    2, 0x08 /* Private */,
      37,    2,  201,    2, 0x08 /* Private */,
      40,    0,  206,    2, 0x08 /* Private */,
      41,    0,  207,    2, 0x08 /* Private */,
      42,    1,  208,    2, 0x08 /* Private */,
      44,    2,  211,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15, QMetaType::QString,    2,    2,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   35,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 39,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   45,   46,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captured((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->setCamera((*reinterpret_cast< const QCameraInfo(*)>(_a[1]))); break;
        case 2: _t->startCamera(); break;
        case 3: _t->stopCamera(); break;
        case 4: _t->record(); break;
        case 5: _t->pause(); break;
        case 6: _t->stop(); break;
        case 7: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggleLock(); break;
        case 9: _t->takeImage(); break;
        case 10: _t->displayCaptureError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCameraImageCapture::Error(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->configureCaptureSettings(); break;
        case 12: _t->configureVideoSettings(); break;
        case 13: _t->configureImageSettings(); break;
        case 14: _t->displayRecorderError(); break;
        case 15: _t->displayCameraError(); break;
        case 16: _t->updateCameraDevice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 17: _t->updateCameraState((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 18: _t->updateCaptureMode(); break;
        case 19: _t->updateRecorderState((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 20: _t->setExposureCompensation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->updateRecordTime(); break;
        case 22: _t->processCapturedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 23: _t->updateLockStatus((*reinterpret_cast< QCamera::LockStatus(*)>(_a[1])),(*reinterpret_cast< QCamera::LockChangeReason(*)>(_a[2]))); break;
        case 24: _t->displayViewfinder(); break;
        case 25: _t->displayCapturedImage(); break;
        case 26: _t->readyForCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCameraImageCapture::Error >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockChangeReason >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Camera::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::captured)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Camera.data,
    qt_meta_data_Camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void Camera::captured(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
