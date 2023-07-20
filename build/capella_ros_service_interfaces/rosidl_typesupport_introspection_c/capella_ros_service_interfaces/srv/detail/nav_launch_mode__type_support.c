// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__rosidl_typesupport_introspection_c.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__functions.h"
#include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__struct.h"


// Include directives for member types
// Member `image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__init(message_memory);
}

void capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__fini(message_memory);
}

size_t capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__size_function__NavLaunchMode_Request__image(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_const_function__NavLaunchMode_Request__image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_function__NavLaunchMode_Request__image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__fetch_function__NavLaunchMode_Request__image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_const_function__NavLaunchMode_Request__image(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__assign_function__NavLaunchMode_Request__image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_function__NavLaunchMode_Request__image(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__resize_function__NavLaunchMode_Request__image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_member_array[8] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, image),  // bytes offset in struct
    NULL,  // default value
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__size_function__NavLaunchMode_Request__image,  // size() function pointer
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_const_function__NavLaunchMode_Request__image,  // get_const(index) function pointer
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__get_function__NavLaunchMode_Request__image,  // get(index) function pointer
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__fetch_function__NavLaunchMode_Request__image,  // fetch(index, &value) function pointer
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__assign_function__NavLaunchMode_Request__image,  // assign(index, value) function pointer
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__resize_function__NavLaunchMode_Request__image  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "negate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, negate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "occupied_thresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, occupied_thresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_thresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Request, free_thresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_members = {
  "capella_ros_service_interfaces__srv",  // message namespace
  "NavLaunchMode_Request",  // message name
  8,  // number of fields
  sizeof(capella_ros_service_interfaces__srv__NavLaunchMode_Request),
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_member_array,  // message members
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Request)() {
  if (!capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__srv__NavLaunchMode_Request__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__functions.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__srv__NavLaunchMode_Response__init(message_memory);
}

void capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__srv__NavLaunchMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_member_array[1] = {
  {
    "nav_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__NavLaunchMode_Response, nav_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_members = {
  "capella_ros_service_interfaces__srv",  // message namespace
  "NavLaunchMode_Response",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces__srv__NavLaunchMode_Response),
  capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_member_array,  // message members
  capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Response)() {
  if (!capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__srv__NavLaunchMode_Response__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/nav_launch_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_members = {
  "capella_ros_service_interfaces__srv",  // service namespace
  "NavLaunchMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_Request_message_type_support_handle,
  NULL  // response message
  // capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode)() {
  if (!capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, NavLaunchMode_Response)()->data;
  }

  return &capella_ros_service_interfaces__srv__detail__nav_launch_mode__rosidl_typesupport_introspection_c__NavLaunchMode_service_type_support_handle;
}
