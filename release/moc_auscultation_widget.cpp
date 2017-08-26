/****************************************************************************
** Meta object code from reading C++ file 'auscultation_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../auscultation_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auscultation_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_auscultation_widget_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_auscultation_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_auscultation_widget_t qt_meta_stringdata_auscultation_widget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "auscultation_widget"
QT_MOC_LITERAL(1, 20, 10), // "aut_btn_id"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "id"
QT_MOC_LITERAL(4, 35, 9), // "on_HS_btn"
QT_MOC_LITERAL(5, 45, 9) // "on_BS_btn"

    },
    "auscultation_widget\0aut_btn_id\0\0id\0"
    "on_HS_btn\0on_BS_btn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_auscultation_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void auscultation_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auscultation_widget *_t = static_cast<auscultation_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aut_btn_id((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_HS_btn(); break;
        case 2: _t->on_BS_btn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (auscultation_widget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&auscultation_widget::aut_btn_id)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject auscultation_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_auscultation_widget.data,
      qt_meta_data_auscultation_widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *auscultation_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *auscultation_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_auscultation_widget.stringdata0))
        return static_cast<void*>(const_cast< auscultation_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int auscultation_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void auscultation_widget::aut_btn_id(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
