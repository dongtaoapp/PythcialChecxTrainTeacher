/****************************************************************************
** Meta object code from reading C++ file 'listen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../listen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_listen_t {
    QByteArrayData data[12];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_listen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_listen_t qt_meta_stringdata_listen = {
    {
QT_MOC_LITERAL(0, 0, 6), // "listen"
QT_MOC_LITERAL(1, 7, 15), // "signalrecvbytes"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 36, 13), // "signalSetport"
QT_MOC_LITERAL(5, 50, 18), // "start_system_audio"
QT_MOC_LITERAL(6, 69, 14), // "stop_sys_audio"
QT_MOC_LITERAL(7, 84, 13), // "readyReadSlot"
QT_MOC_LITERAL(8, 98, 11), // "star_listen"
QT_MOC_LITERAL(9, 110, 10), // "byte_array"
QT_MOC_LITERAL(10, 121, 7), // "funbind"
QT_MOC_LITERAL(11, 129, 4) // "port"

    },
    "listen\0signalrecvbytes\0\0QByteArray&\0"
    "signalSetport\0start_system_audio\0"
    "stop_sys_audio\0readyReadSlot\0star_listen\0"
    "byte_array\0funbind\0port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_listen[] = {

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
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, QMetaType::UShort,   11,

       0        // eod
};

void listen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        listen *_t = static_cast<listen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalrecvbytes((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->signalSetport(); break;
        case 2: { bool _r = _t->start_system_audio();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->stop_sys_audio(); break;
        case 4: _t->readyReadSlot(); break;
        case 5: _t->star_listen((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->funbind((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (listen::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&listen::signalrecvbytes)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (listen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&listen::signalSetport)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject listen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_listen.data,
      qt_meta_data_listen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *listen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *listen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_listen.stringdata0))
        return static_cast<void*>(const_cast< listen*>(this));
    return QObject::qt_metacast(_clname);
}

int listen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void listen::signalrecvbytes(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void listen::signalSetport()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
