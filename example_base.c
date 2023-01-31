// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from example_msgs:msg/Example.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION

#include <Python.h>
#include <structmember.h>
#include <stdbool.h>

typedef struct {
    PyObject_HEAD
    /* Type-specific fields go here. */
    PyObject* _header;
    uint32_t _id;
    float _gauge;
    PyObject* _tags;
} ExampleBase;

static struct PyMemberDef ExampleBase_members[] = {
    {"_header", T_OBJECT,    offsetof(ExampleBase, _header), 0, NULL},
    {"_id", T_UINT,    offsetof(ExampleBase, _id), 0, NULL},
    {"_gauge", T_FLOAT,    offsetof(ExampleBase, _gauge), 0, NULL},
    {"_tags", T_OBJECT,    offsetof(ExampleBase, _tags), 0, NULL},
    {NULL}  /* Sentinel */
};


static PyTypeObject ExampleBaseType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ExampleBase",
    .tp_doc = "Base for Example python class",
    .tp_basicsize = sizeof(ExampleBase),
    .tp_itemsize = 0,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_new = PyType_GenericNew,
    .tp_members = ExampleBase_members,
};


int8_t _register_base_msg_type__msg___example(PyObject *module)
{
    if (PyType_Ready(&ExampleBaseType) < 0)
        return 1;

    PyObject* slots_tuple = Py_BuildValue("(ssss)", "_header", "_id", "_gauge", "_tags");
    if (!slots_tuple) {
        return 1;
    }
    int err = PyDict_SetItemString(ExampleBaseType.tp_dict, "__slots__", slots_tuple);
    Py_DECREF(slots_tuple);
    if (err) {
        return 1;
    }

    Py_INCREF(&ExampleBaseType);
    if (PyModule_AddObject(module, "ExampleBase", (PyObject *) &ExampleBaseType) < 0) {
        Py_DECREF(&ExampleBaseType);
        return 1;
    }
    return 0;
}

static PyModuleDef _module = {
    PyModuleDef_HEAD_INIT,
    .m_name = "_example_base",
    .m_doc = "Extension module for _example messages",
    .m_size = -1,
};


PyMODINIT_FUNC
PyInit__example_base(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&_module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_base_msg_type__msg___example(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
