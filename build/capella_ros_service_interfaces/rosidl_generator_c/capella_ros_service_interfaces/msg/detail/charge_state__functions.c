// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_service_interfaces:msg/ChargeState.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/charge_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pid`
#include "rosidl_runtime_c/string_functions.h"

bool
capella_ros_service_interfaces__msg__ChargeState__init(capella_ros_service_interfaces__msg__ChargeState * msg)
{
  if (!msg) {
    return false;
  }
  // pid
  if (!rosidl_runtime_c__String__init(&msg->pid)) {
    capella_ros_service_interfaces__msg__ChargeState__fini(msg);
    return false;
  }
  // has_contact
  // is_charging
  // is_docking
  return true;
}

void
capella_ros_service_interfaces__msg__ChargeState__fini(capella_ros_service_interfaces__msg__ChargeState * msg)
{
  if (!msg) {
    return;
  }
  // pid
  rosidl_runtime_c__String__fini(&msg->pid);
  // has_contact
  // is_charging
  // is_docking
}

bool
capella_ros_service_interfaces__msg__ChargeState__are_equal(const capella_ros_service_interfaces__msg__ChargeState * lhs, const capella_ros_service_interfaces__msg__ChargeState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pid), &(rhs->pid)))
  {
    return false;
  }
  // has_contact
  if (lhs->has_contact != rhs->has_contact) {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // is_docking
  if (lhs->is_docking != rhs->is_docking) {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__ChargeState__copy(
  const capella_ros_service_interfaces__msg__ChargeState * input,
  capella_ros_service_interfaces__msg__ChargeState * output)
{
  if (!input || !output) {
    return false;
  }
  // pid
  if (!rosidl_runtime_c__String__copy(
      &(input->pid), &(output->pid)))
  {
    return false;
  }
  // has_contact
  output->has_contact = input->has_contact;
  // is_charging
  output->is_charging = input->is_charging;
  // is_docking
  output->is_docking = input->is_docking;
  return true;
}

capella_ros_service_interfaces__msg__ChargeState *
capella_ros_service_interfaces__msg__ChargeState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__ChargeState * msg = (capella_ros_service_interfaces__msg__ChargeState *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__ChargeState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__msg__ChargeState));
  bool success = capella_ros_service_interfaces__msg__ChargeState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__msg__ChargeState__destroy(capella_ros_service_interfaces__msg__ChargeState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__msg__ChargeState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__msg__ChargeState__Sequence__init(capella_ros_service_interfaces__msg__ChargeState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__ChargeState * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__msg__ChargeState *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__msg__ChargeState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__msg__ChargeState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__msg__ChargeState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
capella_ros_service_interfaces__msg__ChargeState__Sequence__fini(capella_ros_service_interfaces__msg__ChargeState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      capella_ros_service_interfaces__msg__ChargeState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

capella_ros_service_interfaces__msg__ChargeState__Sequence *
capella_ros_service_interfaces__msg__ChargeState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__ChargeState__Sequence * array = (capella_ros_service_interfaces__msg__ChargeState__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__ChargeState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__msg__ChargeState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__msg__ChargeState__Sequence__destroy(capella_ros_service_interfaces__msg__ChargeState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__msg__ChargeState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__msg__ChargeState__Sequence__are_equal(const capella_ros_service_interfaces__msg__ChargeState__Sequence * lhs, const capella_ros_service_interfaces__msg__ChargeState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__msg__ChargeState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__ChargeState__Sequence__copy(
  const capella_ros_service_interfaces__msg__ChargeState__Sequence * input,
  capella_ros_service_interfaces__msg__ChargeState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__msg__ChargeState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__msg__ChargeState * data =
      (capella_ros_service_interfaces__msg__ChargeState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__msg__ChargeState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__msg__ChargeState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__msg__ChargeState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
