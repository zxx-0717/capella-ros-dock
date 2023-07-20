// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from capella_ros_msg:srv/ChargePileWifi.idl
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
#include "capella_ros_msg/srv/detail/charge_pile_wifi__struct.h"
#include "capella_ros_msg/srv/detail/charge_pile_wifi__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_msg__srv__charge_pile_wifi__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("capella_ros_msg.srv._charge_pile_wifi.ChargePileWifi_Request", full_classname_dest, 60) == 0);
  }
  capella_ros_msg__srv__ChargePileWifi_Request * ros_message = _ros_message;
  {  // ssid
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ssid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_msg__srv__charge_pile_wifi__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargePileWifi_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_msg.srv._charge_pile_wifi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargePileWifi_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_msg__srv__ChargePileWifi_Request * ros_message = (capella_ros_msg__srv__ChargePileWifi_Request *)raw_ros_message;
  {  // ssid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ssid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ssid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "capella_ros_msg/srv/detail/charge_pile_wifi__struct.h"
// already included above
// #include "capella_ros_msg/srv/detail/charge_pile_wifi__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_msg__srv__charge_pile_wifi__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("capella_ros_msg.srv._charge_pile_wifi.ChargePileWifi_Response", full_classname_dest, 61) == 0);
  }
  capella_ros_msg__srv__ChargePileWifi_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_msg__srv__charge_pile_wifi__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargePileWifi_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_msg.srv._charge_pile_wifi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargePileWifi_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_msg__srv__ChargePileWifi_Response * ros_message = (capella_ros_msg__srv__ChargePileWifi_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
