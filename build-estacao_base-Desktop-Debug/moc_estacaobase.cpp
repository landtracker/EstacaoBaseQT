/****************************************************************************
** Meta object code from reading C++ file 'estacaobase.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../estacao_base/estacaobase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'estacaobase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EstacaoBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      47,   12,   12,   12, 0x08,
      90,   12,   12,   12, 0x08,
      99,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EstacaoBase[] = {
    "EstacaoBase\0\0on_pushButtonAddCommand_clicked()\0"
    "on_pushButtonSendToEmbededSystem_clicked()\0"
    "update()\0on_EstacaoBase_destroyed()\0"
};

void EstacaoBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EstacaoBase *_t = static_cast<EstacaoBase *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonAddCommand_clicked(); break;
        case 1: _t->on_pushButtonSendToEmbededSystem_clicked(); break;
        case 2: _t->update(); break;
        case 3: _t->on_EstacaoBase_destroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EstacaoBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EstacaoBase::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EstacaoBase,
      qt_meta_data_EstacaoBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EstacaoBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EstacaoBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EstacaoBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EstacaoBase))
        return static_cast<void*>(const_cast< EstacaoBase*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EstacaoBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
