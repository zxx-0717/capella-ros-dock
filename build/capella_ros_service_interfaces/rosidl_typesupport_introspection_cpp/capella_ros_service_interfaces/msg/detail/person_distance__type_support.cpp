// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/PersonDistance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "capella_ros_service_interfaces/msg/detail/person_distance__struct.hpp"
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

void PersonDistance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) capella_ros_service_interfaces::msg::PersonDistance(_init);
}

void PersonDistance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<capella_ros_service_interfaces::msg::PersonDistance *>(message_memory);
  typed_message->~PersonDistance();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PersonDistance_message_member_array[1] = {
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces::msg::PersonDistance, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PersonDistance_message_members = {
  "capella_ros_service_interfaces::msg",  // message namespace
  "PersonDistance",  // message name
  1,  // number of fields
  sizeof(capella_ros_service_interfaces::msg::PersonDistance),
  PersonDistance_message_member_array,  // message members
  PersonDistance_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonDistance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PersonDistance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PersonDistance_message_members,
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
get_message_type_support_handle<capella_ros_service_interfaces::msg::PersonDistance>()
{
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::PersonDistance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, capella_ros_service_interfaces, msg, PersonDistance)() {
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::PersonDistance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
