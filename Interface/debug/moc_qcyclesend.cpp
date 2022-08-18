/****************************************************************************
** Meta object code from reading C++ file 'qcyclesend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcyclesend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcyclesend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCycleSend_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCycleSend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCycleSend_t qt_meta_stringdata_QCycleSend = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QCycleSend"
QT_MOC_LITERAL(1, 11, 18), // "sigle_send_finshed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "i"
QT_MOC_LITERAL(4, 33, 12), // "sig_read_reg"
QT_MOC_LITERAL(5, 46, 3), // "val"
QT_MOC_LITERAL(6, 50, 12), // "sig_time_out"
QT_MOC_LITERAL(7, 63, 11), // "sig_cnt_out"
QT_MOC_LITERAL(8, 75, 17) // "CycleSendDDR2FIFO"

    },
    "QCycleSend\0sigle_send_finshed\0\0i\0"
    "sig_read_reg\0val\0sig_time_out\0sig_cnt_out\0"
    "CycleSendDDR2FIFO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCycleSend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,
       7,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QCycleSend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCycleSend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigle_send_finshed((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 1: _t->sig_read_reg((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->sig_time_out(); break;
        case 3: _t->sig_cnt_out(); break;
        case 4: _t->CycleSendDDR2FIFO(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCycleSend::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleSend::sigle_send_finshed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCycleSend::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleSend::sig_read_reg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCycleSend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleSend::sig_time_out)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCycleSend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCycleSend::sig_cnt_out)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QCycleSend::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QCycleSend.data,
    qt_meta_data_QCycleSend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCycleSend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCycleSend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCycleSend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCycleSend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QCycleSend::sigle_send_finshed(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCycleSend::sig_read_reg(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCycleSend::sig_time_out()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCycleSend::sig_cnt_out()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
