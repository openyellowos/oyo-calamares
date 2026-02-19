/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/finished/Config.h"
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
struct qt_meta_tag_ZN6ConfigE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6ConfigE = QtMocHelpers::stringData(
    "Config",
    "restartModeChanged",
    "",
    "RestartMode",
    "m",
    "restartNowWantedChanged",
    "w",
    "failureMessageChanged",
    "failureDetailsChanged",
    "failureChanged",
    "restartNowMode",
    "setRestartNowMode",
    "restartNowWanted",
    "setRestartNowWanted",
    "restartNowCommand",
    "notifyOnFinished",
    "failureMessage",
    "failureDetails",
    "hasFailed",
    "doRestart",
    "restartAnyway",
    "doNotify",
    "sendAnyway",
    "onInstallationFailed",
    "message",
    "details",
    "failed",
    "Never",
    "UserDefaultUnchecked",
    "UserDefaultChecked",
    "Always"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6ConfigE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       7,  180, // properties
       1,  215, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x06,    9 /* Public */,
       5,    1,  137,    2, 0x06,   11 /* Public */,
       7,    1,  140,    2, 0x06,   13 /* Public */,
       8,    1,  143,    2, 0x06,   15 /* Public */,
       9,    1,  146,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  149,    2, 0x10a,   19 /* Public | MethodIsConst  */,
      11,    1,  150,    2, 0x0a,   20 /* Public */,
      12,    0,  153,    2, 0x10a,   22 /* Public | MethodIsConst  */,
      13,    1,  154,    2, 0x0a,   23 /* Public */,
      14,    0,  157,    2, 0x10a,   25 /* Public | MethodIsConst  */,
      15,    0,  158,    2, 0x10a,   26 /* Public | MethodIsConst  */,
      16,    0,  159,    2, 0x10a,   27 /* Public | MethodIsConst  */,
      17,    0,  160,    2, 0x10a,   28 /* Public | MethodIsConst  */,
      18,    0,  161,    2, 0x10a,   29 /* Public | MethodIsConst  */,
      19,    1,  162,    2, 0x0a,   30 /* Public */,
      19,    0,  165,    2, 0x0a,   32 /* Public */,
      21,    2,  166,    2, 0x0a,   33 /* Public */,
      21,    1,  171,    2, 0x0a,   36 /* Public */,
      21,    0,  174,    2, 0x0a,   38 /* Public */,
      23,    2,  175,    2, 0x0a,   39 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   18,   22,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,

 // properties: name, type, flags, notifyId, revision
      10, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      12, QMetaType::Bool, 0x00015103, uint(1), 0,
      14, QMetaType::QString, 0x00015c01, uint(-1), 0,
      15, QMetaType::Bool, 0x00015c01, uint(-1), 0,
      16, QMetaType::QString, 0x00015001, uint(2), 0,
      17, QMetaType::QString, 0x00015001, uint(3), 0,
      26, QMetaType::Bool, 0x00015001, uint(4), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x2,    4,  220,

 // enum data: key, value
      27, uint(Config::RestartMode::Never),
      28, uint(Config::RestartMode::UserDefaultUnchecked),
      29, uint(Config::RestartMode::UserDefaultChecked),
      30, uint(Config::RestartMode::Always),

       0        // eod
};

Q_CONSTINIT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6ConfigE.offsetsAndSizes,
    qt_meta_data_ZN6ConfigE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6ConfigE_t,
        // property 'restartNowMode'
        QtPrivate::TypeAndForceComplete<RestartMode, std::true_type>,
        // property 'restartNowWanted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'restartNowCommand'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'notifyOnFinished'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'failureMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'failureDetails'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'failed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'RestartMode'
        QtPrivate::TypeAndForceComplete<Config::RestartMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Config, std::true_type>,
        // method 'restartModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RestartMode, std::false_type>,
        // method 'restartNowWantedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'failureMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'failureDetailsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'failureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'restartNowMode'
        QtPrivate::TypeAndForceComplete<RestartMode, std::false_type>,
        // method 'setRestartNowMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RestartMode, std::false_type>,
        // method 'restartNowWanted'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRestartNowWanted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'restartNowCommand'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'notifyOnFinished'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'failureMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'failureDetails'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'hasFailed'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInstallationFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Config *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->restartModeChanged((*reinterpret_cast< std::add_pointer_t<RestartMode>>(_a[1]))); break;
        case 1: _t->restartNowWantedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->failureMessageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->failureDetailsChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->failureChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: { RestartMode _r = _t->restartNowMode();
            if (_a[0]) *reinterpret_cast< RestartMode*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setRestartNowMode((*reinterpret_cast< std::add_pointer_t<RestartMode>>(_a[1]))); break;
        case 7: { bool _r = _t->restartNowWanted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setRestartNowWanted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: { QString _r = _t->restartNowCommand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->notifyOnFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->failureMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->failureDetails();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->hasFailed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->doRestart((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->doRestart(); break;
        case 16: _t->doNotify((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 17: _t->doNotify((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->doNotify(); break;
        case 19: _t->onInstallationFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Config::*)(RestartMode );
            if (_q_method_type _q_method = &Config::restartModeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(bool );
            if (_q_method_type _q_method = &Config::restartNowWantedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(const QString & );
            if (_q_method_type _q_method = &Config::failureMessageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(const QString & );
            if (_q_method_type _q_method = &Config::failureDetailsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(bool );
            if (_q_method_type _q_method = &Config::failureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RestartMode*>(_v) = _t->restartNowMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->restartNowWanted(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->restartNowCommand(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->notifyOnFinished(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->failureMessage(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->failureDetails(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasFailed(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRestartNowMode(*reinterpret_cast< RestartMode*>(_v)); break;
        case 1: _t->setRestartNowWanted(*reinterpret_cast< bool*>(_v)); break;
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Config::restartModeChanged(RestartMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::restartNowWantedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::failureMessageChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Config::failureDetailsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Config::failureChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
