/****************************************************************************
** Meta object code from reading C++ file 'slideswitch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../slideswitch/slideswitch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slideswitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlideSwitch_t {
    QByteArrayData data[13];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlideSwitch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlideSwitch_t qt_meta_stringdata_SlideSwitch = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SlideSwitch"
QT_MOC_LITERAL(1, 12, 14), // "checkedChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "checked"
QT_MOC_LITERAL(4, 36, 9), // "isChecked"
QT_MOC_LITERAL(5, 46, 10), // "isAnimated"
QT_MOC_LITERAL(6, 57, 9), // "isShowTip"
QT_MOC_LITERAL(7, 67, 7), // "bgColor"
QT_MOC_LITERAL(8, 75, 11), // "sliderColor"
QT_MOC_LITERAL(9, 87, 13), // "tipLightColor"
QT_MOC_LITERAL(10, 101, 18), // "tipLightCheckColor"
QT_MOC_LITERAL(11, 120, 6), // "radius"
QT_MOC_LITERAL(12, 127, 17) // "animationInterval"

    },
    "SlideSwitch\0checkedChanged\0\0checked\0"
    "isChecked\0isAnimated\0isShowTip\0bgColor\0"
    "sliderColor\0tipLightColor\0tipLightCheckColor\0"
    "radius\0animationInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlideSwitch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095003,
       5, QMetaType::Bool, 0x00095003,
       6, QMetaType::Bool, 0x00095003,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QReal, 0x00095103,
      12, QMetaType::Int, 0x00095103,

       0        // eod
};

void SlideSwitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlideSwitch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SlideSwitch::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlideSwitch::checkedChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SlideSwitch *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsChecked(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsAnimated(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsShowTip(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBgColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getSliderColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getTipLightColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getTipLightCheckColor(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->getRadius(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getAnimationInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SlideSwitch *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowTip(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setBgColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setSliderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setTipLightColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setTipLightCheckColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setAnimationInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SlideSwitch::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SlideSwitch.data,
    qt_meta_data_SlideSwitch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SlideSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlideSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlideSwitch.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SlideSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SlideSwitch::checkedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
