/****************************************************************************
** Meta object code from reading C++ file 'lemniscateofbernoulli.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Plotter/lemniscateofbernoulli.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lemniscateofbernoulli.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LemniscateOfBernoulli_t {
    QByteArrayData data[19];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LemniscateOfBernoulli_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LemniscateOfBernoulli_t qt_meta_stringdata_LemniscateOfBernoulli = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LemniscateOfBernoulli"
QT_MOC_LITERAL(1, 22, 7), // "repaint"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "valueChangedX1"
QT_MOC_LITERAL(4, 46, 5), // "value"
QT_MOC_LITERAL(5, 52, 14), // "valueChangedX2"
QT_MOC_LITERAL(6, 67, 14), // "valueChangedY1"
QT_MOC_LITERAL(7, 82, 14), // "valueChangedY2"
QT_MOC_LITERAL(8, 97, 18), // "valueChangedRadius"
QT_MOC_LITERAL(9, 116, 9), // "changedX1"
QT_MOC_LITERAL(10, 126, 5), // "newX1"
QT_MOC_LITERAL(11, 132, 9), // "changedX2"
QT_MOC_LITERAL(12, 142, 5), // "newX2"
QT_MOC_LITERAL(13, 148, 9), // "changedY1"
QT_MOC_LITERAL(14, 158, 5), // "newY1"
QT_MOC_LITERAL(15, 164, 9), // "changedY2"
QT_MOC_LITERAL(16, 174, 5), // "newY2"
QT_MOC_LITERAL(17, 180, 8), // "changedR"
QT_MOC_LITERAL(18, 189, 9) // "newRadius"

    },
    "LemniscateOfBernoulli\0repaint\0\0"
    "valueChangedX1\0value\0valueChangedX2\0"
    "valueChangedY1\0valueChangedY2\0"
    "valueChangedRadius\0changedX1\0newX1\0"
    "changedX2\0newX2\0changedY1\0newY1\0"
    "changedY2\0newY2\0changedR\0newRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LemniscateOfBernoulli[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       6,    1,   76,    2, 0x06 /* Public */,
       7,    1,   79,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      15,    1,   94,    2, 0x0a /* Public */,
      17,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void LemniscateOfBernoulli::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LemniscateOfBernoulli *_t = static_cast<LemniscateOfBernoulli *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->repaint(); break;
        case 1: _t->valueChangedX1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valueChangedX2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->valueChangedY1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->valueChangedY2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->valueChangedRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changedX1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changedX2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changedY1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->changedY2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->changedR((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LemniscateOfBernoulli::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::repaint)) {
                *result = 0;
            }
        }
        {
            typedef void (LemniscateOfBernoulli::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::valueChangedX1)) {
                *result = 1;
            }
        }
        {
            typedef void (LemniscateOfBernoulli::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::valueChangedX2)) {
                *result = 2;
            }
        }
        {
            typedef void (LemniscateOfBernoulli::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::valueChangedY1)) {
                *result = 3;
            }
        }
        {
            typedef void (LemniscateOfBernoulli::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::valueChangedY2)) {
                *result = 4;
            }
        }
        {
            typedef void (LemniscateOfBernoulli::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LemniscateOfBernoulli::valueChangedRadius)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject LemniscateOfBernoulli::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LemniscateOfBernoulli.data,
      qt_meta_data_LemniscateOfBernoulli,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LemniscateOfBernoulli::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LemniscateOfBernoulli::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LemniscateOfBernoulli.stringdata0))
        return static_cast<void*>(const_cast< LemniscateOfBernoulli*>(this));
    return QObject::qt_metacast(_clname);
}

int LemniscateOfBernoulli::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LemniscateOfBernoulli::repaint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LemniscateOfBernoulli::valueChangedX1(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LemniscateOfBernoulli::valueChangedX2(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LemniscateOfBernoulli::valueChangedY1(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LemniscateOfBernoulli::valueChangedY2(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LemniscateOfBernoulli::valueChangedRadius(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
