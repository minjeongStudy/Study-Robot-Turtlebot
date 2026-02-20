// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // set
  // obstacle
  return true;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg)
{
  if (!msg) {
    return;
  }
  // set
  // obstacle
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Request * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // set
  if (lhs->set != rhs->set) {
    return false;
  }
  // obstacle
  if (lhs->obstacle != rhs->obstacle) {
    return false;
  }
  return true;
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Request * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // set
  output->set = input->set;
  // obstacle
  output->obstacle = input->obstacle;
  return true;
}

kmj_msg_srv_action_interface__srv__ObstacleState_Request *
kmj_msg_srv_action_interface__srv__ObstacleState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg = (kmj_msg_srv_action_interface__srv__ObstacleState_Request *)allocator.allocate(sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request));
  bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__init(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * data = NULL;

  if (size) {
    data = (kmj_msg_srv_action_interface__srv__ObstacleState_Request *)allocator.zero_allocate(size, sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(&data[i - 1]);
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
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array)
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
      kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(&array->data[i]);
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

kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence *
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array = (kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence *)allocator.allocate(sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kmj_msg_srv_action_interface__srv__ObstacleState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kmj_msg_srv_action_interface__srv__ObstacleState_Request * data =
      (kmj_msg_srv_action_interface__srv__ObstacleState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kmj_msg_srv_action_interface__srv__ObstacleState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle
  // success
  return true;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg)
{
  if (!msg) {
    return;
  }
  // obstacle
  // success
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Response * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle
  if (lhs->obstacle != rhs->obstacle) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Response * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle
  output->obstacle = input->obstacle;
  // success
  output->success = input->success;
  return true;
}

kmj_msg_srv_action_interface__srv__ObstacleState_Response *
kmj_msg_srv_action_interface__srv__ObstacleState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg = (kmj_msg_srv_action_interface__srv__ObstacleState_Response *)allocator.allocate(sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response));
  bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__init(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * data = NULL;

  if (size) {
    data = (kmj_msg_srv_action_interface__srv__ObstacleState_Response *)allocator.zero_allocate(size, sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(&data[i - 1]);
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
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array)
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
      kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(&array->data[i]);
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

kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence *
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array = (kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence *)allocator.allocate(sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kmj_msg_srv_action_interface__srv__ObstacleState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kmj_msg_srv_action_interface__srv__ObstacleState_Response * data =
      (kmj_msg_srv_action_interface__srv__ObstacleState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kmj_msg_srv_action_interface__srv__ObstacleState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
