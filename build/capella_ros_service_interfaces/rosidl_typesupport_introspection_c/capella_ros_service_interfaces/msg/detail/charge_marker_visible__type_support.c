// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__rosidl_typesupport_introspection_c.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__functions.h"
#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__msg__ChargeMarkerVisible__init(message_memory);
}

void capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__msg__ChargeMarkerVisible__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_member_array[1] = {
  {
    "marker_visible",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__msg__ChargeMarkerVisible, marker_visible),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_members = {
  "capella_ros_service_interfaces__msg",  // message namespace
  "ChargeMarkerVisible",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces__msg__ChargeMarkerVisible),
  capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_member_array,  // message members
  capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, msg, ChargeMarkerVisible)() {
  if (!capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__msg__ChargeMarkerVisible__rosidl_typesupport_introspection_c__ChargeMarkerVisible_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
