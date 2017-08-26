/****************************************************************************
** Meta object code from reading C++ file 'qchosecurriculumview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qchosecurriculumview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchosecurriculumview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CurriculumItem_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurriculumItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurriculumItem_t qt_meta_stringdata_CurriculumItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CurriculumItem"

    },
    "CurriculumItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurriculumItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CurriculumItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CurriculumItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CurriculumItem.data,
      qt_meta_data_CurriculumItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CurriculumItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurriculumItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CurriculumItem.stringdata0))
        return static_cast<void*>(const_cast< CurriculumItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int CurriculumItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QChoseCurriculumView_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QChoseCurriculumView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QChoseCurriculumView_t qt_meta_stringdata_QChoseCurriculumView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QChoseCurriculumView"
QT_MOC_LITERAL(1, 21, 5), // "CLNum"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "QString&"
QT_MOC_LITERAL(4, 37, 3), // "num"
QT_MOC_LITERAL(5, 41, 7) // "onOkbnt"

    },
    "QChoseCurriculumView\0CLNum\0\0QString&\0"
    "num\0onOkbnt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QChoseCurriculumView[] = {

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

void QChoseCurriculumView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QChoseCurriculumView *_t = static_cast<QChoseCurriculumView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CLNum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onOkbnt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QChoseCurriculumView::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QChoseCurriculumView::CLNum)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QChoseCurriculumView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QChoseCurriculumView.data,
      qt_meta_data_QChoseCurriculumView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QChoseCurriculumView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QChoseCurriculumView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QChoseCurriculumView.stringdata0))
        return static_cast<void*>(const_cast< QChoseCurriculumView*>(this));
    return QDialog::qt_metacast(_clname);
}

int QChoseCurriculumView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void QChoseCurriculumView::CLNum(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
