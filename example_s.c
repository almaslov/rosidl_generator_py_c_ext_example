// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from example_msgs:msg/Example.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "example_msgs/msg/detail/example__struct.h"
#include "example_msgs/msg/detail/example__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

typedef struct {
    PyObject_HEAD
    /* Type-specific fields go here. */
    PyObject* _header;
    uint32_t _id;
    float _gauge;
    PyObject* _tags;
} ExampleBase;


static PyObject* lazy_import_ndarray() {
  // TODO proper deinitialization
  static PyObject* result = NULL;
  if (result != NULL) {
    return result;
  }

  PyObject* array_module = PyImport_ImportModule("numpy");
  if (!array_module) {
    return NULL;
  }
  result = PyObject_GetAttrString(array_module, "ndarray");
  return result;
}


ROSIDL_GENERATOR_C_EXPORT
bool example_msgs__msg__example__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("example_msgs.msg._example.Example", full_classname_dest, 33) == 0);
  }
  example_msgs__msg__Example * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tags
    PyObject * field = PyObject_GetAttrString(_pymsg, "tags");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 8;
      uint8_t * dest = ros_message->tags;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * example_msgs__msg__example__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Example */
  ExampleBase * _pymessage = NULL;
  {
    // TODO proper deinitialization
    static PyObject * pymessage_class = NULL;
    if (pymessage_class == NULL) {
      PyObject * pymessage_module = PyImport_ImportModule("example_msgs.msg._example");
      assert(pymessage_module);
      pymessage_class = PyObject_GetAttrString(pymessage_module, "Example");
      assert(pymessage_class);
      Py_DECREF(pymessage_module);
      if (!PyType_Check(pymessage_class)) {
        PyErr_SetString(PyExc_RuntimeError, "Example is not a python type");
        return NULL;
      }
    }
    PyTypeObject* type = (PyTypeObject*)pymessage_class;
    assert(type->tp_new);

    PyObject* empty_tuple = PyTuple_New(0);
    if (!empty_tuple) {
      return NULL;
    }

    _pymessage = (ExampleBase*)type->tp_new(type, empty_tuple, NULL);
    // Py_DECREF(pymessage_class);
    Py_DECREF(empty_tuple);
    if (!_pymessage) {
      return NULL;
    }
  }
  example_msgs__msg__Example * ros_message = (example_msgs__msg__Example *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    // reference is transfered to object
    _pymessage->_header = field;
  }
  {  // id
    _pymessage->_id = ros_message->id;
  }
  {  // gauge
    _pymessage->_gauge = ros_message->gauge;
  }
  {  // tags
    PyObject * field = NULL;
    PyObject* array_type = lazy_import_ndarray();
    PyObject* dims = Py_BuildValue("(i)", 8);
    PyObject* type_code = PyUnicode_FromOrdinal('B');
    field = PyObject_CallFunctionObjArgs(array_type, dims, type_code, NULL);
    if (!field) {
      return NULL;
    }
    Py_DECREF(type_code);
    Py_DECREF(dims);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->tags[0]);
    memcpy(dst, src, 8 * sizeof(uint8_t));
    // reference is transfered to object
    _pymessage->_tags = field;
  }

  // ownership of _pymessage is transferred to the caller
  return (PyObject*)_pymessage;
}
