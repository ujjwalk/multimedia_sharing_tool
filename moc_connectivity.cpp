/****************************************************************************
** Meta object code from reading C++ file 'connectivity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "connectivity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectivity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Connectivity_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connectivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connectivity_t qt_meta_stringdata_Connectivity = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Connectivity"
QT_MOC_LITERAL(1, 13, 9), // "writeText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "text"
QT_MOC_LITERAL(4, 29, 15), // "clientConnected"
QT_MOC_LITERAL(5, 45, 20), // "otherGuyDisconnected"
QT_MOC_LITERAL(6, 66, 17) // "startServerStream"

    },
    "Connectivity\0writeText\0\0text\0"
    "clientConnected\0otherGuyDisconnected\0"
    "startServerStream"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connectivity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Connectivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Connectivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->clientConnected(); break;
        case 2: _t->otherGuyDisconnected(); break;
        case 3: _t->startServerStream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Connectivity::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connectivity::writeText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Connectivity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connectivity::clientConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Connectivity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connectivity::otherGuyDisconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Connectivity::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connectivity::startServerStream)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Connectivity::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Connectivity.data,
    qt_meta_data_Connectivity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Connectivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connectivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connectivity.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Connectivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Connectivity::writeText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Connectivity::clientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Connectivity::otherGuyDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Connectivity::startServerStream()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
