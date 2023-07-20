// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_dock_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice
#include "capella_ros_dock_msgs/msg/detail/hazard_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
capella_ros_dock_msgs__msg__HazardDetection__init(capella_ros_dock_msgs__msg__HazardDetection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    capella_ros_dock_msgs__msg__HazardDetection__fini(msg);
    return false;
  }
  // type
  return true;
}

void
capella_ros_dock_msgs__msg__HazardDetection__fini(capella_ros_dock_msgs__msg__HazardDetection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
}

bool
capella_ros_dock_msgs__msg__HazardDetection__are_equal(const capella_ros_dock_msgs__msg__HazardDetection * lhs, const capella_ros_dock_msgs__msg__HazardDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
capella_ros_dock_msgs__msg__HazardDetection__copy(
  const capella_ros_dock_msgs__msg__HazardDetection * input,
  capella_ros_dock_msgs__msg__HazardDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

capella_ros_dock_msgs__msg__HazardDetection *
capella_ros_dock_msgs__msg__HazardDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_dock_msgs__msg__HazardDetection * msg = (capella_ros_dock_msgs__msg__HazardDetection *)allocator.allocate(sizeof(capella_ros_dock_msgs__msg__HazardDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_dock_msgs__msg__HazardDetection));
  bool success = capella_ros_dock_msgs__msg__HazardDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_dock_msgs__msg__HazardDetection__destroy(capella_ros_dock_msgs__msg__HazardDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_dock_msgs__msg__HazardDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_dock_msgs__msg__HazardDetection__Sequence__init(capella_ros_dock_msgs__msg__HazardDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_dock_msgs__msg__HazardDetection * data = NULL;

  if (size) {
    data = (capella_ros_dock_msgs__msg__HazardDetection *)allocator.zero_allocate(size, sizeof(capella_ros_dock_msgs__msg__HazardDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_dock_msgs__msg__HazardDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_dock_msgs__msg__HazardDetection__fini(&data[i - 1]);
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
capella_ros_dock_msgs__msg__HazardDetection__Sequence__fini(capella_ros_dock_msgs__msg__HazardDetection__Sequence * array)
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
      capella_ros_dock_msgs__msg__HazardDetection__fini(&array->data[i]);
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

capella_ros_dock_msgs__msg__HazardDetection__Sequence *
capella_ros_dock_msgs__msg__HazardDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_dock_msgs__msg__HazardDetection__Sequence * array = (capella_ros_dock_msgs__msg__HazardDetection__Sequence *)allocator.allocate(sizeof(capella_ros_dock_msgs__msg__HazardDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_dock_msgs__msg__HazardDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_dock_msgs__msg__HazardDetection__Sequence__destroy(capella_ros_dock_msgs__msg__HazardDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_dock_msgs__msg__HazardDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_dock_msgs__msg__HazardDetection__Sequence__are_equal(const capella_ros_dock_msgs__msg__HazardDetection__Sequence * lhs, const capella_ros_dock_msgs__msg__HazardDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_dock_msgs__msg__HazardDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_dock_msgs__msg__HazardDetection__Sequence__copy(
  const capella_ros_dock_msgs__msg__HazardDetection__Sequence * input,
  capella_ros_dock_msgs__msg__HazardDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_dock_msgs__msg__HazardDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_dock_msgs__msg__HazardDetection * data =
      (capella_ros_dock_msgs__msg__HazardDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_dock_msgs__msg__HazardDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_dock_msgs__msg__HazardDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_dock_msgs__msg__HazardDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
