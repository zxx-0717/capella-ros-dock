// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/charge_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "capella_ros_service_interfaces/msg/detail/charge_state__struct.h"
#include "capella_ros_service_interfaces/msg/detail/charge_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // pid
#include "rosidl_runtime_c/string_functions.h"  // pid

// forward declare type support functions


using _ChargeState__ros_msg_type = capella_ros_service_interfaces__msg__ChargeState;

static bool _ChargeState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChargeState__ros_msg_type * ros_message = static_cast<const _ChargeState__ros_msg_type *>(untyped_ros_message);
  // Field name: pid
  {
    const rosidl_runtime_c__String * str = &ros_message->pid;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: has_contact
  {
    cdr << (ros_message->has_contact ? true : false);
  }

  // Field name: is_charging
  {
    cdr << (ros_message->is_charging ? true : false);
  }

  // Field name: is_docking
  {
    cdr << (ros_message->is_docking ? true : false);
  }

  return true;
}

static bool _ChargeState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChargeState__ros_msg_type * ros_message = static_cast<_ChargeState__ros_msg_type *>(untyped_ros_message);
  // Field name: pid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pid.data) {
      rosidl_runtime_c__String__init(&ros_message->pid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pid'\n");
      return false;
    }
  }

  // Field name: has_contact
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_contact = tmp ? true : false;
  }

  // Field name: is_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_charging = tmp ? true : false;
  }

  // Field name: is_docking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_docking = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t get_serialized_size_capella_ros_service_interfaces__msg__ChargeState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChargeState__ros_msg_type * ros_message = static_cast<const _ChargeState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pid.size + 1);
  // field.name has_contact
  {
    size_t item_size = sizeof(ros_message->has_contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_charging
  {
    size_t item_size = sizeof(ros_message->is_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_docking
  {
    size_t item_size = sizeof(ros_message->is_docking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChargeState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_capella_ros_service_interfaces__msg__ChargeState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t max_serialized_size_capella_ros_service_interfaces__msg__ChargeState(
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

  // member: pid
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
  // member: has_contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_docking
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ChargeState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_capella_ros_service_interfaces__msg__ChargeState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChargeState = {
  "capella_ros_service_interfaces::msg",
  "ChargeState",
  _ChargeState__cdr_serialize,
  _ChargeState__cdr_deserialize,
  _ChargeState__get_serialized_size,
  _ChargeState__max_serialized_size
};

static rosidl_message_type_support_t _ChargeState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChargeState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, msg, ChargeState)() {
  return &_ChargeState__type_support;
}

#if defined(__cplusplus)
}
#endif
