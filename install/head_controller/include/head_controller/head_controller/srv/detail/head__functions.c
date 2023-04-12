// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from head_controller:srv/Head.idl
// generated code does not contain a copyright notice
#include "head_controller/srv/detail/head__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `simbol`
#include "rosidl_runtime_c/string_functions.h"

bool
head_controller__srv__Head_Request__init(head_controller__srv__Head_Request * msg)
{
  if (!msg) {
    return false;
  }
  // simbol
  if (!rosidl_runtime_c__String__init(&msg->simbol)) {
    head_controller__srv__Head_Request__fini(msg);
    return false;
  }
  // distance
  return true;
}

void
head_controller__srv__Head_Request__fini(head_controller__srv__Head_Request * msg)
{
  if (!msg) {
    return;
  }
  // simbol
  rosidl_runtime_c__String__fini(&msg->simbol);
  // distance
}

bool
head_controller__srv__Head_Request__are_equal(const head_controller__srv__Head_Request * lhs, const head_controller__srv__Head_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // simbol
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->simbol), &(rhs->simbol)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
head_controller__srv__Head_Request__copy(
  const head_controller__srv__Head_Request * input,
  head_controller__srv__Head_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // simbol
  if (!rosidl_runtime_c__String__copy(
      &(input->simbol), &(output->simbol)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

head_controller__srv__Head_Request *
head_controller__srv__Head_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Request * msg = (head_controller__srv__Head_Request *)allocator.allocate(sizeof(head_controller__srv__Head_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(head_controller__srv__Head_Request));
  bool success = head_controller__srv__Head_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
head_controller__srv__Head_Request__destroy(head_controller__srv__Head_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    head_controller__srv__Head_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
head_controller__srv__Head_Request__Sequence__init(head_controller__srv__Head_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Request * data = NULL;

  if (size) {
    data = (head_controller__srv__Head_Request *)allocator.zero_allocate(size, sizeof(head_controller__srv__Head_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = head_controller__srv__Head_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        head_controller__srv__Head_Request__fini(&data[i - 1]);
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
head_controller__srv__Head_Request__Sequence__fini(head_controller__srv__Head_Request__Sequence * array)
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
      head_controller__srv__Head_Request__fini(&array->data[i]);
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

head_controller__srv__Head_Request__Sequence *
head_controller__srv__Head_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Request__Sequence * array = (head_controller__srv__Head_Request__Sequence *)allocator.allocate(sizeof(head_controller__srv__Head_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = head_controller__srv__Head_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
head_controller__srv__Head_Request__Sequence__destroy(head_controller__srv__Head_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    head_controller__srv__Head_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
head_controller__srv__Head_Request__Sequence__are_equal(const head_controller__srv__Head_Request__Sequence * lhs, const head_controller__srv__Head_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!head_controller__srv__Head_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
head_controller__srv__Head_Request__Sequence__copy(
  const head_controller__srv__Head_Request__Sequence * input,
  head_controller__srv__Head_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(head_controller__srv__Head_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    head_controller__srv__Head_Request * data =
      (head_controller__srv__Head_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!head_controller__srv__Head_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          head_controller__srv__Head_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!head_controller__srv__Head_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
head_controller__srv__Head_Response__init(head_controller__srv__Head_Response * msg)
{
  if (!msg) {
    return false;
  }
  // movement
  // movemax
  // movemin
  // success
  return true;
}

void
head_controller__srv__Head_Response__fini(head_controller__srv__Head_Response * msg)
{
  if (!msg) {
    return;
  }
  // movement
  // movemax
  // movemin
  // success
}

bool
head_controller__srv__Head_Response__are_equal(const head_controller__srv__Head_Response * lhs, const head_controller__srv__Head_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement
  if (lhs->movement != rhs->movement) {
    return false;
  }
  // movemax
  if (lhs->movemax != rhs->movemax) {
    return false;
  }
  // movemin
  if (lhs->movemin != rhs->movemin) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
head_controller__srv__Head_Response__copy(
  const head_controller__srv__Head_Response * input,
  head_controller__srv__Head_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // movement
  output->movement = input->movement;
  // movemax
  output->movemax = input->movemax;
  // movemin
  output->movemin = input->movemin;
  // success
  output->success = input->success;
  return true;
}

head_controller__srv__Head_Response *
head_controller__srv__Head_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Response * msg = (head_controller__srv__Head_Response *)allocator.allocate(sizeof(head_controller__srv__Head_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(head_controller__srv__Head_Response));
  bool success = head_controller__srv__Head_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
head_controller__srv__Head_Response__destroy(head_controller__srv__Head_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    head_controller__srv__Head_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
head_controller__srv__Head_Response__Sequence__init(head_controller__srv__Head_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Response * data = NULL;

  if (size) {
    data = (head_controller__srv__Head_Response *)allocator.zero_allocate(size, sizeof(head_controller__srv__Head_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = head_controller__srv__Head_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        head_controller__srv__Head_Response__fini(&data[i - 1]);
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
head_controller__srv__Head_Response__Sequence__fini(head_controller__srv__Head_Response__Sequence * array)
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
      head_controller__srv__Head_Response__fini(&array->data[i]);
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

head_controller__srv__Head_Response__Sequence *
head_controller__srv__Head_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  head_controller__srv__Head_Response__Sequence * array = (head_controller__srv__Head_Response__Sequence *)allocator.allocate(sizeof(head_controller__srv__Head_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = head_controller__srv__Head_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
head_controller__srv__Head_Response__Sequence__destroy(head_controller__srv__Head_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    head_controller__srv__Head_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
head_controller__srv__Head_Response__Sequence__are_equal(const head_controller__srv__Head_Response__Sequence * lhs, const head_controller__srv__Head_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!head_controller__srv__Head_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
head_controller__srv__Head_Response__Sequence__copy(
  const head_controller__srv__Head_Response__Sequence * input,
  head_controller__srv__Head_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(head_controller__srv__Head_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    head_controller__srv__Head_Response * data =
      (head_controller__srv__Head_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!head_controller__srv__Head_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          head_controller__srv__Head_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!head_controller__srv__Head_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
