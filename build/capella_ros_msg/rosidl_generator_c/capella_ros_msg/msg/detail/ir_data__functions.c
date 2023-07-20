// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_msg:msg/IrData.idl
// generated code does not contain a copyright notice
#include "capella_ros_msg/msg/detail/ir_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
capella_ros_msg__msg__IrData__init(capella_ros_msg__msg__IrData * msg)
{
  if (!msg) {
    return false;
  }
  // ir1_data
  // ir2_data
  return true;
}

void
capella_ros_msg__msg__IrData__fini(capella_ros_msg__msg__IrData * msg)
{
  if (!msg) {
    return;
  }
  // ir1_data
  // ir2_data
}

bool
capella_ros_msg__msg__IrData__are_equal(const capella_ros_msg__msg__IrData * lhs, const capella_ros_msg__msg__IrData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ir1_data
  if (lhs->ir1_data != rhs->ir1_data) {
    return false;
  }
  // ir2_data
  if (lhs->ir2_data != rhs->ir2_data) {
    return false;
  }
  return true;
}

bool
capella_ros_msg__msg__IrData__copy(
  const capella_ros_msg__msg__IrData * input,
  capella_ros_msg__msg__IrData * output)
{
  if (!input || !output) {
    return false;
  }
  // ir1_data
  output->ir1_data = input->ir1_data;
  // ir2_data
  output->ir2_data = input->ir2_data;
  return true;
}

capella_ros_msg__msg__IrData *
capella_ros_msg__msg__IrData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_msg__msg__IrData * msg = (capella_ros_msg__msg__IrData *)allocator.allocate(sizeof(capella_ros_msg__msg__IrData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_msg__msg__IrData));
  bool success = capella_ros_msg__msg__IrData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_msg__msg__IrData__destroy(capella_ros_msg__msg__IrData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_msg__msg__IrData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_msg__msg__IrData__Sequence__init(capella_ros_msg__msg__IrData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_msg__msg__IrData * data = NULL;

  if (size) {
    data = (capella_ros_msg__msg__IrData *)allocator.zero_allocate(size, sizeof(capella_ros_msg__msg__IrData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_msg__msg__IrData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_msg__msg__IrData__fini(&data[i - 1]);
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
capella_ros_msg__msg__IrData__Sequence__fini(capella_ros_msg__msg__IrData__Sequence * array)
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
      capella_ros_msg__msg__IrData__fini(&array->data[i]);
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

capella_ros_msg__msg__IrData__Sequence *
capella_ros_msg__msg__IrData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_msg__msg__IrData__Sequence * array = (capella_ros_msg__msg__IrData__Sequence *)allocator.allocate(sizeof(capella_ros_msg__msg__IrData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_msg__msg__IrData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_msg__msg__IrData__Sequence__destroy(capella_ros_msg__msg__IrData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_msg__msg__IrData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_msg__msg__IrData__Sequence__are_equal(const capella_ros_msg__msg__IrData__Sequence * lhs, const capella_ros_msg__msg__IrData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_msg__msg__IrData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_msg__msg__IrData__Sequence__copy(
  const capella_ros_msg__msg__IrData__Sequence * input,
  capella_ros_msg__msg__IrData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_msg__msg__IrData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_msg__msg__IrData * data =
      (capella_ros_msg__msg__IrData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_msg__msg__IrData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_msg__msg__IrData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_msg__msg__IrData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
