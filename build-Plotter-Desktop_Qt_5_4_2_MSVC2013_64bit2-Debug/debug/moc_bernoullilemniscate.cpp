/****************************************************************************
** Meta object code from reading C++ file 'bernoullilemniscate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Plotter/bernoullilemniscate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bernoullilemniscate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BernoulliLemniscate_t {
    QByteArrayData data[13];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BernoulliLemniscate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BernoulliLemniscate_t qt_meta_stringdata_BernoulliLemniscate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BernoulliLemniscate"
QT_MOC_LITERAL(1, 20, 12), // "startRepaint"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "f1Changed"
QT_MOC_LITERAL(4, 44, 6), // "Vector"
QT_MOC_LITERAL(5, 51, 9), // "f2Changed"
QT_MOC_LITERAL(6, 61, 5), // "setX1"
QT_MOC_LITERAL(7, 67, 5), // "setY1"
QT_MOC_LITERAL(8, 73, 5), // "setX2"
QT_MOC_LITERAL(9, 79, 5), // "setY2"
QT_MOC_LITERAL(10, 85, 4), // "setR"
QT_MOC_LITERAL(11, 90, 10), // "changeData"
QT_MOC_LITERAL(12, 101, 21) // "QMap<QString,QString>"

    },
    "BernoulliLemniscate\0startRepaint\0\0"
    "f1Changed\0Vector\0f2Changed\0setX1\0setY1\0"
    "setX2\0setY2\0setR\0changeData\0"
    "QMap<QString,QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BernoulliLemniscate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   66,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void BernoulliLemniscate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BernoulliLemniscate *_t = static_cast<BernoulliLemniscate *>(_o);
        switch (_id) {
        case 0: _t->startRepaint(); break;
        case 1: _t->f1Changed((*reinterpret_cast< Vector(*)>(_a[1]))); break;
        case 2: _t->f2Changed((*reinterpret_cast< Vector(*)>(_a[1]))); break;
        case 3: _t->setX1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->setY1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->setX2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->setY2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->setR((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->changeData((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BernoulliLemniscate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BernoulliLemniscate::startRepaint)) {
                *result = 0;
            }
        }
        {
            typedef void (BernoulliLemniscate::*_t)(Vector );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BernoulliLemniscate::f1Changed)) {
                *result = 1;
            }
        }
        {
            typedef void (BernoulliLemniscate::*_t)(Vector );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BernoulliLemniscate::f2Changed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject BernoulliLemniscate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BernoulliLemniscate.data,
      qt_meta_data_BernoulliLemniscate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BernoulliLemniscate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BernoulliLemniscate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BernoulliLemniscate.stringdata))
        return static_cast<void*>(const_cast< BernoulliLemniscate*>(this));
    if (!strcmp(_clname, "Shape"))
        return static_cast< Shape*>(const_cast< BernoulliLemniscate*>(this));
    return QObject::qt_metacast(_clname);
}

int BernoulliLemniscate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void BernoulliLemniscate::startRepaint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BernoulliLemniscate::f1Changed(Vector _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BernoulliLemniscate::f2Changed(Vector _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
