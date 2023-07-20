// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/charge_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "capella_ros_service_interfaces/msg/detail/charge_state__struct.hpp"

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
  const capella_ros_service_interfaces::msg::ChargeState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pid
  cdr << ros_message.pid;
  // Member: has_contact
  cdr << (ros_message.has_contact ? true : false);
  // Member: is_charging
  cdr << (ros_message.is_charging ? true : false);
  // Member: is_docking
  cdr << (ros_message.is_docking ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capella_ros_service_interfaces::msg::ChargeState & ros_message)
{
  // Member: pid
  cdr >> ros_message.pid;

  // Member: has_contact
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_contact = tmp ? true : false;
  }

  // Member: is_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_charging = tmp ? true : false;
  }

  // Member: is_docking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_docking = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
get_serialized_size(
  const capella_ros_service_interfaces::msg::ChargeState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.pid.size() + 1);
  // Member: has_contact
  {
    size_t item_size = sizeof(ros_message.has_contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_charging
  {
    size_t item_size = sizeof(ros_message.is_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_docking
  {
    size_t item_size = sizeof(ros_message.is_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
max_serialized_size_ChargeState(
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


  // Member: pid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: has_contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_docking
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ChargeState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::ChargeState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChargeState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<capella_ros_service_interfaces::msg::ChargeState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChargeState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::ChargeState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChargeState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChargeState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChargeState__callbacks = {
  "capella_ros_service_interfaces::msg",
  "ChargeState",
  _ChargeState__cdr_serialize,
  _ChargeState__cdr_deserialize,
  _ChargeState__get_serialized_size,
  _ChargeState__max_serialized_size
};

static rosidl_message_type_support_t _ChargeState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChargeState__callbacks,
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
get_message_type_support_handle<capella_ros_service_interfaces::msg::ChargeState>()
{
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_ChargeState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capella_ros_service_interfaces, msg, ChargeState)() {
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_ChargeState__handle;
}

#ifdef __cplusplus
}
#endif
