// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "capella_ros_service_interfaces/msg/detail/irimage_data__rosidl_typesupport_introspection_c.h"
#include "capella_ros_service_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "capella_ros_service_interfaces/msg/detail/irimage_data__functions.h"
#include "capella_ros_service_interfaces/msg/detail/irimage_data__struct.h"


// Include directives for member types
// Member `irimage`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `irtemp_and_coord`
#include "capella_ros_service_interfaces/msg/irtemperature_data.h"
// Member `irtemp_and_coord`
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  capella_ros_service_interfaces__msg__IrimageData__init(message_memory);
}

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_fini_function(void * message_memory)
{
  capella_ros_service_interfaces__msg__IrimageData__fini(message_memory);
}

size_t capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__size_function__IrimageData__irimage(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irimage(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irimage(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__fetch_function__IrimageData__irimage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irimage(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__assign_function__IrimageData__irimage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irimage(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__resize_function__IrimageData__irimage(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__size_function__IrimageData__irtemp_and_coord(
  const void * untyped_member)
{
  const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * member =
    (const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *)(untyped_member);
  return member->size;
}

const void * capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irtemp_and_coord(
  const void * untyped_member, size_t index)
{
  const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * member =
    (const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irtemp_and_coord(
  void * untyped_member, size_t index)
{
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * member =
    (capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *)(untyped_member);
  return &member->data[index];
}

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__fetch_function__IrimageData__irtemp_and_coord(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const capella_ros_service_interfaces__msg__IrtemperatureData * item =
    ((const capella_ros_service_interfaces__msg__IrtemperatureData *)
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irtemp_and_coord(untyped_member, index));
  capella_ros_service_interfaces__msg__IrtemperatureData * value =
    (capella_ros_service_interfaces__msg__IrtemperatureData *)(untyped_value);
  *value = *item;
}

void capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__assign_function__IrimageData__irtemp_and_coord(
  void * untyped_member, size_t index, const void * untyped_value)
{
  capella_ros_service_interfaces__msg__IrtemperatureData * item =
    ((capella_ros_service_interfaces__msg__IrtemperatureData *)
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irtemp_and_coord(untyped_member, index));
  const capella_ros_service_interfaces__msg__IrtemperatureData * value =
    (const capella_ros_service_interfaces__msg__IrtemperatureData *)(untyped_value);
  *item = *value;
}

bool capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__resize_function__IrimageData__irtemp_and_coord(
  void * untyped_member, size_t size)
{
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * member =
    (capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *)(untyped_member);
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__fini(member);
  return capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_member_array[2] = {
  {
    "irimage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__msg__IrimageData, irimage),  // bytes offset in struct
    NULL,  // default value
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__size_function__IrimageData__irimage,  // size() function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irimage,  // get_const(index) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irimage,  // get(index) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__fetch_function__IrimageData__irimage,  // fetch(index, &value) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__assign_function__IrimageData__irimage,  // assign(index, value) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__resize_function__IrimageData__irimage  // resize(index) function pointer
  },
  {
    "irtemp_and_coord",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(capella_ros_service_interfaces__msg__IrimageData, irtemp_and_coord),  // bytes offset in struct
    NULL,  // default value
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__size_function__IrimageData__irtemp_and_coord,  // size() function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_const_function__IrimageData__irtemp_and_coord,  // get_const(index) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__get_function__IrimageData__irtemp_and_coord,  // get(index) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__fetch_function__IrimageData__irtemp_and_coord,  // fetch(index, &value) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__assign_function__IrimageData__irtemp_and_coord,  // assign(index, value) function pointer
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__resize_function__IrimageData__irtemp_and_coord  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_members = {
  "capella_ros_service_interfaces__msg",  // message namespace
  "IrimageData",  // message name
  2,  // number of fields
  sizeof(capella_ros_service_interfaces__msg__IrimageData),
  capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_member_array,  // message members
  capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_init_function,  // function to initialize message memory (memory has to be allocated)
  capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_type_support_handle = {
  0,
  &capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, msg, IrimageData)() {
  capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, capella_ros_service_interfaces, msg, IrtemperatureData)();
  if (!capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_type_support_handle.typesupport_identifier) {
    capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &capella_ros_service_interfaces__msg__IrimageData__rosidl_typesupport_introspection_c__IrimageData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
