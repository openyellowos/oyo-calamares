/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/tracking/Config.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN19TrackingStyleConfigE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19TrackingStyleConfigE = QtMocHelpers::stringData(
    "TrackingStyleConfig",
    "trackingChanged",
    "",
    "policyChanged",
    "tracking",
    "TrackingState",
    "isEnabled",
    "isConfigurable",
    "setTracking",
    "policy",
    "trackingStatus",
    "DisabledByConfig",
    "DisabledByUser",
    "EnabledByUser"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19TrackingStyleConfigE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   76, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    6 /* Public */,
       3,    1,   63,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   66,    2, 0x10a,    9 /* Public | MethodIsConst  */,
       6,    0,   67,    2, 0x10a,   10 /* Public | MethodIsConst  */,
       7,    0,   68,    2, 0x10a,   11 /* Public | MethodIsConst  */,
       8,    1,   69,    2, 0x0a,   12 /* Public */,
       8,    1,   72,    2, 0x0a,   14 /* Public */,
       9,    0,   75,    2, 0x10a,   16 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    0x80000000 | 5,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::QString,

 // properties: name, type, flags, notifyId, revision
      10, 0x80000000 | 5, 0x0001580b, uint(0), 0,
       6, QMetaType::Bool, 0x00015801, uint(0), 0,
       7, QMetaType::Bool, 0x00015801, uint(0), 0,
       9, QMetaType::QString, 0x00015801, uint(1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    3,  101,

 // enum data: key, value
      11, uint(TrackingStyleConfig::DisabledByConfig),
      12, uint(TrackingStyleConfig::DisabledByUser),
      13, uint(TrackingStyleConfig::EnabledByUser),

       0        // eod
};

Q_CONSTINIT const QMetaObject TrackingStyleConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN19TrackingStyleConfigE.offsetsAndSizes,
    qt_meta_data_ZN19TrackingStyleConfigE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19TrackingStyleConfigE_t,
        // property 'trackingStatus'
        QtPrivate::TypeAndForceComplete<TrackingState, std::true_type>,
        // property 'isEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isConfigurable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'policy'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'TrackingState'
        QtPrivate::TypeAndForceComplete<TrackingStyleConfig::TrackingState, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TrackingStyleConfig, std::true_type>,
        // method 'trackingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'policyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'tracking'
        QtPrivate::TypeAndForceComplete<TrackingState, std::false_type>,
        // method 'isEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isConfigurable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TrackingState, std::false_type>,
        // method 'setTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'policy'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void TrackingStyleConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrackingStyleConfig *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->trackingChanged(); break;
        case 1: _t->policyChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { TrackingState _r = _t->tracking();
            if (_a[0]) *reinterpret_cast< TrackingState*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isConfigurable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setTracking((*reinterpret_cast< std::add_pointer_t<TrackingState>>(_a[1]))); break;
        case 6: _t->setTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: { QString _r = _t->policy();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (TrackingStyleConfig::*)();
            if (_q_method_type _q_method = &TrackingStyleConfig::trackingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (TrackingStyleConfig::*)(QString );
            if (_q_method_type _q_method = &TrackingStyleConfig::policyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TrackingState*>(_v) = _t->tracking(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isConfigurable(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->policy(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTracking(*reinterpret_cast< TrackingState*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *TrackingStyleConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackingStyleConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN19TrackingStyleConfigE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrackingStyleConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TrackingStyleConfig::trackingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrackingStyleConfig::policyChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {
struct qt_meta_tag_ZN6ConfigE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6ConfigE = QtMocHelpers::stringData(
    "Config",
    "generalPolicyChanged",
    "",
    "generalPolicy",
    "installTracking",
    "InstallTrackingConfig*",
    "machineTracking",
    "MachineTrackingConfig*",
    "userTracking",
    "UserTrackingConfig*",
    "noTracking",
    "TrackingStyleConfig*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6ConfigE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   53,    2, 0x10a,    7 /* Public | MethodIsConst  */,
       4,    0,   54,    2, 0x10a,    8 /* Public | MethodIsConst  */,
       6,    0,   55,    2, 0x10a,    9 /* Public | MethodIsConst  */,
       8,    0,   56,    2, 0x10a,   10 /* Public | MethodIsConst  */,
      10,    1,   57,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QString,
    0x80000000 | 5,
    0x80000000 | 7,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::QString, 0x00015801, uint(0), 0,
       4, 0x80000000 | 11, 0x00015809, uint(-1), 0,
       6, 0x80000000 | 11, 0x00015809, uint(-1), 0,
       8, 0x80000000 | 11, 0x00015809, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6ConfigE.offsetsAndSizes,
    qt_meta_data_ZN6ConfigE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6ConfigE_t,
        // property 'generalPolicy'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'installTracking'
        QtPrivate::TypeAndForceComplete<TrackingStyleConfig*, std::true_type>,
        // property 'machineTracking'
        QtPrivate::TypeAndForceComplete<TrackingStyleConfig*, std::true_type>,
        // property 'userTracking'
        QtPrivate::TypeAndForceComplete<TrackingStyleConfig*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Config, std::true_type>,
        // method 'generalPolicyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'generalPolicy'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'installTracking'
        QtPrivate::TypeAndForceComplete<InstallTrackingConfig *, std::false_type>,
        // method 'machineTracking'
        QtPrivate::TypeAndForceComplete<MachineTrackingConfig *, std::false_type>,
        // method 'userTracking'
        QtPrivate::TypeAndForceComplete<UserTrackingConfig *, std::false_type>,
        // method 'noTracking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Config *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->generalPolicyChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QString _r = _t->generalPolicy();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { InstallTrackingConfig* _r = _t->installTracking();
            if (_a[0]) *reinterpret_cast< InstallTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 3: { MachineTrackingConfig* _r = _t->machineTracking();
            if (_a[0]) *reinterpret_cast< MachineTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 4: { UserTrackingConfig* _r = _t->userTracking();
            if (_a[0]) *reinterpret_cast< UserTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->noTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Config::*)(QString );
            if (_q_method_type _q_method = &Config::generalPolicyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackingStyleConfig* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->generalPolicy(); break;
        case 1: *reinterpret_cast< TrackingStyleConfig**>(_v) = _t->installTracking(); break;
        case 2: *reinterpret_cast< TrackingStyleConfig**>(_v) = _t->machineTracking(); break;
        case 3: *reinterpret_cast< TrackingStyleConfig**>(_v) = _t->userTracking(); break;
        default: break;
        }
    }
}

const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6ConfigE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Config::generalPolicyChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
