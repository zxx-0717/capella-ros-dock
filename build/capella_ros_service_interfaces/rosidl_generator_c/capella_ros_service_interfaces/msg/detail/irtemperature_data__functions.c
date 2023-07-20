// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/irtemperature_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
capella_ros_service_interfaces__msg__IrtemperatureData__init(capella_ros_service_interfaces__msg__IrtemperatureData * msg)
{
  if (!msg) {
    return false;
  }
  // irtemperature
  // center_x
  // center_y
  // width
  // height
  return true;
}

void
capella_ros_service_interfaces__msg__IrtemperatureData__fini(capella_ros_service_interfaces__msg__IrtemperatureData * msg)
{
  if (!msg) {
    return;
  }
  // irtemperature
  // center_x
  // center_y
  // width
  // height
}

bool
capella_ros_service_interfaces__msg__IrtemperatureData__are_equal(const capella_ros_service_interfaces__msg__IrtemperatureData * lhs, const capella_ros_service_interfaces__msg__IrtemperatureData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // irtemperature
  if (lhs->irtemperature != rhs->irtemperature) {
    return false;
  }
  // center_x
  if (lhs->center_x != rhs->center_x) {
    return false;
  }
  // center_y
  if (lhs->center_y != rhs->center_y) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__IrtemperatureData__copy(
  const capella_ros_service_interfaces__msg__IrtemperatureData * input,
  capella_ros_service_interfaces__msg__IrtemperatureData * output)
{
  if (!input || !output) {
    return false;
  }
  // irtemperature
  output->irtemperature = input->irtemperature;
  // center_x
  output->center_x = input->center_x;
  // center_y
  output->center_y = input->center_y;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

capella_ros_service_interfaces__msg__IrtemperatureData *
capella_ros_service_interfaces__msg__IrtemperatureData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrtemperatureData * msg = (capella_ros_service_interfaces__msg__IrtemperatureData *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__IrtemperatureData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__msg__IrtemperatureData));
  bool success = capella_ros_service_interfaces__msg__IrtemperatureData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__msg__IrtemperatureData__destroy(capella_ros_service_interfaces__msg__IrtemperatureData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__msg__IrtemperatureData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__init(capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrtemperatureData * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__msg__IrtemperatureData *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__msg__IrtemperatureData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__msg__IrtemperatureData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__msg__IrtemperatureData__fini(&data[i - 1]);
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
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__fini(capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * array)
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
      capella_ros_service_interfaces__msg__IrtemperatureData__fini(&array->data[i]);
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

capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * array = (capella_ros_service_interfaces__msg__IrtemperatureData__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__IrtemperatureData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__destroy(capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__are_equal(const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * lhs, const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__msg__IrtemperatureData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__IrtemperatureData__Sequence__copy(
  const capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * input,
  capella_ros_service_interfaces__msg__IrtemperatureData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__msg__IrtemperatureData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__msg__IrtemperatureData * data =
      (capella_ros_service_interfaces__msg__IrtemperatureData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__msg__IrtemperatureData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__msg__IrtemperatureData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__msg__IrtemperatureData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
