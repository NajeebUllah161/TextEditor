/****************************************************************************
** Meta object code from reading C++ file 'cxreslistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cxreslistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cxreslistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CxResListWidget_t {
    QByteArrayData data[12];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CxResListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CxResListWidget_t qt_meta_stringdata_CxResListWidget = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 9),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 13),
QT_MOC_LITERAL(4, 41, 2),
QT_MOC_LITERAL(5, 44, 16),
QT_MOC_LITERAL(6, 61, 4),
QT_MOC_LITERAL(7, 66, 12),
QT_MOC_LITERAL(8, 79, 18),
QT_MOC_LITERAL(9, 98, 13),
QT_MOC_LITERAL(10, 112, 2),
QT_MOC_LITERAL(11, 115, 3)
    },
    "CxResListWidget\0__changed\0\0__moveContent\0"
    "id\0QListWidgetItem*\0item\0onChangeItem\0"
    "onSelectionChanged\0onShowPreview\0on\0"
    "pnt\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CxResListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x05,
       3,    2,   42,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       7,    1,   47,    2, 0x08,
       8,    0,   50,    2, 0x08,
       9,    3,   51,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, QMetaType::QPoint,    6,   10,   11,

       0        // eod
};

void CxResListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CxResListWidget *_t = static_cast<CxResListWidget *>(_o);
        switch (_id) {
        case 0: _t->__changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->__moveContent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->onChangeItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->onSelectionChanged(); break;
        case 4: _t->onShowPreview((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CxResListWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxResListWidget::__changed)) {
                *result = 0;
            }
        }
        {
            typedef void (CxResListWidget::*_t)(int , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxResListWidget::__moveContent)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CxResListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CxResListWidget.data,
      qt_meta_data_CxResListWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *CxResListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CxResListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CxResListWidget.stringdata))
        return static_cast<void*>(const_cast< CxResListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CxResListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void CxResListWidget::__changed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CxResListWidget::__moveContent(int _t1, QListWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
