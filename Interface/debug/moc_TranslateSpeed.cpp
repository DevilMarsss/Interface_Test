/****************************************************************************
** Meta object code from reading C++ file 'TranslateSpeed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TranslateSpeed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TranslateSpeed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TranslateSpeed_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TranslateSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TranslateSpeed_t qt_meta_stringdata_TranslateSpeed = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TranslateSpeed"
QT_MOC_LITERAL(1, 15, 15), // "signalSendSpeed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "signalRecvSpeed"
QT_MOC_LITERAL(4, 48, 13), // "slotSendSpeed"
QT_MOC_LITERAL(5, 62, 10), // "byte_count"
QT_MOC_LITERAL(6, 73, 13), // "slotRecvSpeed"
QT_MOC_LITERAL(7, 87, 13), // "CalcSendSpeed"
QT_MOC_LITERAL(8, 101, 13) // "CalcRecvSpeed"

    },
    "TranslateSpeed\0signalSendSpeed\0\0"
    "signalRecvSpeed\0slotSendSpeed\0byte_count\0"
    "slotRecvSpeed\0CalcSendSpeed\0CalcRecvSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TranslateSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void, QMetaType::ULongLong,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::ULongLong,
    QMetaType::ULongLong,

       0        // eod
};

void TranslateSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TranslateSpeed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendSpeed((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 1: _t->signalRecvSpeed((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 2: _t->slotSendSpeed((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 3: _t->slotRecvSpeed((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: { quint64 _r = _t->CalcSendSpeed();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 5: { quint64 _r = _t->CalcRecvSpeed();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TranslateSpeed::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TranslateSpeed::signalSendSpeed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TranslateSpeed::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TranslateSpeed::signalRecvSpeed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TranslateSpeed::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TranslateSpeed.data,
    qt_meta_data_TranslateSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TranslateSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TranslateSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TranslateSpeed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TranslateSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TranslateSpeed::signalSendSpeed(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TranslateSpeed::signalRecvSpeed(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
