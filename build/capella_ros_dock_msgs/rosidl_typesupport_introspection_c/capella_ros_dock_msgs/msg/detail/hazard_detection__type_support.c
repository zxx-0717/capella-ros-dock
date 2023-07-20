// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_dock_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_dock_msgs/msg/detail/hazard_detection__rosidl_typesupport_introspection_c.h"
#include "capella_ros_dock_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_dock_msgs/msg/detail/hazard_detection__functions.h"
#include "capella_ros_dock_msgs/msg/detail/hazard_detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_dock_msgs__msg__HazardDetection__init(message_memory);
}

void capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_fini_function(void * message_memory)
{
  capella_ros_dock_msgs__msg__HazardDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_dock_msgs__msg__HazardDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_dock_msgs__msg__HazardDetection, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_members = {
  "capella_ros_dock_msgs__msg",  // message namespace
  "HazardDetection",  // message name
  2,  // number of fields
  sizeof(capella_ros_dock_msgs__msg__HazardDetection),
  capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_member_array,  // message members
  capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_type_support_handle = {
  0,
  &capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_dock_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_dock_msgs, msg, HazardDetection)() {
  capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_type_support_handle.typesupport_identifier) {
    capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_dock_msgs__msg__HazardDetection__rosidl_typesupport_introspection_c__HazardDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
