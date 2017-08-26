/****************************************************************************
** Meta object code from reading C++ file 'net_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../net_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'net_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_net_server_socket_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_net_server_socket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_net_server_socket_t qt_meta_stringdata_net_server_socket = {
    {
QT_MOC_LITERAL(0, 0, 17), // "net_server_socket"
QT_MOC_LITERAL(1, 18, 11), // "signal_recv"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 43, 7), // "recvMsg"
QT_MOC_LITERAL(5, 51, 17), // "signal_descriptor"
QT_MOC_LITERAL(6, 69, 7), // "qintptr"
QT_MOC_LITERAL(7, 77, 10), // "descriptor"
QT_MOC_LITERAL(8, 88, 11), // "onreadyRead"
QT_MOC_LITERAL(9, 100, 14) // "ondisconnected"

    },
    "net_server_socket\0signal_recv\0\0"
    "QByteArray&\0recvMsg\0signal_descriptor\0"
    "qintptr\0descriptor\0onreadyRead\0"
    "ondisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_net_server_socket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   40,    2, 0x0a /* Public */,
       9,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void net_server_socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        net_server_socket *_t = static_cast<net_server_socket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->signal_descriptor((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 2: _t->onreadyRead(); break;
        case 3: _t->ondisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (net_server_socket::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&net_server_socket::signal_recv)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (net_server_socket::*_t)(qintptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&net_server_socket::signal_descriptor)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject net_server_socket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_net_server_socket.data,
      qt_meta_data_net_server_socket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *net_server_socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *net_server_socket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_net_server_socket.stringdata0))
        return static_cast<void*>(const_cast< net_server_socket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int net_server_socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void net_server_socket::signal_recv(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void net_server_socket::signal_descriptor(qintptr _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_net_server_t {
    QByteArrayData data[17];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_net_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_net_server_t qt_meta_stringdata_net_server = {
    {
QT_MOC_LITERAL(0, 0, 10), // "net_server"
QT_MOC_LITERAL(1, 11, 10), // "stringRecv"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "QString&"
QT_MOC_LITERAL(4, 32, 3), // "str"
QT_MOC_LITERAL(5, 36, 21), // "NotifyClientConnected"
QT_MOC_LITERAL(6, 58, 16), // "SendCurriculumID"
QT_MOC_LITERAL(7, 75, 2), // "ip"
QT_MOC_LITERAL(8, 78, 14), // "ondisconnected"
QT_MOC_LITERAL(9, 93, 7), // "qintptr"
QT_MOC_LITERAL(10, 101, 10), // "descriptor"
QT_MOC_LITERAL(11, 112, 9), // "onRecvmsg"
QT_MOC_LITERAL(12, 122, 11), // "QByteArray&"
QT_MOC_LITERAL(13, 134, 7), // "recvmsg"
QT_MOC_LITERAL(14, 142, 11), // "clientstate"
QT_MOC_LITERAL(15, 154, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(16, 183, 5) // "state"

    },
    "net_server\0stringRecv\0\0QString&\0str\0"
    "NotifyClientConnected\0SendCurriculumID\0"
    "ip\0ondisconnected\0qintptr\0descriptor\0"
    "onRecvmsg\0QByteArray&\0recvmsg\0clientstate\0"
    "QAbstractSocket::SocketState\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_net_server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    2,   47,    2, 0x06 /* Public */,
       6,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x0a /* Public */,
      11,    1,   58,    2, 0x0a /* Public */,
      14,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void net_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        net_server *_t = static_cast<net_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringRecv((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->NotifyClientConnected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->SendCurriculumID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ondisconnected((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 4: _t->onRecvmsg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->clientstate((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (net_server::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&net_server::stringRecv)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (net_server::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&net_server::NotifyClientConnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (net_server::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&net_server::SendCurriculumID)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject net_server::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_net_server.data,
      qt_meta_data_net_server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *net_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *net_server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_net_server.stringdata0))
        return static_cast<void*>(const_cast< net_server*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int net_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void net_server::stringRecv(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void net_server::NotifyClientConnected(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void net_server::SendCurriculumID(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
