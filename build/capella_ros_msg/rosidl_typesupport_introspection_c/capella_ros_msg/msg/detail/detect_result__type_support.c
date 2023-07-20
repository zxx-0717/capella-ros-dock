// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_msg:msg/DetectResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_msg/msg/detail/detect_result__rosidl_typesupport_introspection_c.h"
#include "capella_ros_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_msg/msg/detail/detect_result__functions.h"
#include "capella_ros_msg/msg/detail/detect_result__struct.h"


// Include directives for member types
// Member `result`
#include "capella_ros_msg/msg/single_detector.h"
// Member `result`
#include "capella_ros_msg/msg/detail/single_detector__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_msg__msg__DetectResult__init(message_memory);
}

void capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_fini_function(void * message_memory)
{
  capella_ros_msg__msg__DetectResult__fini(message_memory);
}

size_t capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__size_function__DetectResult__result(
  const void * untyped_member)
{
  const capella_ros_msg__msg__SingleDetector__Sequence * member =
    (const capella_ros_msg__msg__SingleDetector__Sequence *)(untyped_member);
  return member->size;
}

const void * capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_const_function__DetectResult__result(
  const void * untyped_member, size_t index)
{
  const capella_ros_msg__msg__SingleDetector__Sequence * member =
    (const capella_ros_msg__msg__SingleDetector__Sequence *)(untyped_member);
  return &member->data[index];
}

void * capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_function__DetectResult__result(
  void * untyped_member, size_t index)
{
  capella_ros_msg__msg__SingleDetector__Sequence * member =
    (capella_ros_msg__msg__SingleDetector__Sequence *)(untyped_member);
  return &member->data[index];
}

void capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__fetch_function__DetectResult__result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const capella_ros_msg__msg__SingleDetector * item =
    ((const capella_ros_msg__msg__SingleDetector *)
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_const_function__DetectResult__result(untyped_member, index));
  capella_ros_msg__msg__SingleDetector * value =
    (capella_ros_msg__msg__SingleDetector *)(untyped_value);
  *value = *item;
}

void capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__assign_function__DetectResult__result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  capella_ros_msg__msg__SingleDetector * item =
    ((capella_ros_msg__msg__SingleDetector *)
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_function__DetectResult__result(untyped_member, index));
  const capella_ros_msg__msg__SingleDetector * value =
    (const capella_ros_msg__msg__SingleDetector *)(untyped_value);
  *item = *value;
}

bool capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__resize_function__DetectResult__result(
  void * untyped_member, size_t size)
{
  capella_ros_msg__msg__SingleDetector__Sequence * member =
    (capella_ros_msg__msg__SingleDetector__Sequence *)(untyped_member);
  capella_ros_msg__msg__SingleDetector__Sequence__fini(member);
  return capella_ros_msg__msg__SingleDetector__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_msg__msg__DetectResult, result),  // bytes offset in struct
    NULL,  // default value
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__size_function__DetectResult__result,  // size() function pointer
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_const_function__DetectResult__result,  // get_const(index) function pointer
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__get_function__DetectResult__result,  // get(index) function pointer
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__fetch_function__DetectResult__result,  // fetch(index, &value) function pointer
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__assign_function__DetectResult__result,  // assign(index, value) function pointer
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__resize_function__DetectResult__result  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_members = {
  "capella_ros_msg__msg",  // message namespace
  "DetectResult",  // message name
  1,  // number of fields
  sizeof(capella_ros_msg__msg__DetectResult),
  capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_member_array,  // message members
  capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_type_support_handle = {
  0,
  &capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_msg, msg, DetectResult)() {
  capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_msg, msg, SingleDetector)();
  if (!capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_type_support_handle.typesupport_identifier) {
    capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_msg__msg__DetectResult__rosidl_typesupport_introspection_c__DetectResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
