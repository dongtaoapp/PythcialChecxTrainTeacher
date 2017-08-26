/****************************************************************************
** Meta object code from reading C++ file 'speak.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../speak.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speak.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_speak_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_speak_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_speak_t qt_meta_stringdata_speak = {
    {
QT_MOC_LITERAL(0, 0, 5), // "speak"
QT_MOC_LITERAL(1, 6, 15), // "signalSpeakdata"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 35, 10), // "speak_data"
QT_MOC_LITERAL(5, 46, 5), // "error"
QT_MOC_LITERAL(6, 52, 8), // "QString&"
QT_MOC_LITERAL(7, 61, 5), // "state"
QT_MOC_LITERAL(8, 67, 13), // "QAudio::State"
QT_MOC_LITERAL(9, 81, 11), // "start_speak"
QT_MOC_LITERAL(10, 93, 12), // "on_readyRead"
QT_MOC_LITERAL(11, 106, 13), // "stop_voice_in"
QT_MOC_LITERAL(12, 120, 21) // "start_audio_to_system"

    },
    "speak\0signalSpeakdata\0\0QByteArray&\0"
    "speak_data\0error\0QString&\0state\0"
    "QAudio::State\0start_speak\0on_readyRead\0"
    "stop_voice_in\0start_audio_to_system"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_speak[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void speak::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        speak *_t = static_cast<speak *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSpeakdata((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->state((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 3: _t->start_speak((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->on_readyRead(); break;
        case 5: _t->stop_voice_in(); break;
        case 6: _t->start_audio_to_system(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (speak::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&speak::signalSpeakdata)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (speak::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&speak::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject speak::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_speak.data,
      qt_meta_data_speak,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *speak::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *speak::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_speak.stringdata0))
        return static_cast<void*>(const_cast< speak*>(this));
    return QObject::qt_metacast(_clname);
}

int speak::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void speak::signalSpeakdata(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void speak::error(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
