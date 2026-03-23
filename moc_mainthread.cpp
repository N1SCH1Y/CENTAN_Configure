/****************************************************************************
** Meta object code from reading C++ file 'mainthread.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainthread.h"
#include "qdatetime.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN10MainThreadE_t {};
} // unnamed namespace

template <> constexpr inline auto MainThread::qt_create_metaobjectdata<qt_meta_tag_ZN10MainThreadE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainThread",
        "InsertIdLineEmit",
        "",
        "SettingsReadMsg",
        "InsertSensTimePollSpinLineEmit",
        "TimeNeed",
        "InsertDevModeLineEmit",
        "SMS",
        "Call",
        "RemoteArg",
        "Standalone",
        "InsertSensModeLineEmit",
        "CO",
        "CH4",
        "InsertDateLineEmit",
        "date",
        "InsertHWVerLineEmit",
        "InsertVendorLineEmit",
        "InsertProductLineEmit",
        "InsertMFGNumberLineEmit",
        "InsertSerialLineEmit",
        "InsertMQTTTopicMOLineEmit",
        "InsertMQTTTopicMTLineEmit",
        "InsertMQTTPassLineEmit",
        "InsertMQTTLoginLineEmit",
        "InsertMQTTIDLineEmit",
        "InsertAPNLineEmit",
        "InsertPortLineEmit",
        "InsertIPLineEmit",
        "AccessAtmodEmit",
        "AccessCertEmit",
        "WrongAtmodEmit",
        "SendATMODEmit",
        "SendCERTEmit",
        "ErrorUpdateEmit",
        "SuccessUpdateEmit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'InsertIdLineEmit'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SettingsReadMsg'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertSensTimePollSpinLineEmit'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'InsertDevModeLineEmit'
        QtMocHelpers::SignalData<void(int, int, int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 }, { QMetaType::Int, 9 }, { QMetaType::Int, 10 },
        }}),
        // Signal 'InsertSensModeLineEmit'
        QtMocHelpers::SignalData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Signal 'InsertDateLineEmit'
        QtMocHelpers::SignalData<void(QDate)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QDate, 15 },
        }}),
        // Signal 'InsertHWVerLineEmit'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertVendorLineEmit'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertProductLineEmit'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMFGNumberLineEmit'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertSerialLineEmit'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMQTTTopicMOLineEmit'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMQTTTopicMTLineEmit'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMQTTPassLineEmit'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMQTTLoginLineEmit'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertMQTTIDLineEmit'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertAPNLineEmit'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertPortLineEmit'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'InsertIPLineEmit'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'AccessAtmodEmit'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'AccessCertEmit'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'WrongAtmodEmit'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SendATMODEmit'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SendCERTEmit'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ErrorUpdateEmit'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'SuccessUpdateEmit'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainThread, qt_meta_tag_ZN10MainThreadE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainThreadE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainThreadE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainThreadE_t>.metaTypes,
    nullptr
} };

void MainThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainThread *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->InsertIdLineEmit(); break;
        case 1: _t->SettingsReadMsg(); break;
        case 2: _t->InsertSensTimePollSpinLineEmit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->InsertDevModeLineEmit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 4: _t->InsertSensModeLineEmit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->InsertDateLineEmit((*reinterpret_cast<std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->InsertHWVerLineEmit(); break;
        case 7: _t->InsertVendorLineEmit(); break;
        case 8: _t->InsertProductLineEmit(); break;
        case 9: _t->InsertMFGNumberLineEmit(); break;
        case 10: _t->InsertSerialLineEmit(); break;
        case 11: _t->InsertMQTTTopicMOLineEmit(); break;
        case 12: _t->InsertMQTTTopicMTLineEmit(); break;
        case 13: _t->InsertMQTTPassLineEmit(); break;
        case 14: _t->InsertMQTTLoginLineEmit(); break;
        case 15: _t->InsertMQTTIDLineEmit(); break;
        case 16: _t->InsertAPNLineEmit(); break;
        case 17: _t->InsertPortLineEmit(); break;
        case 18: _t->InsertIPLineEmit(); break;
        case 19: _t->AccessAtmodEmit(); break;
        case 20: _t->AccessCertEmit(); break;
        case 21: _t->WrongAtmodEmit(); break;
        case 22: _t->SendATMODEmit(); break;
        case 23: _t->SendCERTEmit(); break;
        case 24: _t->ErrorUpdateEmit(); break;
        case 25: _t->SuccessUpdateEmit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertIdLineEmit, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::SettingsReadMsg, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)(int )>(_a, &MainThread::InsertSensTimePollSpinLineEmit, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)(int , int , int , int )>(_a, &MainThread::InsertDevModeLineEmit, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)(int , int )>(_a, &MainThread::InsertSensModeLineEmit, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)(QDate )>(_a, &MainThread::InsertDateLineEmit, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertHWVerLineEmit, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertVendorLineEmit, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertProductLineEmit, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMFGNumberLineEmit, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertSerialLineEmit, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMQTTTopicMOLineEmit, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMQTTTopicMTLineEmit, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMQTTPassLineEmit, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMQTTLoginLineEmit, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertMQTTIDLineEmit, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertAPNLineEmit, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertPortLineEmit, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::InsertIPLineEmit, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::AccessAtmodEmit, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::AccessCertEmit, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::WrongAtmodEmit, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::SendATMODEmit, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::SendCERTEmit, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::ErrorUpdateEmit, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainThread::*)()>(_a, &MainThread::SuccessUpdateEmit, 25))
            return;
    }
}

const QMetaObject *MainThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainThreadE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MainThread::InsertIdLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainThread::SettingsReadMsg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainThread::InsertSensTimePollSpinLineEmit(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainThread::InsertDevModeLineEmit(int _t1, int _t2, int _t3, int _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void MainThread::InsertSensModeLineEmit(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void MainThread::InsertDateLineEmit(QDate _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MainThread::InsertHWVerLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainThread::InsertVendorLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainThread::InsertProductLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainThread::InsertMFGNumberLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainThread::InsertSerialLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainThread::InsertMQTTTopicMOLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainThread::InsertMQTTTopicMTLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainThread::InsertMQTTPassLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainThread::InsertMQTTLoginLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainThread::InsertMQTTIDLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MainThread::InsertAPNLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MainThread::InsertPortLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MainThread::InsertIPLineEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MainThread::AccessAtmodEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MainThread::AccessCertEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MainThread::WrongAtmodEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainThread::SendATMODEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MainThread::SendCERTEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MainThread::ErrorUpdateEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MainThread::SuccessUpdateEmit()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
