/****************************************************************************
** Meta object code from reading C++ file 'cloudviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cloudviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloudviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CloudViewer_t {
    QByteArrayData data[20];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloudViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloudViewer_t qt_meta_stringdata_CloudViewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CloudViewer"
QT_MOC_LITERAL(1, 12, 15), // "colorBtnPressed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "RGBsliderReleased"
QT_MOC_LITERAL(4, 47, 15), // "psliderReleased"
QT_MOC_LITERAL(5, 63, 14), // "pSliderChanged"
QT_MOC_LITERAL(6, 78, 5), // "value"
QT_MOC_LITERAL(7, 84, 14), // "rSliderChanged"
QT_MOC_LITERAL(8, 99, 14), // "gSliderChanged"
QT_MOC_LITERAL(9, 114, 14), // "bSliderChanged"
QT_MOC_LITERAL(10, 129, 13), // "cooCbxChecked"
QT_MOC_LITERAL(11, 143, 13), // "bgcCbxChecked"
QT_MOC_LITERAL(12, 157, 17), // "pointcolorChanged"
QT_MOC_LITERAL(13, 175, 14), // "bgcolorChanged"
QT_MOC_LITERAL(14, 190, 8), // "mainview"
QT_MOC_LITERAL(15, 199, 8), // "leftview"
QT_MOC_LITERAL(16, 208, 7), // "topview"
QT_MOC_LITERAL(17, 216, 12), // "itemSelected"
QT_MOC_LITERAL(18, 229, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(19, 246, 7) // "popMenu"

    },
    "CloudViewer\0colorBtnPressed\0\0"
    "RGBsliderReleased\0psliderReleased\0"
    "pSliderChanged\0value\0rSliderChanged\0"
    "gSliderChanged\0bSliderChanged\0"
    "cooCbxChecked\0bgcCbxChecked\0"
    "pointcolorChanged\0bgcolorChanged\0"
    "mainview\0leftview\0topview\0itemSelected\0"
    "QTreeWidgetItem*\0popMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloudViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    1,   97,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       8,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
      10,    1,  109,    2, 0x0a /* Public */,
      11,    1,  112,    2, 0x0a /* Public */,
      12,    0,  115,    2, 0x0a /* Public */,
      13,    0,  116,    2, 0x0a /* Public */,
      14,    0,  117,    2, 0x0a /* Public */,
      15,    0,  118,    2, 0x0a /* Public */,
      16,    0,  119,    2, 0x0a /* Public */,
      17,    2,  120,    2, 0x0a /* Public */,
      19,    1,  125,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void CloudViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CloudViewer *_t = static_cast<CloudViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorBtnPressed(); break;
        case 1: _t->RGBsliderReleased(); break;
        case 2: _t->psliderReleased(); break;
        case 3: _t->pSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->bSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->cooCbxChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->bgcCbxChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->pointcolorChanged(); break;
        case 10: _t->bgcolorChanged(); break;
        case 11: _t->mainview(); break;
        case 12: _t->leftview(); break;
        case 13: _t->topview(); break;
        case 14: _t->itemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->popMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CloudViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CloudViewer.data,
      qt_meta_data_CloudViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CloudViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloudViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CloudViewer.stringdata0))
        return static_cast<void*>(const_cast< CloudViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CloudViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
