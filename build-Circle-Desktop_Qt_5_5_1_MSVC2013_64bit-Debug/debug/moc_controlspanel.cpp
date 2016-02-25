/****************************************************************************
** Meta object code from reading C++ file 'controlspanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Circle/controlspanel.h"
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
    QByteArrayData data[10];
    char stringdata0[99];
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
QT_MOC_LITERAL(3, 24, 8), // "xChanged"
QT_MOC_LITERAL(4, 33, 8), // "yChanged"
QT_MOC_LITERAL(5, 42, 7), // "changeR"
QT_MOC_LITERAL(6, 50, 7), // "changeX"
QT_MOC_LITERAL(7, 58, 7), // "changeY"
QT_MOC_LITERAL(8, 66, 10), // "changeData"
QT_MOC_LITERAL(9, 77, 21) // "QMap<QString,QString>"

    },
    "ControlsPanel\0rChanged\0\0xChanged\0"
    "yChanged\0changeR\0changeX\0changeY\0"
    "changeData\0QMap<QString,QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlsPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void ControlsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlsPanel *_t = static_cast<ControlsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->xChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->yChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->changeR((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->changeX((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->changeY((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->changeData((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::xChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ControlsPanel::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControlsPanel::yChanged)) {
                *result = 2;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void ControlsPanel::xChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ControlsPanel::yChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
