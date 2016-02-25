/****************************************************************************
** Meta object code from reading C++ file 'point.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Circle/point.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'point.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Point_t {
    QByteArrayData data[6];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Point_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Point_t qt_meta_stringdata_Point = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Point"
QT_MOC_LITERAL(1, 6, 4), // "setX"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 1), // "x"
QT_MOC_LITERAL(4, 14, 4), // "setY"
QT_MOC_LITERAL(5, 19, 1) // "y"

    },
    "Point\0setX\0\0x\0setY\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Point[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   38,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void Point::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Point *_t = static_cast<Point *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setX(); break;
        case 2: _t->setY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setY(); break;
        default: ;
        }
    }
}

const QMetaObject Point::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Point.data,
      qt_meta_data_Point,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Point::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Point::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Point.stringdata0))
        return static_cast<void*>(const_cast< Point*>(this));
    return QWidget::qt_metacast(_clname);
}

int Point::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
