// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from capella_ros_service_interfaces:srv/InfraredFaceDetection.idl
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
#include "capella_ros_service_interfaces/srv/detail/infrared_face_detection__struct.h"
#include "capella_ros_service_interfaces/srv/detail/infrared_face_detection__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_service_interfaces__srv__infrared_face_detection__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[90];
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
    assert(strncmp("capella_ros_service_interfaces.srv._infrared_face_detection.InfraredFaceDetection_Request", full_classname_dest, 89) == 0);
  }
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Request * ros_message = _ros_message;
  {  // infrared_face_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "infrared_face_detection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infrared_face_detection = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_service_interfaces__srv__infrared_face_detection__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InfraredFaceDetection_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_service_interfaces.srv._infrared_face_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InfraredFaceDetection_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Request * ros_message = (capella_ros_service_interfaces__srv__InfraredFaceDetection_Request *)raw_ros_message;
  {  // infrared_face_detection
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infrared_face_detection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infrared_face_detection", field);
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
// #include "capella_ros_service_interfaces/srv/detail/infrared_face_detection__struct.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/infrared_face_detection__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_service_interfaces__srv__infrared_face_detection__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[91];
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
    assert(strncmp("capella_ros_service_interfaces.srv._infrared_face_detection.InfraredFaceDetection_Response", full_classname_dest, 90) == 0);
  }
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Response * ros_message = _ros_message;
  {  // face_detection_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "face_detection_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->face_detection_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_service_interfaces__srv__infrared_face_detection__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InfraredFaceDetection_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_service_interfaces.srv._infrared_face_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InfraredFaceDetection_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_service_interfaces__srv__InfraredFaceDetection_Response * ros_message = (capella_ros_service_interfaces__srv__InfraredFaceDetection_Response *)raw_ros_message;
  {  // face_detection_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->face_detection_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "face_detection_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
