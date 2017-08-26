/****************************************************************************
** Meta object code from reading C++ file 'qtrainmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtrainmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtrainmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_m_searchLineEdit_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_m_searchLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_m_searchLineEdit_t qt_meta_stringdata_m_searchLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "m_searchLineEdit"
QT_MOC_LITERAL(1, 17, 6), // "search"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "QString&"
QT_MOC_LITERAL(4, 34, 9), // "searchMsg"
QT_MOC_LITERAL(5, 44, 8) // "onSearch"

    },
    "m_searchLineEdit\0search\0\0QString&\0"
    "searchMsg\0onSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_m_searchLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void m_searchLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        m_searchLineEdit *_t = static_cast<m_searchLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (m_searchLineEdit::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&m_searchLineEdit::search)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject m_searchLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_m_searchLineEdit.data,
      qt_meta_data_m_searchLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *m_searchLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *m_searchLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_m_searchLineEdit.stringdata0))
        return static_cast<void*>(const_cast< m_searchLineEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int m_searchLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void m_searchLineEdit::search(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QTrainMainWindow_t {
    QByteArrayData data[20];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTrainMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTrainMainWindow_t qt_meta_stringdata_QTrainMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QTrainMainWindow"
QT_MOC_LITERAL(1, 17, 11), // "onTabchange"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 11), // "flashAction"
QT_MOC_LITERAL(5, 48, 3), // "cmd"
QT_MOC_LITERAL(6, 52, 4), // "data"
QT_MOC_LITERAL(7, 57, 9), // "loadflash"
QT_MOC_LITERAL(8, 67, 8), // "QString&"
QT_MOC_LITERAL(9, 76, 9), // "flashpath"
QT_MOC_LITERAL(10, 86, 11), // "setPathshow"
QT_MOC_LITERAL(11, 98, 4), // "path"
QT_MOC_LITERAL(12, 103, 9), // "onPlaybtn"
QT_MOC_LITERAL(13, 113, 9), // "ontalkbtn"
QT_MOC_LITERAL(14, 123, 15), // "onTabBtnClicked"
QT_MOC_LITERAL(15, 139, 15), // "setCurriculumID"
QT_MOC_LITERAL(16, 155, 2), // "id"
QT_MOC_LITERAL(17, 158, 25), // "onIdentifyauscultationBtn"
QT_MOC_LITERAL(18, 184, 8), // "onSysBtn"
QT_MOC_LITERAL(19, 193, 6) // "ontest"

    },
    "QTrainMainWindow\0onTabchange\0\0index\0"
    "flashAction\0cmd\0data\0loadflash\0QString&\0"
    "flashpath\0setPathshow\0path\0onPlaybtn\0"
    "ontalkbtn\0onTabBtnClicked\0setCurriculumID\0"
    "id\0onIdentifyauscultationBtn\0onSysBtn\0"
    "ontest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTrainMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    2,   72,    2, 0x0a /* Public */,
       7,    1,   77,    2, 0x0a /* Public */,
      10,    1,   80,    2, 0x0a /* Public */,
      12,    0,   83,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      17,    0,   91,    2, 0x0a /* Public */,
      18,    0,   92,    2, 0x0a /* Public */,
      19,    0,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 8,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QTrainMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTrainMainWindow *_t = static_cast<QTrainMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTabchange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->flashAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->loadflash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setPathshow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onPlaybtn(); break;
        case 5: _t->ontalkbtn(); break;
        case 6: _t->onTabBtnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCurriculumID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onIdentifyauscultationBtn(); break;
        case 9: _t->onSysBtn(); break;
        case 10: _t->ontest(); break;
        default: ;
        }
    }
}

const QMetaObject QTrainMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTrainMainWindow.data,
      qt_meta_data_QTrainMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTrainMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTrainMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTrainMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QTrainMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTrainMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
