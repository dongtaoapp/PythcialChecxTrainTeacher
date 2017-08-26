/****************************************************************************
** Meta object code from reading C++ file 'qcompareview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcompareview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcompareview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCompareView_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCompareView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCompareView_t qt_meta_stringdata_QCompareView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QCompareView"
QT_MOC_LITERAL(1, 13, 17), // "CompareBntCilcked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "addComopareMsg"
QT_MOC_LITERAL(4, 47, 8), // "QString&"
QT_MOC_LITERAL(5, 56, 4), // "name"
QT_MOC_LITERAL(6, 61, 14), // "onUiCompareBtn"
QT_MOC_LITERAL(7, 76, 18), // "onUideleteBtnFirst"
QT_MOC_LITERAL(8, 95, 19), // "onUideleteBtnSecond"
QT_MOC_LITERAL(9, 115, 12), // "onUiemityBtn"
QT_MOC_LITERAL(10, 128, 11), // "SLOTClicked"
QT_MOC_LITERAL(11, 140, 14), // "SLOTTimerMove1"
QT_MOC_LITERAL(12, 155, 14), // "SLOTTimerMove2"
QT_MOC_LITERAL(13, 170, 3) // "val"

    },
    "QCompareView\0CompareBntCilcked\0\0"
    "addComopareMsg\0QString&\0name\0"
    "onUiCompareBtn\0onUideleteBtnFirst\0"
    "onUideleteBtnSecond\0onUiemityBtn\0"
    "SLOTClicked\0SLOTTimerMove1\0SLOTTimerMove2\0"
    "val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCompareView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void QCompareView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCompareView *_t = static_cast<QCompareView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CompareBntCilcked(); break;
        case 1: _t->addComopareMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onUiCompareBtn(); break;
        case 3: _t->onUideleteBtnFirst(); break;
        case 4: _t->onUideleteBtnSecond(); break;
        case 5: _t->onUiemityBtn(); break;
        case 6: _t->SLOTClicked(); break;
        case 7: _t->SLOTTimerMove1(); break;
        case 8: _t->SLOTTimerMove2((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCompareView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCompareView::CompareBntCilcked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QCompareView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QCompareView.data,
      qt_meta_data_QCompareView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCompareView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCompareView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCompareView.stringdata0))
        return static_cast<void*>(const_cast< QCompareView*>(this));
    return QDialog::qt_metacast(_clname);
}

int QCompareView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCompareView::CompareBntCilcked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
