// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice
#include "v2x/msg/detail/acceleration3d_with_confidence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `polar_acceleration`
#include "v2x/msg/detail/acceleration_polar_with_z__functions.h"
// Member `cartesian_acceleration`
#include "v2x/msg/detail/acceleration_cartesian__functions.h"

bool
v2x__msg__Acceleration3dWithConfidence__init(v2x__msg__Acceleration3dWithConfidence * msg)
{
  if (!msg) {
    return false;
  }
  // polar_acceleration
  if (!v2x__msg__AccelerationPolarWithZ__init(&msg->polar_acceleration)) {
    v2x__msg__Acceleration3dWithConfidence__fini(msg);
    return false;
  }
  // cartesian_acceleration
  if (!v2x__msg__AccelerationCartesian__init(&msg->cartesian_acceleration)) {
    v2x__msg__Acceleration3dWithConfidence__fini(msg);
    return false;
  }
  return true;
}

void
v2x__msg__Acceleration3dWithConfidence__fini(v2x__msg__Acceleration3dWithConfidence * msg)
{
  if (!msg) {
    return;
  }
  // polar_acceleration
  v2x__msg__AccelerationPolarWithZ__fini(&msg->polar_acceleration);
  // cartesian_acceleration
  v2x__msg__AccelerationCartesian__fini(&msg->cartesian_acceleration);
}

bool
v2x__msg__Acceleration3dWithConfidence__are_equal(const v2x__msg__Acceleration3dWithConfidence * lhs, const v2x__msg__Acceleration3dWithConfidence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polar_acceleration
  if (!v2x__msg__AccelerationPolarWithZ__are_equal(
      &(lhs->polar_acceleration), &(rhs->polar_acceleration)))
  {
    return false;
  }
  // cartesian_acceleration
  if (!v2x__msg__AccelerationCartesian__are_equal(
      &(lhs->cartesian_acceleration), &(rhs->cartesian_acceleration)))
  {
    return false;
  }
  return true;
}

bool
v2x__msg__Acceleration3dWithConfidence__copy(
  const v2x__msg__Acceleration3dWithConfidence * input,
  v2x__msg__Acceleration3dWithConfidence * output)
{
  if (!input || !output) {
    return false;
  }
  // polar_acceleration
  if (!v2x__msg__AccelerationPolarWithZ__copy(
      &(input->polar_acceleration), &(output->polar_acceleration)))
  {
    return false;
  }
  // cartesian_acceleration
  if (!v2x__msg__AccelerationCartesian__copy(
      &(input->cartesian_acceleration), &(output->cartesian_acceleration)))
  {
    return false;
  }
  return true;
}

v2x__msg__Acceleration3dWithConfidence *
v2x__msg__Acceleration3dWithConfidence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x__msg__Acceleration3dWithConfidence * msg = (v2x__msg__Acceleration3dWithConfidence *)allocator.allocate(sizeof(v2x__msg__Acceleration3dWithConfidence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x__msg__Acceleration3dWithConfidence));
  bool success = v2x__msg__Acceleration3dWithConfidence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x__msg__Acceleration3dWithConfidence__destroy(v2x__msg__Acceleration3dWithConfidence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x__msg__Acceleration3dWithConfidence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x__msg__Acceleration3dWithConfidence__Sequence__init(v2x__msg__Acceleration3dWithConfidence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x__msg__Acceleration3dWithConfidence * data = NULL;

  if (size) {
    data = (v2x__msg__Acceleration3dWithConfidence *)allocator.zero_allocate(size, sizeof(v2x__msg__Acceleration3dWithConfidence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x__msg__Acceleration3dWithConfidence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x__msg__Acceleration3dWithConfidence__fini(&data[i - 1]);
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
v2x__msg__Acceleration3dWithConfidence__Sequence__fini(v2x__msg__Acceleration3dWithConfidence__Sequence * array)
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
      v2x__msg__Acceleration3dWithConfidence__fini(&array->data[i]);
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

v2x__msg__Acceleration3dWithConfidence__Sequence *
v2x__msg__Acceleration3dWithConfidence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x__msg__Acceleration3dWithConfidence__Sequence * array = (v2x__msg__Acceleration3dWithConfidence__Sequence *)allocator.allocate(sizeof(v2x__msg__Acceleration3dWithConfidence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x__msg__Acceleration3dWithConfidence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x__msg__Acceleration3dWithConfidence__Sequence__destroy(v2x__msg__Acceleration3dWithConfidence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x__msg__Acceleration3dWithConfidence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x__msg__Acceleration3dWithConfidence__Sequence__are_equal(const v2x__msg__Acceleration3dWithConfidence__Sequence * lhs, const v2x__msg__Acceleration3dWithConfidence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x__msg__Acceleration3dWithConfidence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x__msg__Acceleration3dWithConfidence__Sequence__copy(
  const v2x__msg__Acceleration3dWithConfidence__Sequence * input,
  v2x__msg__Acceleration3dWithConfidence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x__msg__Acceleration3dWithConfidence);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x__msg__Acceleration3dWithConfidence * data =
      (v2x__msg__Acceleration3dWithConfidence *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x__msg__Acceleration3dWithConfidence__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x__msg__Acceleration3dWithConfidence__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x__msg__Acceleration3dWithConfidence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
