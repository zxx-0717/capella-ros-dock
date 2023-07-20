// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "capella_ros_service_interfaces/msg/detail/irimage_data__struct.hpp"
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

void IrimageData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) capella_ros_service_interfaces::msg::IrimageData(_init);
}

void IrimageData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<capella_ros_service_interfaces::msg::IrimageData *>(message_memory);
  typed_message->~IrimageData();
}

size_t size_function__IrimageData__irimage(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IrimageData__irimage(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__IrimageData__irimage(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__IrimageData__irimage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__IrimageData__irimage(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__IrimageData__irimage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__IrimageData__irimage(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__IrimageData__irimage(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IrimageData__irtemp_and_coord(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<capella_ros_service_interfaces::msg::IrtemperatureData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IrimageData__irtemp_and_coord(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<capella_ros_service_interfaces::msg::IrtemperatureData> *>(untyped_member);
  return &member[index];
}

void * get_function__IrimageData__irtemp_and_coord(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<capella_ros_service_interfaces::msg::IrtemperatureData> *>(untyped_member);
  return &member[index];
}

void fetch_function__IrimageData__irtemp_and_coord(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const capella_ros_service_interfaces::msg::IrtemperatureData *>(
    get_const_function__IrimageData__irtemp_and_coord(untyped_member, index));
  auto & value = *reinterpret_cast<capella_ros_service_interfaces::msg::IrtemperatureData *>(untyped_value);
  value = item;
}

void assign_function__IrimageData__irtemp_and_coord(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<capella_ros_service_interfaces::msg::IrtemperatureData *>(
    get_function__IrimageData__irtemp_and_coord(untyped_member, index));
  const auto & value = *reinterpret_cast<const capella_ros_service_interfaces::msg::IrtemperatureData *>(untyped_value);
  item = value;
}

void resize_function__IrimageData__irtemp_and_coord(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<capella_ros_service_interfaces::msg::IrtemperatureData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IrimageData_message_member_array[2] = {
  {
    "irimage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces::msg::IrimageData, irimage),  // bytes offset in struct
    nullptr,  // default value
    size_function__IrimageData__irimage,  // size() function pointer
    get_const_function__IrimageData__irimage,  // get_const(index) function pointer
    get_function__IrimageData__irimage,  // get(index) function pointer
    fetch_function__IrimageData__irimage,  // fetch(index, &value) function pointer
    assign_function__IrimageData__irimage,  // assign(index, value) function pointer
    resize_function__IrimageData__irimage  // resize(index) function pointer
  },
  {
    "irtemp_and_coord",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<capella_ros_service_interfaces::msg::IrtemperatureData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces::msg::IrimageData, irtemp_and_coord),  // bytes offset in struct
    nullptr,  // default value
    size_function__IrimageData__irtemp_and_coord,  // size() function pointer
    get_const_function__IrimageData__irtemp_and_coord,  // get_const(index) function pointer
    get_function__IrimageData__irtemp_and_coord,  // get(index) function pointer
    fetch_function__IrimageData__irtemp_and_coord,  // fetch(index, &value) function pointer
    assign_function__IrimageData__irtemp_and_coord,  // assign(index, value) function pointer
    resize_function__IrimageData__irtemp_and_coord  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IrimageData_message_members = {
  "capella_ros_service_interfaces::msg",  // message namespace
  "IrimageData",  // message name
  2,  // number of fields
  sizeof(capella_ros_service_interfaces::msg::IrimageData),
  IrimageData_message_member_array,  // message members
  IrimageData_init_function,  // function to initialize message memory (memory has to be allocated)
  IrimageData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IrimageData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IrimageData_message_members,
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
get_message_type_support_handle<capella_ros_service_interfaces::msg::IrimageData>()
{
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::IrimageData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, capella_ros_service_interfaces, msg, IrimageData)() {
  return &::capella_ros_service_interfaces::msg::rosidl_typesupport_introspection_cpp::IrimageData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
