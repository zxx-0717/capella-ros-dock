// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
// generated code does not contain a copyright notice
#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__struct.hpp"

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

namespace capella_ros_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_msg
cdr_serialize(
  const capella_ros_msg::msg::AtomizeSwitchCtrStu & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: emer_button
  cdr << (ros_message.emer_button ? true : false);
  // Member: atomize_sw
  cdr << (ros_message.atomize_sw ? true : false);
  // Member: strength
  cdr << ros_message.strength;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capella_ros_msg::msg::AtomizeSwitchCtrStu & ros_message)
{
  // Member: emer_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emer_button = tmp ? true : false;
  }

  // Member: atomize_sw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.atomize_sw = tmp ? true : false;
  }

  // Member: strength
  cdr >> ros_message.strength;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_msg
get_serialized_size(
  const capella_ros_msg::msg::AtomizeSwitchCtrStu & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: emer_button
  {
    size_t item_size = sizeof(ros_message.emer_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: atomize_sw
  {
    size_t item_size = sizeof(ros_message.atomize_sw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strength
  {
    size_t item_size = sizeof(ros_message.strength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_msg
max_serialized_size_AtomizeSwitchCtrStu(
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


  // Member: emer_button
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: atomize_sw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: strength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AtomizeSwitchCtrStu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const capella_ros_msg::msg::AtomizeSwitchCtrStu *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AtomizeSwitchCtrStu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<capella_ros_msg::msg::AtomizeSwitchCtrStu *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AtomizeSwitchCtrStu__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const capella_ros_msg::msg::AtomizeSwitchCtrStu *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AtomizeSwitchCtrStu__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AtomizeSwitchCtrStu(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AtomizeSwitchCtrStu__callbacks = {
  "capella_ros_msg::msg",
  "AtomizeSwitchCtrStu",
  _AtomizeSwitchCtrStu__cdr_serialize,
  _AtomizeSwitchCtrStu__cdr_deserialize,
  _AtomizeSwitchCtrStu__get_serialized_size,
  _AtomizeSwitchCtrStu__max_serialized_size
};

static rosidl_message_type_support_t _AtomizeSwitchCtrStu__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AtomizeSwitchCtrStu__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace capella_ros_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_capella_ros_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<capella_ros_msg::msg::AtomizeSwitchCtrStu>()
{
  return &capella_ros_msg::msg::typesupport_fastrtps_cpp::_AtomizeSwitchCtrStu__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capella_ros_msg, msg, AtomizeSwitchCtrStu)() {
  return &capella_ros_msg::msg::typesupport_fastrtps_cpp::_AtomizeSwitchCtrStu__handle;
}

#ifdef __cplusplus
}
#endif
