/****************************************************************************
** Meta object code from reading C++ file 'courseware_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../courseware_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'courseware_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_courseware_widget_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_courseware_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_courseware_widget_t qt_meta_stringdata_courseware_widget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "courseware_widget"
QT_MOC_LITERAL(1, 18, 12), // "cware_btn_id"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "id"
QT_MOC_LITERAL(4, 35, 11), // "on_HS_cware"
QT_MOC_LITERAL(5, 47, 12), // "on_ABL_cware"
QT_MOC_LITERAL(6, 60, 12), // "on_ABT_cware"
QT_MOC_LITERAL(7, 73, 12) // "on_ECG_cware"

    },
    "courseware_widget\0cware_btn_id\0\0id\0"
    "on_HS_cware\0on_ABL_cware\0on_ABT_cware\0"
    "on_ECG_cware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_courseware_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void courseware_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        courseware_widget *_t = static_cast<courseware_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cware_btn_id((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_HS_cware(); break;
        case 2: _t->on_ABL_cware(); break;
        case 3: _t->on_ABT_cware(); break;
        case 4: _t->on_ECG_cware(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (courseware_widget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&courseware_widget::cware_btn_id)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject courseware_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_courseware_widget.data,
      qt_meta_data_courseware_widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *courseware_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *courseware_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_courseware_widget.stringdata0))
        return static_cast<void*>(const_cast< courseware_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int courseware_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void courseware_widget::cware_btn_id(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
