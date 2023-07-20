// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/IrdetectionStatus.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/irdetection_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "capella_ros_service_interfaces/msg/detail/irdetection_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace capella_ros_service_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
cdr_serialize(
  const capella_ros_service_interfaces::msg::IrdetectionStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: irdetection_status
  cdr << ros_message.irdetection_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capella_ros_service_interfaces::msg::IrdetectionStatus & ros_message)
{
  // Member: irdetection_status
  cdr >> ros_message.irdetection_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
get_serialized_size(
  const capella_ros_service_interfaces::msg::IrdetectionStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: irdetection_status
  {
    size_t item_size = sizeof(ros_message.irdetection_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
max_serialized_size_IrdetectionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: irdetection_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IrdetectionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::IrdetectionStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IrdetectionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<capella_ros_service_interfaces::msg::IrdetectionStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IrdetectionStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::IrdetectionStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IrdetectionStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IrdetectionStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IrdetectionStatus__callbacks = {
  "capella_ros_service_interfaces::msg",
  "IrdetectionStatus",
  _IrdetectionStatus__cdr_serialize,
  _IrdetectionStatus__cdr_deserialize,
  _IrdetectionStatus__get_serialized_size,
  _IrdetectionStatus__max_serialized_size
};

static rosidl_message_type_support_t _IrdetectionStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IrdetectionStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace capella_ros_service_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<capella_ros_service_interfaces::msg::IrdetectionStatus>()
{
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_IrdetectionStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capella_ros_service_interfaces, msg, IrdetectionStatus)() {
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_IrdetectionStatus__handle;
}

#ifdef __cplusplus
}
#endif
