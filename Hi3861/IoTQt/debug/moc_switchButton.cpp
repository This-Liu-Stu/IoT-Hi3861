/****************************************************************************
** Meta object code from reading C++ file 'switchButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../IoTQt/switchButton/switchButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switchButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SwitchButton_t {
    QByteArrayData data[24];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchButton_t qt_meta_stringdata_SwitchButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SwitchButton"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "checked"
QT_MOC_LITERAL(4, 36, 11), // "UpdateValue"
QT_MOC_LITERAL(5, 48, 8), // "setSpace"
QT_MOC_LITERAL(6, 57, 5), // "space"
QT_MOC_LITERAL(7, 63, 9), // "setRadius"
QT_MOC_LITERAL(8, 73, 6), // "radius"
QT_MOC_LITERAL(9, 80, 10), // "setChecked"
QT_MOC_LITERAL(10, 91, 11), // "setShowText"
QT_MOC_LITERAL(11, 103, 4), // "show"
QT_MOC_LITERAL(12, 108, 13), // "setShowCircle"
QT_MOC_LITERAL(13, 122, 12), // "setAnimation"
QT_MOC_LITERAL(14, 135, 2), // "ok"
QT_MOC_LITERAL(15, 138, 12), // "setBgColorOn"
QT_MOC_LITERAL(16, 151, 5), // "color"
QT_MOC_LITERAL(17, 157, 13), // "setBgColorOff"
QT_MOC_LITERAL(18, 171, 16), // "setSliderColorOn"
QT_MOC_LITERAL(19, 188, 17), // "setSliderColorOff"
QT_MOC_LITERAL(20, 206, 12), // "setTextColor"
QT_MOC_LITERAL(21, 219, 9), // "setTextOn"
QT_MOC_LITERAL(22, 229, 4), // "text"
QT_MOC_LITERAL(23, 234, 10) // "setTextOff"

    },
    "SwitchButton\0statusChanged\0\0checked\0"
    "UpdateValue\0setSpace\0space\0setRadius\0"
    "radius\0setChecked\0setShowText\0show\0"
    "setShowCircle\0setAnimation\0ok\0"
    "setBgColorOn\0color\0setBgColorOff\0"
    "setSliderColorOn\0setSliderColorOff\0"
    "setTextColor\0setTextOn\0text\0setTextOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x0a /* Public */,
       7,    1,   96,    2, 0x0a /* Public */,
       9,    1,   99,    2, 0x0a /* Public */,
      10,    1,  102,    2, 0x0a /* Public */,
      12,    1,  105,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      17,    1,  114,    2, 0x0a /* Public */,
      18,    1,  117,    2, 0x0a /* Public */,
      19,    1,  120,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,
      21,    1,  126,    2, 0x0a /* Public */,
      23,    1,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void SwitchButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SwitchButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->UpdateValue(); break;
        case 2: _t->setSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setShowText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setShowCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setBgColorOn((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setBgColorOff((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->setSliderColorOn((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->setSliderColorOff((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->setTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->setTextOn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setTextOff((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SwitchButton::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SwitchButton::statusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SwitchButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SwitchButton.data,
    qt_meta_data_SwitchButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SwitchButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SwitchButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SwitchButton::statusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
