// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from capella_ros_service_interfaces:srv/CartographerMode.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/srv/detail/cartographer_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "capella_ros_service_interfaces/srv/detail/cartographer_mode__struct.h"
#include "capella_ros_service_interfaces/srv/detail/cartographer_mode__functions.h"
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


using _CartographerMode_Request__ros_msg_type = capella_ros_service_interfaces__srv__CartographerMode_Request;

static bool _CartographerMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartographerMode_Request__ros_msg_type * ros_message = static_cast<const _CartographerMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _CartographerMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartographerMode_Request__ros_msg_type * ros_message = static_cast<_CartographerMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t get_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartographerMode_Request__ros_msg_type * ros_message = static_cast<const _CartographerMode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CartographerMode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t max_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CartographerMode_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CartographerMode_Request = {
  "capella_ros_service_interfaces::srv",
  "CartographerMode_Request",
  _CartographerMode_Request__cdr_serialize,
  _CartographerMode_Request__cdr_deserialize,
  _CartographerMode_Request__get_serialized_size,
  _CartographerMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartographerMode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartographerMode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, srv, CartographerMode_Request)() {
  return &_CartographerMode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/cartographer_mode__struct.h"
// already included above
// #include "capella_ros_service_interfaces/srv/detail/cartographer_mode__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _CartographerMode_Response__ros_msg_type = capella_ros_service_interfaces__srv__CartographerMode_Response;

static bool _CartographerMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartographerMode_Response__ros_msg_type * ros_message = static_cast<const _CartographerMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cart_status
  {
    cdr << ros_message->cart_status;
  }

  return true;
}

static bool _CartographerMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartographerMode_Response__ros_msg_type * ros_message = static_cast<_CartographerMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cart_status
  {
    cdr >> ros_message->cart_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t get_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartographerMode_Response__ros_msg_type * ros_message = static_cast<const _CartographerMode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cart_status
  {
    size_t item_size = sizeof(ros_message->cart_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CartographerMode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_capella_ros_service_interfaces
size_t max_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Response(
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

  // member: cart_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CartographerMode_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_capella_ros_service_interfaces__srv__CartographerMode_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CartographerMode_Response = {
  "capella_ros_service_interfaces::srv",
  "CartographerMode_Response",
  _CartographerMode_Response__cdr_serialize,
  _CartographerMode_Response__cdr_deserialize,
  _CartographerMode_Response__get_serialized_size,
  _CartographerMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartographerMode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartographerMode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, srv, CartographerMode_Response)() {
  return &_CartographerMode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "capella_ros_service_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "capella_ros_service_interfaces/srv/cartographer_mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CartographerMode__callbacks = {
  "capella_ros_service_interfaces::srv",
  "CartographerMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, srv, CartographerMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, srv, CartographerMode_Response)(),
};

static rosidl_service_type_support_t CartographerMode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CartographerMode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, capella_ros_service_interfaces, srv, CartographerMode)() {
  return &CartographerMode__handle;
}

#if defined(__cplusplus)
}
#endif
