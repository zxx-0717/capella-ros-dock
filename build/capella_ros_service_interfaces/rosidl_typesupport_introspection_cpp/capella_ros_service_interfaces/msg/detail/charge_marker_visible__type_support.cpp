// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/ChargeMarkerVisible.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "capella_ros_service_interfaces/msg/detail/charge_marker_visible__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace capella_ros_service_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChargeMarkerVisible_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) capella_ros_service_interfaces::msg::ChargeMarkerVisible(_init);
}

void ChargeMarkerVisible_fini_function(void * message_memory)
{
  auto typed_message = static_cast<capella_ros_service_interfaces::msg::ChargeMarkerVisible *>(message_memory);
  typed_message->~ChargeMarkerVisible();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChargeMarkerVisible_message_member_array[1] = {
  {
    "marker_visible",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces::msg::ChargeMarkerVisible, marker_visible),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChargeMarkerVisible_message_members = {
  "capella_ros_service_interfaces::msg",  // message namespace
  "ChargeMarkerVisible",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces::msg::ChargeMarkerVisible),
  ChargeMarkerVisible_message_member_array,  // message members
  ChargeMarkerVisible_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeMarkerVisible_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChargeMarkerVisible_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChargeMarkerVisible_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace capella_ros_service_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<capella_ros_service_interfaces::msg::ChargeMarkerVisible>()
{
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::ChargeMarkerVisible_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, capella_ros_service_interfaces, msg, ChargeMarkerVisible)() {
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::ChargeMarkerVisible_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
