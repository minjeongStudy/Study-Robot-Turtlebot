// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__FUNCTIONS_H_
#define KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kmj_msg_srv_action_interface/msg/rosidl_generator_c__visibility_control.h"

#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.h"

/// Initialize srv/ObstacleState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request
 * )) before or use
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg);

/// Finalize srv/ObstacleState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg);

/// Create srv/ObstacleState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
kmj_msg_srv_action_interface__srv__ObstacleState_Request *
kmj_msg_srv_action_interface__srv__ObstacleState_Request__create();

/// Destroy srv/ObstacleState message.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Request * msg);

/// Check for srv/ObstacleState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Request * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Request * rhs);

/// Copy a srv/ObstacleState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Request * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * output);

/// Initialize array of srv/ObstacleState messages.
/**
 * It allocates the memory for the number of elements and calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__init(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array, size_t size);

/// Finalize array of srv/ObstacleState messages.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array);

/// Create array of srv/ObstacleState messages.
/**
 * It allocates the memory for the array and calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence *
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__create(size_t size);

/// Destroy array of srv/ObstacleState messages.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * array);

/// Check for srv/ObstacleState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * rhs);

/// Copy an array of srv/ObstacleState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence * output);

/// Initialize srv/ObstacleState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response
 * )) before or use
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg);

/// Finalize srv/ObstacleState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg);

/// Create srv/ObstacleState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
kmj_msg_srv_action_interface__srv__ObstacleState_Response *
kmj_msg_srv_action_interface__srv__ObstacleState_Response__create();

/// Destroy srv/ObstacleState message.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Response * msg);

/// Check for srv/ObstacleState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Response * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Response * rhs);

/// Copy a srv/ObstacleState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Response * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * output);

/// Initialize array of srv/ObstacleState messages.
/**
 * It allocates the memory for the number of elements and calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__init(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array, size_t size);

/// Finalize array of srv/ObstacleState messages.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__fini(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array);

/// Create array of srv/ObstacleState messages.
/**
 * It allocates the memory for the array and calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence *
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__create(size_t size);

/// Destroy array of srv/ObstacleState messages.
/**
 * It calls
 * kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
void
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__destroy(kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * array);

/// Check for srv/ObstacleState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__are_equal(const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * lhs, const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * rhs);

/// Copy an array of srv/ObstacleState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kmj_msg_srv_action_interface
bool
kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence__copy(
  const kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * input,
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__FUNCTIONS_H_
