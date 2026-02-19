/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/welcome/Config.h"
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
    "countryCodeChanged",
    "",
    "countryCode",
    "localeIndexChanged",
    "localeIndex",
    "isNextEnabledChanged",
    "isNextEnabled",
    "genericWelcomeMessageChanged",
    "message",
    "warningMessageChanged",
    "supportUrlChanged",
    "knownIssuesUrlChanged",
    "releaseNotesUrlChanged",
    "donateUrlChanged",
    "languagesModel",
    "Calamares::Locale::TranslationsModel*",
    "retranslate",
    "requirementsModel",
    "Calamares::RequirementsModel*",
    "unsatisfiedRequirements",
    "QAbstractItemModel*",
    "checkRequirements",
    "Calamares::RequirementsList",
    "languageIcon",
    "aboutMessage",
    "genericWelcomeMessage",
    "warningMessage",
    "supportUrl",
    "knownIssuesUrl",
    "releaseNotesUrl",
    "donateUrl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6ConfigE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      14,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,   15 /* Public */,
       4,    1,  101,    2, 0x06,   17 /* Public */,
       6,    1,  104,    2, 0x06,   19 /* Public */,
       8,    1,  107,    2, 0x06,   21 /* Public */,
      10,    1,  110,    2, 0x06,   23 /* Public */,
      11,    0,  113,    2, 0x06,   25 /* Public */,
      12,    0,  114,    2, 0x06,   26 /* Public */,
      13,    0,  115,    2, 0x06,   27 /* Public */,
      14,    0,  116,    2, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  117,    2, 0x10a,   29 /* Public | MethodIsConst  */,
      17,    0,  118,    2, 0x0a,   30 /* Public */,
      18,    0,  119,    2, 0x10a,   31 /* Public | MethodIsConst  */,
      20,    0,  120,    2, 0x10a,   32 /* Public | MethodIsConst  */,
      22,    0,  121,    2, 0x10a,   33 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 16,
    QMetaType::Void,
    0x80000000 | 19,
    0x80000000 | 21,
    0x80000000 | 23,

 // properties: name, type, flags, notifyId, revision
      15, 0x80000000 | 16, 0x00015c09, uint(-1), 0,
      18, 0x80000000 | 19, 0x00015c09, uint(-1), 0,
      20, 0x80000000 | 21, 0x00015c09, uint(-1), 0,
      24, QMetaType::QString, 0x00015c01, uint(-1), 0,
       3, QMetaType::QString, 0x00015803, uint(0), 0,
       5, QMetaType::Int, 0x00015103, uint(1), 0,
      25, QMetaType::QString, 0x00015c01, uint(-1), 0,
      26, QMetaType::QString, 0x00015803, uint(3), 0,
      27, QMetaType::QString, 0x00015801, uint(4), 0,
      28, QMetaType::QString, 0x00015803, uint(5), 0,
      29, QMetaType::QString, 0x00015803, uint(6), 0,
      30, QMetaType::QString, 0x00015803, uint(7), 0,
      31, QMetaType::QString, 0x00015803, uint(8), 0,
       7, QMetaType::Bool, 0x00015803, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6ConfigE.offsetsAndSizes,
    qt_meta_data_ZN6ConfigE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6ConfigE_t,
        // property 'languagesModel'
        QtPrivate::TypeAndForceComplete<Calamares::Locale::TranslationsModel*, std::true_type>,
        // property 'requirementsModel'
        QtPrivate::TypeAndForceComplete<Calamares::RequirementsModel*, std::true_type>,
        // property 'unsatisfiedRequirements'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel*, std::true_type>,
        // property 'languageIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'countryCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'localeIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'aboutMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'genericWelcomeMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'warningMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'supportUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'knownIssuesUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'releaseNotesUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'donateUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isNextEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Config, std::true_type>,
        // method 'countryCodeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'localeIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isNextEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'genericWelcomeMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'warningMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'supportUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'knownIssuesUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'releaseNotesUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'donateUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'languagesModel'
        QtPrivate::TypeAndForceComplete<Calamares::Locale::TranslationsModel *, std::false_type>,
        // method 'retranslate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requirementsModel'
        QtPrivate::TypeAndForceComplete<Calamares::RequirementsModel *, std::false_type>,
        // method 'unsatisfiedRequirements'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel *, std::false_type>,
        // method 'checkRequirements'
        QtPrivate::TypeAndForceComplete<Calamares::RequirementsList, std::false_type>
    >,
    nullptr
} };

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Config *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countryCodeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->localeIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->isNextEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->genericWelcomeMessageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->warningMessageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->supportUrlChanged(); break;
        case 6: _t->knownIssuesUrlChanged(); break;
        case 7: _t->releaseNotesUrlChanged(); break;
        case 8: _t->donateUrlChanged(); break;
        case 9: { Calamares::Locale::TranslationsModel* _r = _t->languagesModel();
            if (_a[0]) *reinterpret_cast< Calamares::Locale::TranslationsModel**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->retranslate(); break;
        case 11: { Calamares::RequirementsModel* _r = _t->requirementsModel();
            if (_a[0]) *reinterpret_cast< Calamares::RequirementsModel**>(_a[0]) = std::move(_r); }  break;
        case 12: { QAbstractItemModel* _r = _t->unsatisfiedRequirements();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 13: { Calamares::RequirementsList _r = _t->checkRequirements();
            if (_a[0]) *reinterpret_cast< Calamares::RequirementsList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Config::*)(QString );
            if (_q_method_type _q_method = &Config::countryCodeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(int );
            if (_q_method_type _q_method = &Config::localeIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(bool );
            if (_q_method_type _q_method = &Config::isNextEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(QString );
            if (_q_method_type _q_method = &Config::genericWelcomeMessageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)(QString );
            if (_q_method_type _q_method = &Config::warningMessageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)();
            if (_q_method_type _q_method = &Config::supportUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)();
            if (_q_method_type _q_method = &Config::knownIssuesUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)();
            if (_q_method_type _q_method = &Config::releaseNotesUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Config::*)();
            if (_q_method_type _q_method = &Config::donateUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::Locale::TranslationsModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::RequirementsModel* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Calamares::Locale::TranslationsModel**>(_v) = _t->languagesModel(); break;
        case 1: *reinterpret_cast< Calamares::RequirementsModel**>(_v) = _t->requirementsModel(); break;
        case 2: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->unsatisfiedRequirements(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->languageIcon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->m_countryCode; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->localeIndex(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->aboutMessage(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->m_genericWelcomeMessage; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->warningMessage(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->m_supportUrl; break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->m_knownIssuesUrl; break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->m_releaseNotesUrl; break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->m_donateUrl; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->m_isNextEnabled; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4:
            if (_t->m_countryCode != *reinterpret_cast< QString*>(_v)) {
                _t->m_countryCode = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->countryCodeChanged(_t->m_countryCode);
            }
            break;
        case 5: _t->setLocaleIndex(*reinterpret_cast< int*>(_v)); break;
        case 7:
            if (_t->m_genericWelcomeMessage != *reinterpret_cast< QString*>(_v)) {
                _t->m_genericWelcomeMessage = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->genericWelcomeMessageChanged(_t->m_genericWelcomeMessage);
            }
            break;
        case 9:
            if (_t->m_supportUrl != *reinterpret_cast< QString*>(_v)) {
                _t->m_supportUrl = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->supportUrlChanged();
            }
            break;
        case 10:
            if (_t->m_knownIssuesUrl != *reinterpret_cast< QString*>(_v)) {
                _t->m_knownIssuesUrl = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->knownIssuesUrlChanged();
            }
            break;
        case 11:
            if (_t->m_releaseNotesUrl != *reinterpret_cast< QString*>(_v)) {
                _t->m_releaseNotesUrl = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->releaseNotesUrlChanged();
            }
            break;
        case 12:
            if (_t->m_donateUrl != *reinterpret_cast< QString*>(_v)) {
                _t->m_donateUrl = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->donateUrlChanged();
            }
            break;
        case 13:
            if (_t->m_isNextEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->m_isNextEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isNextEnabledChanged(_t->m_isNextEnabled);
            }
            break;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Config::countryCodeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::localeIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::isNextEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Config::genericWelcomeMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Config::warningMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Config::supportUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Config::knownIssuesUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Config::releaseNotesUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Config::donateUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
