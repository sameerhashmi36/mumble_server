/****************************************************************************
** Meta object code from reading C++ file 'AudioOutputSpeech.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/mumble/AudioOutputSpeech.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioOutputSpeech.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioOutputSpeech_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioOutputSpeech_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioOutputSpeech_t qt_meta_stringdata_AudioOutputSpeech = {
    {
QT_MOC_LITERAL(0, 0, 17) // "AudioOutputSpeech"

    },
    "AudioOutputSpeech"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioOutputSpeech[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AudioOutputSpeech::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AudioOutputSpeech::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioOutputUser::staticMetaObject>(),
    qt_meta_stringdata_AudioOutputSpeech.data,
    qt_meta_data_AudioOutputSpeech,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioOutputSpeech::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioOutputSpeech::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioOutputSpeech.stringdata0))
        return static_cast<void*>(this);
    return AudioOutputUser::qt_metacast(_clname);
}

int AudioOutputSpeech::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioOutputUser::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
