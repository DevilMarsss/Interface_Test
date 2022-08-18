/****************************************************************************
** Meta object code from reading C++ file 'qcycleread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcycleread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcycleread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCycleRead_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCycleRead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCycleRead_t qt_meta_stringdata_QCycleRead = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QCycleRead"
QT_MOC_LITERAL(1, 11, 17), // "sig_size_over1280"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "size"
QT_MOC_LITERAL(4, 35, 12), // "sig_rcv_data"
QT_MOC_LITERAL(5, 48, 8), // "uint8_t*"
QT_MOC_LITERAL(6, 57, 3), // "buf"
QT_MOC_LITERAL(7, 61, 17) // "CycleGetFiFoFrame"

    },
    "QCycleRead\0sig_size_over1280\0\0size\0"
    "sig_rcv_data\0uint8_t*\0buf\0CycleGetFiFoFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCycleRead[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::UInt,    6,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QCycleRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCycleRead *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_size_over1280((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->sig_rcv_data((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->CycleGetFiFoFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCycleRead::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleRead::sig_size_over1280)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCycleRead::*)(uint8_t * , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleRead::sig_rcv_data)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCycleRead::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QCycleRead.data,
    qt_meta_data_QCycleRead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCycleRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCycleRead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCycleRead.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCycleRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QCycleRead::sig_size_over1280(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCycleRead::sig_rcv_data(uint8_t * _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
