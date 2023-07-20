// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_service_interfaces:srv/StopNavAndCarto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__rosidl_typesupport_introspection_c.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__functions.h"
#include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__init(message_memory);
}

void capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_members = {
  "capella_ros_service_interfaces__srv",  // message namespace
  "StopNavAndCarto_Request",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request),
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_member_array,  // message members
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Request)() {
  if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__srv__StopNavAndCarto_Request__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__rosidl_typesupport_introspection_c.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__functions.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__init(message_memory);
}

void capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_members = {
  "capella_ros_service_interfaces__srv",  // message namespace
  "StopNavAndCarto_Response",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response),
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_member_array,  // message members
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Response)() {
  if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__srv__StopNavAndCarto_Response__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_members = {
  "capella_ros_service_interfaces__srv",  // service namespace
  "StopNavAndCarto",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_Request_message_type_support_handle,
  NULL  // response message
  // capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_Response_message_type_support_handle
};

static rosidl_service_type_support_t capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_type_support_handle = {
  0,
  &capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto)() {
  if (!capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, srv, StopNavAndCarto_Response)()->data;
  }

  return &capella_ros_service_interfaces__srv__detail__stop_nav_and_carto__rosidl_typesupport_introspection_c__StopNavAndCarto_service_type_support_handle;
}
