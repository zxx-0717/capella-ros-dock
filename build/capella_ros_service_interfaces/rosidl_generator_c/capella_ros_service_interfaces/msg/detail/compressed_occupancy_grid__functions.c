// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_service_interfaces:msg/CompressedOccupancyGrid.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/compressed_occupancy_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `info`
#include "nav_msgs/msg/detail/map_meta_data__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__init(capella_ros_service_interfaces__msg__CompressedOccupancyGrid * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(msg);
    return false;
  }
  // info
  if (!nav_msgs__msg__MapMetaData__init(&msg->info)) {
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(msg);
    return false;
  }
  return true;
}

void
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(capella_ros_service_interfaces__msg__CompressedOccupancyGrid * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // info
  nav_msgs__msg__MapMetaData__fini(&msg->info);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__are_equal(const capella_ros_service_interfaces__msg__CompressedOccupancyGrid * lhs, const capella_ros_service_interfaces__msg__CompressedOccupancyGrid * rhs)
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
  // info
  if (!nav_msgs__msg__MapMetaData__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__copy(
  const capella_ros_service_interfaces__msg__CompressedOccupancyGrid * input,
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid * output)
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
  // info
  if (!nav_msgs__msg__MapMetaData__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

capella_ros_service_interfaces__msg__CompressedOccupancyGrid *
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid * msg = (capella_ros_service_interfaces__msg__CompressedOccupancyGrid *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__CompressedOccupancyGrid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__msg__CompressedOccupancyGrid));
  bool success = capella_ros_service_interfaces__msg__CompressedOccupancyGrid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__destroy(capella_ros_service_interfaces__msg__CompressedOccupancyGrid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__init(capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__msg__CompressedOccupancyGrid *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__msg__CompressedOccupancyGrid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__msg__CompressedOccupancyGrid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(&data[i - 1]);
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
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__fini(capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * array)
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
      capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(&array->data[i]);
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

capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence *
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * array = (capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__destroy(capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__are_equal(const capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * lhs, const capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__msg__CompressedOccupancyGrid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence__copy(
  const capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * input,
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__msg__CompressedOccupancyGrid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__msg__CompressedOccupancyGrid * data =
      (capella_ros_service_interfaces__msg__CompressedOccupancyGrid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__msg__CompressedOccupancyGrid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__msg__CompressedOccupancyGrid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__msg__CompressedOccupancyGrid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
