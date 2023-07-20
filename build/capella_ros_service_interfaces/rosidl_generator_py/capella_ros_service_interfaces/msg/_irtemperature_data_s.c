// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
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
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__struct.h"
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_service_interfaces__msg__irtemperature_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("capella_ros_service_interfaces.msg._irtemperature_data.IrtemperatureData", full_classname_dest, 72) == 0);
  }
  capella_ros_service_interfaces__msg__IrtemperatureData * ros_message = _ros_message;
  {  // irtemperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "irtemperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->irtemperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // center_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_service_interfaces__msg__irtemperature_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IrtemperatureData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_service_interfaces.msg._irtemperature_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IrtemperatureData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_service_interfaces__msg__IrtemperatureData * ros_message = (capella_ros_service_interfaces__msg__IrtemperatureData *)raw_ros_message;
  {  // irtemperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->irtemperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "irtemperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->center_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
