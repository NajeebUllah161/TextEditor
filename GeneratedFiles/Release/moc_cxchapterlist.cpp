/****************************************************************************
** Meta object code from reading C++ file 'cxchapterlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cxchapterlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cxchapterlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CxChapterList_t {
    QByteArrayData data[14];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CxChapterList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CxChapterList_t qt_meta_stringdata_CxChapterList = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 2),
QT_MOC_LITERAL(4, 31, 5),
QT_MOC_LITERAL(5, 37, 15),
QT_MOC_LITERAL(6, 53, 9),
QT_MOC_LITERAL(7, 63, 6),
QT_MOC_LITERAL(8, 70, 2),
QT_MOC_LITERAL(9, 73, 2),
QT_MOC_LITERAL(10, 76, 6),
QT_MOC_LITERAL(11, 83, 10),
QT_MOC_LITERAL(12, 94, 18),
QT_MOC_LITERAL(13, 113, 9)
    },
    "CxChapterList\0__preChanged\0\0id\0isAdd\0"
    "__selectChapter\0__changed\0__swap\0st\0"
    "en\0onNext\0onPrevious\0onSelectionChanged\0"
    "onChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CxChapterList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x05,
       5,    1,   59,    2, 0x05,
       6,    0,   62,    2, 0x05,
       7,    2,   63,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    0,   68,    2, 0x0a,
      11,    0,   69,    2, 0x0a,
      12,    0,   70,    2, 0x0a,
      13,    0,   71,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CxChapterList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CxChapterList *_t = static_cast<CxChapterList *>(_o);
        switch (_id) {
        case 0: _t->__preChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->__selectChapter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->__changed(); break;
        case 3: _t->__swap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onNext(); break;
        case 5: _t->onPrevious(); break;
        case 6: _t->onSelectionChanged(); break;
        case 7: _t->onChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CxChapterList::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxChapterList::__preChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CxChapterList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxChapterList::__selectChapter)) {
                *result = 1;
            }
        }
        {
            typedef void (CxChapterList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxChapterList::__changed)) {
                *result = 2;
            }
        }
        {
            typedef void (CxChapterList::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxChapterList::__swap)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject CxChapterList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CxChapterList.data,
      qt_meta_data_CxChapterList,  qt_static_metacall, 0, 0}
};


const QMetaObject *CxChapterList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CxChapterList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CxChapterList.stringdata))
        return static_cast<void*>(const_cast< CxChapterList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CxChapterList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CxChapterList::__preChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CxChapterList::__selectChapter(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CxChapterList::__changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CxChapterList::__swap(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
