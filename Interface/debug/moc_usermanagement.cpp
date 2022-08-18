/****************************************************************************
** Meta object code from reading C++ file 'usermanagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usermanagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermanagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserManagement_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserManagement_t qt_meta_stringdata_UserManagement = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UserManagement"
QT_MOC_LITERAL(1, 15, 9), // "insertRow"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "removeRow"
QT_MOC_LITERAL(4, 36, 13), // "updateActions"
QT_MOC_LITERAL(5, 50, 21), // "on_AddUserBtn_clicked"
QT_MOC_LITERAL(6, 72, 21), // "on_DelUserBtn_clicked"
QT_MOC_LITERAL(7, 94, 12), // "readUserFile"
QT_MOC_LITERAL(8, 107, 12), // "saveUserFile"
QT_MOC_LITERAL(9, 120, 33) // "on_UserManagementCloseBtn_cli..."

    },
    "UserManagement\0insertRow\0\0removeRow\0"
    "updateActions\0on_AddUserBtn_clicked\0"
    "on_DelUserBtn_clicked\0readUserFile\0"
    "saveUserFile\0on_UserManagementCloseBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserManagement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->insertRow(); break;
        case 1: _t->removeRow(); break;
        case 2: _t->updateActions(); break;
        case 3: _t->on_AddUserBtn_clicked(); break;
        case 4: _t->on_DelUserBtn_clicked(); break;
        case 5: _t->readUserFile(); break;
        case 6: _t->saveUserFile(); break;
        case 7: _t->on_UserManagementCloseBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UserManagement::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_UserManagement.data,
    qt_meta_data_UserManagement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserManagement.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
