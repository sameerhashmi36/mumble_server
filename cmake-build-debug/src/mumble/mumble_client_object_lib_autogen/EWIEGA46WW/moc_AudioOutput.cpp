/****************************************************************************
** Meta object code from reading C++ file 'AudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/mumble/AudioOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioOutput_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioOutput_t qt_meta_stringdata_AudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioOutput"
QT_MOC_LITERAL(1, 12, 18), // "audioSourceFetched"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "float*"
QT_MOC_LITERAL(4, 39, 9), // "outputPCM"
QT_MOC_LITERAL(5, 49, 11), // "sampleCount"
QT_MOC_LITERAL(6, 61, 12), // "channelCount"
QT_MOC_LITERAL(7, 74, 10), // "sampleRate"
QT_MOC_LITERAL(8, 85, 8), // "isSpeech"
QT_MOC_LITERAL(9, 94, 17), // "const ClientUser*"
QT_MOC_LITERAL(10, 112, 4), // "user"
QT_MOC_LITERAL(11, 117, 22), // "audioOutputAboutToPlay"
QT_MOC_LITERAL(12, 140, 5), // "bool*"
QT_MOC_LITERAL(13, 146, 13) // "modifiedAudio"

    },
    "AudioOutput\0audioSourceFetched\0\0float*\0"
    "outputPCM\0sampleCount\0channelCount\0"
    "sampleRate\0isSpeech\0const ClientUser*\0"
    "user\0audioOutputAboutToPlay\0bool*\0"
    "modifiedAudio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   24,    2, 0x06 /* Public */,
      11,    5,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, 0x80000000 | 9,    4,    5,    6,    7,    8,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 12,    4,    5,    6,    7,   13,

       0        // eod
};

void AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->audioSourceFetched((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const ClientUser*(*)>(_a[6]))); break;
        case 1: _t->audioOutputAboutToPlay((*reinterpret_cast< float*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool*(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioOutput::*)(float * , unsigned int , unsigned int , unsigned int , bool , const ClientUser * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::audioSourceFetched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioOutput::*)(float * , unsigned int , unsigned int , unsigned int , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::audioOutputAboutToPlay)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_AudioOutput.data,
    qt_meta_data_AudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioOutput.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AudioOutput::audioSourceFetched(float * _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4, bool _t5, const ClientUser * _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioOutput::audioOutputAboutToPlay(float * _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4, bool * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
