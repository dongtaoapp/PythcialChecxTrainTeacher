/****************************************************************************
** Meta object code from reading C++ file 'setitemview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../setitemview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setitemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SetItemView_t {
    QByteArrayData data[9];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetItemView_t qt_meta_stringdata_SetItemView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SetItemView"
QT_MOC_LITERAL(1, 12, 8), // "changPag"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "pag"
QT_MOC_LITERAL(4, 26, 6), // "onBtn1"
QT_MOC_LITERAL(5, 33, 6), // "onBtn2"
QT_MOC_LITERAL(6, 40, 6), // "onBtn3"
QT_MOC_LITERAL(7, 47, 7), // "onOkbtn"
QT_MOC_LITERAL(8, 55, 11) // "oncancelBtn"

    },
    "SetItemView\0changPag\0\0pag\0onBtn1\0"
    "onBtn2\0onBtn3\0onOkbtn\0oncancelBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SetItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetItemView *_t = static_cast<SetItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changPag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onBtn1(); break;
        case 2: _t->onBtn2(); break;
        case 3: _t->onBtn3(); break;
        case 4: _t->onOkbtn(); break;
        case 5: _t->oncancelBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SetItemView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SetItemView::changPag)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SetItemView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetItemView.data,
      qt_meta_data_SetItemView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SetItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SetItemView.stringdata0))
        return static_cast<void*>(const_cast< SetItemView*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SetItemView::changPag(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
