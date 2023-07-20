// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
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
#include "capella_ros_service_interfaces/msg/detail/charge_state__struct.h"
#include "capella_ros_service_interfaces/msg/detail/charge_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_service_interfaces__msg__charge_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("capella_ros_service_interfaces.msg._charge_state.ChargeState", full_classname_dest, 60) == 0);
  }
  capella_ros_service_interfaces__msg__ChargeState * ros_message = _ros_message;
  {  // pid
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // has_contact
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_contact");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_contact = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_docking
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_docking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_docking = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_service_interfaces__msg__charge_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_service_interfaces.msg._charge_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_service_interfaces__msg__ChargeState * ros_message = (capella_ros_service_interfaces__msg__ChargeState *)raw_ros_message;
  {  // pid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pid.data,
      strlen(ros_message->pid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_contact
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_contact ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_contact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_docking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_docking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_docking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
