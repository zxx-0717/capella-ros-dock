// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from capella_ros_service_interfaces:msg/IrdetectionStatus.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/irdetection_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "capella_ros_service_interfaces/msg/detail/irdetection_status__struct.h"
#include "capella_ros_service_interfaces/msg/detail/irdetection_status__functions.h"
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


// forward declare type support functions


using _IrdetectionStatus__ros_msg_type = capella_ros_service_interfaces__msg__IrdetectionStatus;

static bool _IrdetectionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IrdetectionStatus__ros_msg_type * ros_message = static_cast<const _IrdetectionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: irdetection_status
  {
    cdr << ros_message->irdetection_status;
  }

  return true;
}

static bool _IrdetectionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IrdetectionStatus__ros_msg_type * ros_message = static_cast<_IrdetectionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: irdetection_status
  {
    cdr >> ros_message->irdetection_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t get_serialized_size_capella_ros_service_interfaces__msg__IrdetectionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IrdetectionStatus__ros_msg_type * ros_message = static_cast<const _IrdetectionStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name irdetection_status
  {
    size_t item_size = sizeof(ros_message->irdetection_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IrdetectionStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_capella_ros_service_interfaces__msg__IrdetectionStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t max_serialized_size_capella_ros_service_interfaces__msg__IrdetectionStatus(
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

  // member: irdetection_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IrdetectionStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_capella_ros_service_interfaces__msg__IrdetectionStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IrdetectionStatus = {
  "capella_ros_service_interfaces::msg",
  "IrdetectionStatus",
  _IrdetectionStatus__cdr_serialize,
  _IrdetectionStatus__cdr_deserialize,
  _IrdetectionStatus__get_serialized_size,
  _IrdetectionStatus__max_serialized_size
};

static rosidl_message_type_support_t _IrdetectionStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IrdetectionStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, msg, IrdetectionStatus)() {
  return &_IrdetectionStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
