// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/irsdk_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
capella_ros_service_interfaces__msg__IrsdkData__init(capella_ros_service_interfaces__msg__IrsdkData * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    capella_ros_service_interfaces__msg__IrsdkData__fini(msg);
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->temperature, 0)) {
    capella_ros_service_interfaces__msg__IrsdkData__fini(msg);
    return false;
  }
  return true;
}

void
capella_ros_service_interfaces__msg__IrsdkData__fini(capella_ros_service_interfaces__msg__IrsdkData * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->temperature);
}

bool
capella_ros_service_interfaces__msg__IrsdkData__are_equal(const capella_ros_service_interfaces__msg__IrsdkData * lhs, const capella_ros_service_interfaces__msg__IrsdkData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->temperature), &(rhs->temperature)))
  {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__IrsdkData__copy(
  const capella_ros_service_interfaces__msg__IrsdkData * input,
  capella_ros_service_interfaces__msg__IrsdkData * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->temperature), &(output->temperature)))
  {
    return false;
  }
  return true;
}

capella_ros_service_interfaces__msg__IrsdkData *
capella_ros_service_interfaces__msg__IrsdkData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrsdkData * msg = (capella_ros_service_interfaces__msg__IrsdkData *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__IrsdkData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__msg__IrsdkData));
  bool success = capella_ros_service_interfaces__msg__IrsdkData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__msg__IrsdkData__destroy(capella_ros_service_interfaces__msg__IrsdkData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__msg__IrsdkData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__init(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrsdkData * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__msg__IrsdkData *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__msg__IrsdkData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__msg__IrsdkData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__msg__IrsdkData__fini(&data[i - 1]);
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
capella_ros_service_interfaces__msg__IrsdkData__Sequence__fini(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array)
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
      capella_ros_service_interfaces__msg__IrsdkData__fini(&array->data[i]);
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

capella_ros_service_interfaces__msg__IrsdkData__Sequence *
capella_ros_service_interfaces__msg__IrsdkData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__msg__IrsdkData__Sequence * array = (capella_ros_service_interfaces__msg__IrsdkData__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__msg__IrsdkData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__msg__IrsdkData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__msg__IrsdkData__Sequence__destroy(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__msg__IrsdkData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__are_equal(const capella_ros_service_interfaces__msg__IrsdkData__Sequence * lhs, const capella_ros_service_interfaces__msg__IrsdkData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__msg__IrsdkData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__copy(
  const capella_ros_service_interfaces__msg__IrsdkData__Sequence * input,
  capella_ros_service_interfaces__msg__IrsdkData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__msg__IrsdkData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__msg__IrsdkData * data =
      (capella_ros_service_interfaces__msg__IrsdkData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__msg__IrsdkData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__msg__IrsdkData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__msg__IrsdkData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
