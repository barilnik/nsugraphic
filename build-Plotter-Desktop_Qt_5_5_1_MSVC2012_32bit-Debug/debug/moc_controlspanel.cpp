/****************************************************************************
** Meta object code from reading C++ file 'controlspanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Plotter/controlspanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ControlsPanel_t {
    QByteArrayData data[17];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlsPanel_t qt_meta_stringdata_ControlsPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ControlsPanel"
QT_MOC_LITERAL(1, 14, 8), // "rChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "x1Changed"
QT_MOC_LITERAL(4, 34, 9), // "y1Changed"
QT_MOC_LITERAL(5, 44, 9), // "x2Changed"
QT_MOC_LITERAL(6, 54, 9), // "y2Changed"
QT_MOC_LITERAL(7, 64, 7), // "changeR"
QT_MOC_LITERAL(8, 72, 8), // "changeX1"
QT_MOC_LITERAL(9, 81, 8), // "changeY1"
QT_MOC_LITERAL(10, 90, 8), // "changeX2"
QT_MOC_LITERAL(11, 99, 8), // "changeY2"
QT_MOC_LITERAL(12, 108, 8), // "changeF1"
QT_MOC_LITERAL(13, 117, 6), // "Vector"
QT_MOC_LITERAL(14, 124, 8), // "changeF2"
QT_MOC_LITERAL(15, 133, 10), // "changeData"
QT_MOC_LITERAL(16, 144, 21) // "QMap<QString,QString>"

    },
    "ControlsPanel\0rChanged\0\0x1Changed\0"
    "y1Changed\0x2Changed\0y2Changed\0changeR\0"
    "changeX1\0changeY1\0changeX2\0changeY2\0"
    "changeF1\0Vector\0changeF2\0changeData\0"
    "QMap<QString,QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlsPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   94,    2, 0x0a /* Public */,
       8,    1,   97,    2, 0x0a /* Public */,
       9,    1,  100,    2, 0x0a /* Public */,
      10,    1,  103,    2, 0x0a /* Public */,
      11,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      14,    1,  112,    2, 0x0a /* Public */,
      15,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void ControlsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlsPanel *_t = static_cast<ControlsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->x1Changed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->y1Changed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->x2Changed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->y2Changed((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->changeR((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->changeX1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->changeY1((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->changeX2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->changeY2((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->changeF1((*reinterpret_cast< Vector(*)>(_a[1]))); break;
        case 11: _t->changeF2((*reinterpret_cast< Vector(*)>(_a[1]))); break;
        case 12: _t->changeData((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::rChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::x1Changed)) {
                *result = 1;
            }
        }
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::y1Changed)) {
                *result = 2;
            }
        }
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::x2Changed)) {
                *result = 3;
            }
        }
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::y2Changed)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ControlsPanel::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_ControlsPanel.data,
      qt_meta_data_ControlsPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ControlsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ControlsPanel.stringdata0))
        return static_cast<void*>(const_cast< ControlsPanel*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int ControlsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ControlsPanel::rChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControlsPanel::x1Changed(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ControlsPanel::y1Changed(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControlsPanel::x2Changed(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ControlsPanel::y2Changed(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
