// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_H_
#define KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ObstacleState in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__srv__ObstacleState_Request
{
  bool set;
  bool obstacle;
} kmj_msg_srv_action_interface__srv__ObstacleState_Request;

// Struct for a sequence of kmj_msg_srv_action_interface__srv__ObstacleState_Request.
typedef struct kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence
{
  kmj_msg_srv_action_interface__srv__ObstacleState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__srv__ObstacleState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ObstacleState in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__srv__ObstacleState_Response
{
  bool obstacle;
  bool success;
} kmj_msg_srv_action_interface__srv__ObstacleState_Response;

// Struct for a sequence of kmj_msg_srv_action_interface__srv__ObstacleState_Response.
typedef struct kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence
{
  kmj_msg_srv_action_interface__srv__ObstacleState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__srv__ObstacleState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_H_
