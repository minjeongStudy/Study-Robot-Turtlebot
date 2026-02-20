// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
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
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.h"
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool kmj_msg_srv_action_interface__srv__obstacle_state__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("kmj_msg_srv_action_interface.srv._obstacle_state.ObstacleState_Request", full_classname_dest, 70) == 0);
  }
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * ros_message = _ros_message;
  {  // set
    PyObject * field = PyObject_GetAttrString(_pymsg, "set");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kmj_msg_srv_action_interface__srv__obstacle_state__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleState_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kmj_msg_srv_action_interface.srv._obstacle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleState_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * ros_message = (kmj_msg_srv_action_interface__srv__ObstacleState_Request *)raw_ros_message;
  {  // set
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle", field);
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
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.h"
// already included above
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool kmj_msg_srv_action_interface__srv__obstacle_state__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("kmj_msg_srv_action_interface.srv._obstacle_state.ObstacleState_Response", full_classname_dest, 71) == 0);
  }
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * ros_message = _ros_message;
  {  // obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle = (Py_True == field);
    Py_DECREF(field);
  }
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
PyObject * kmj_msg_srv_action_interface__srv__obstacle_state__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleState_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kmj_msg_srv_action_interface.srv._obstacle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleState_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * ros_message = (kmj_msg_srv_action_interface__srv__ObstacleState_Response *)raw_ros_message;
  {  // obstacle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
