// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from capella_ros_service_interfaces:srv/StopNavAndCarto.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/srv/detail/stop_nav_and_carto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__init(capella_ros_service_interfaces__srv__StopNavAndCarto_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(capella_ros_service_interfaces__srv__StopNavAndCarto_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__are_equal(const capella_ros_service_interfaces__srv__StopNavAndCarto_Request * lhs, const capella_ros_service_interfaces__srv__StopNavAndCarto_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__copy(
  const capella_ros_service_interfaces__srv__StopNavAndCarto_Request * input,
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

capella_ros_service_interfaces__srv__StopNavAndCarto_Request *
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request * msg = (capella_ros_service_interfaces__srv__StopNavAndCarto_Request *)allocator.allocate(sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request));
  bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__destroy(capella_ros_service_interfaces__srv__StopNavAndCarto_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__init(capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__srv__StopNavAndCarto_Request *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(&data[i - 1]);
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
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__fini(capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * array)
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
      capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(&array->data[i]);
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

capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence *
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * array = (capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__destroy(capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__are_equal(const capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * lhs, const capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence__copy(
  const capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * input,
  capella_ros_service_interfaces__srv__StopNavAndCarto_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__srv__StopNavAndCarto_Request * data =
      (capella_ros_service_interfaces__srv__StopNavAndCarto_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__srv__StopNavAndCarto_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__init(capella_ros_service_interfaces__srv__StopNavAndCarto_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(capella_ros_service_interfaces__srv__StopNavAndCarto_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__are_equal(const capella_ros_service_interfaces__srv__StopNavAndCarto_Response * lhs, const capella_ros_service_interfaces__srv__StopNavAndCarto_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__copy(
  const capella_ros_service_interfaces__srv__StopNavAndCarto_Response * input,
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

capella_ros_service_interfaces__srv__StopNavAndCarto_Response *
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response * msg = (capella_ros_service_interfaces__srv__StopNavAndCarto_Response *)allocator.allocate(sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response));
  bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__destroy(capella_ros_service_interfaces__srv__StopNavAndCarto_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__init(capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response * data = NULL;

  if (size) {
    data = (capella_ros_service_interfaces__srv__StopNavAndCarto_Response *)allocator.zero_allocate(size, sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(&data[i - 1]);
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
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__fini(capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * array)
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
      capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(&array->data[i]);
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

capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence *
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * array = (capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence *)allocator.allocate(sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__destroy(capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__are_equal(const capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * lhs, const capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence__copy(
  const capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * input,
  capella_ros_service_interfaces__srv__StopNavAndCarto_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(capella_ros_service_interfaces__srv__StopNavAndCarto_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    capella_ros_service_interfaces__srv__StopNavAndCarto_Response * data =
      (capella_ros_service_interfaces__srv__StopNavAndCarto_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          capella_ros_service_interfaces__srv__StopNavAndCarto_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!capella_ros_service_interfaces__srv__StopNavAndCarto_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
