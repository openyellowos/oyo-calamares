/****************************************************************************
** Meta object code from reading C++ file 'ViewManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libcalamaresui/ViewManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9Calamares11ViewManagerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9Calamares11ViewManagerE = QtMocHelpers::stringData(
    "Calamares::ViewManager",
    "currentStepChanged",
    "",
    "ensureSize",
    "size",
    "cancelEnabled",
    "enabled",
    "nextEnabledChanged",
    "nextLabelChanged",
    "nextIconChanged",
    "backEnabledChanged",
    "backLabelChanged",
    "backIconChanged",
    "backAndNextVisibleChanged",
    "quitEnabledChanged",
    "quitLabelChanged",
    "quitIconChanged",
    "quitVisibleChanged",
    "quitTooltipChanged",
    "next",
    "nextEnabled",
    "nextLabel",
    "nextIcon",
    "back",
    "backEnabled",
    "backLabel",
    "backIcon",
    "backAndNextVisible",
    "quit",
    "quitEnabled",
    "quitLabel",
    "quitIcon",
    "quitVisible",
    "quitTooltip",
    "onInstallationFailed",
    "message",
    "details",
    "onInitFailed",
    "modules",
    "onInitComplete",
    "updateNextStatus",
    "isDebugMode",
    "isChrootMode",
    "isSetupMode",
    "logFilePath",
    "currentStepIndex",
    "panelSides",
    "Qt::Orientations"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9Calamares11ViewManagerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      18,  316, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  242,    2, 0x06,   19 /* Public */,
       3,    1,  243,    2, 0x106,   20 /* Public | MethodIsConst  */,
       5,    1,  246,    2, 0x106,   22 /* Public | MethodIsConst  */,
       7,    1,  249,    2, 0x106,   24 /* Public | MethodIsConst  */,
       8,    1,  252,    2, 0x106,   26 /* Public | MethodIsConst  */,
       9,    1,  255,    2, 0x106,   28 /* Public | MethodIsConst  */,
      10,    1,  258,    2, 0x106,   30 /* Public | MethodIsConst  */,
      11,    1,  261,    2, 0x106,   32 /* Public | MethodIsConst  */,
      12,    1,  264,    2, 0x106,   34 /* Public | MethodIsConst  */,
      13,    1,  267,    2, 0x106,   36 /* Public | MethodIsConst  */,
      14,    1,  270,    2, 0x106,   38 /* Public | MethodIsConst  */,
      15,    1,  273,    2, 0x106,   40 /* Public | MethodIsConst  */,
      16,    1,  276,    2, 0x106,   42 /* Public | MethodIsConst  */,
      17,    1,  279,    2, 0x106,   44 /* Public | MethodIsConst  */,
      18,    1,  282,    2, 0x106,   46 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  285,    2, 0x0a,   48 /* Public */,
      20,    0,  286,    2, 0x10a,   49 /* Public | MethodIsConst  */,
      21,    0,  287,    2, 0x10a,   50 /* Public | MethodIsConst  */,
      22,    0,  288,    2, 0x10a,   51 /* Public | MethodIsConst  */,
      23,    0,  289,    2, 0x0a,   52 /* Public */,
      24,    0,  290,    2, 0x10a,   53 /* Public | MethodIsConst  */,
      25,    0,  291,    2, 0x10a,   54 /* Public | MethodIsConst  */,
      26,    0,  292,    2, 0x10a,   55 /* Public | MethodIsConst  */,
      27,    0,  293,    2, 0x10a,   56 /* Public | MethodIsConst  */,
      28,    0,  294,    2, 0x0a,   57 /* Public */,
      29,    0,  295,    2, 0x10a,   58 /* Public | MethodIsConst  */,
      30,    0,  296,    2, 0x10a,   59 /* Public | MethodIsConst  */,
      31,    0,  297,    2, 0x10a,   60 /* Public | MethodIsConst  */,
      32,    0,  298,    2, 0x10a,   61 /* Public | MethodIsConst  */,
      33,    0,  299,    2, 0x10a,   62 /* Public | MethodIsConst  */,
      34,    2,  300,    2, 0x0a,   63 /* Public */,
      37,    1,  305,    2, 0x0a,   66 /* Public */,
      39,    0,  308,    2, 0x0a,   68 /* Public */,
      40,    1,  309,    2, 0x0a,   69 /* Public */,
      41,    0,  312,    2, 0x10a,   71 /* Public | MethodIsConst  */,
      42,    0,  313,    2, 0x10a,   72 /* Public | MethodIsConst  */,
      43,    0,  314,    2, 0x10a,   73 /* Public | MethodIsConst  */,
      44,    0,  315,    2, 0x10a,   74 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   35,   36,
    QMetaType::Void, QMetaType::QStringList,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,

 // properties: name, type, flags, notifyId, revision
      45, QMetaType::Int, 0x00015801, uint(0), 0,
      20, QMetaType::Bool, 0x00015801, uint(3), 0,
      21, QMetaType::QString, 0x00015801, uint(4), 0,
      22, QMetaType::QString, 0x00015801, uint(5), 0,
      24, QMetaType::Bool, 0x00015801, uint(6), 0,
      25, QMetaType::QString, 0x00015801, uint(7), 0,
      26, QMetaType::QString, 0x00015801, uint(8), 0,
      29, QMetaType::Bool, 0x00015801, uint(10), 0,
      30, QMetaType::QString, 0x00015801, uint(11), 0,
      31, QMetaType::QString, 0x00015801, uint(12), 0,
      33, QMetaType::QString, 0x00015801, uint(14), 0,
      32, QMetaType::Bool, 0x00015801, uint(13), 0,
      27, QMetaType::Bool, 0x00015801, uint(9), 0,
      46, 0x80000000 | 47, 0x0001510b, uint(-1), 0,
      41, QMetaType::Bool, 0x00015c01, uint(-1), 0,
      42, QMetaType::Bool, 0x00015c01, uint(-1), 0,
      43, QMetaType::Bool, 0x00015c01, uint(-1), 0,
      44, QMetaType::QString, 0x00015c01, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Calamares::ViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ZN9Calamares11ViewManagerE.offsetsAndSizes,
    qt_meta_data_ZN9Calamares11ViewManagerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9Calamares11ViewManagerE_t,
        // property 'currentStepIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'nextEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'nextLabel'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nextIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'backEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'backLabel'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'backIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'quitLabel'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitTooltip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'backAndNextVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'panelSides'
        QtPrivate::TypeAndForceComplete<Qt::Orientations, std::true_type>,
        // property 'isDebugMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isChrootMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSetupMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'logFilePath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ViewManager, std::true_type>,
        // method 'currentStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ensureSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSize, std::false_type>,
        // method 'cancelEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'nextEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'nextLabelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'nextIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'backLabelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backAndNextVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quitEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quitLabelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'quitIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'quitVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quitTooltipChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'nextLabel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'nextIcon'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'backLabel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backIcon'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backAndNextVisible'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quitEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quitLabel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'quitIcon'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'quitVisible'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'quitTooltip'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onInstallationFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onInitFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'onInitComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateNextStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isDebugMode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isChrootMode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isSetupMode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'logFilePath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Calamares::ViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ViewManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentStepChanged(); break;
        case 1: _t->ensureSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: _t->cancelEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->nextEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->nextLabelChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->nextIconChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->backEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->backLabelChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->backIconChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->backAndNextVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->quitEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->quitLabelChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->quitIconChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->quitVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->quitTooltipChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->next(); break;
        case 16: { bool _r = _t->nextEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->nextLabel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->nextIcon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->back(); break;
        case 20: { bool _r = _t->backEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->backLabel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->backIcon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->backAndNextVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->quit(); break;
        case 25: { bool _r = _t->quitEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->quitLabel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->quitIcon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->quitVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->quitTooltip();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->onInstallationFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 31: _t->onInitFailed((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 32: _t->onInitComplete(); break;
        case 33: _t->updateNextStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: { bool _r = _t->isDebugMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->isChrootMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->isSetupMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->logFilePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ViewManager::*)();
            if (_q_method_type _q_method = &ViewManager::currentStepChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QSize ) const;
            if (_q_method_type _q_method = &ViewManager::ensureSize; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::cancelEnabled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::nextEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::nextLabelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::nextIconChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::backEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::backLabelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::backIconChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::backAndNextVisibleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::quitEnabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::quitLabelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::quitIconChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(bool ) const;
            if (_q_method_type _q_method = &ViewManager::quitVisibleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (ViewManager::*)(QString ) const;
            if (_q_method_type _q_method = &ViewManager::quitTooltipChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentStepIndex(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->nextEnabled(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->nextLabel(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->nextIcon(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->backEnabled(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->backLabel(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->backIcon(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->quitEnabled(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->quitLabel(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->quitIcon(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->quitTooltip(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->quitVisible(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->backAndNextVisible(); break;
        case 13: *reinterpret_cast< Qt::Orientations*>(_v) = _t->panelSides(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isDebugMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isChrootMode(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isSetupMode(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->logFilePath(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 13: _t->setPanelSides(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Calamares::ViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::ViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9Calamares11ViewManagerE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Calamares::ViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Calamares::ViewManager::currentStepChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Calamares::ViewManager::ensureSize(QSize _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Calamares::ViewManager::cancelEnabled(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Calamares::ViewManager::nextEnabledChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Calamares::ViewManager::nextLabelChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Calamares::ViewManager::nextIconChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Calamares::ViewManager::backEnabledChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Calamares::ViewManager::backLabelChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Calamares::ViewManager::backIconChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Calamares::ViewManager::backAndNextVisibleChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Calamares::ViewManager::quitEnabledChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Calamares::ViewManager::quitLabelChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Calamares::ViewManager::quitIconChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Calamares::ViewManager::quitVisibleChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Calamares::ViewManager::quitTooltipChanged(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 14, _a);
}
QT_WARNING_POP
