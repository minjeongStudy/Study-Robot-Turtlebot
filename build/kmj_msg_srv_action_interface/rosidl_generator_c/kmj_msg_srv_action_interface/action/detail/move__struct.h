// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kmj_msg_srv_action_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_
#define KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_Goal
{
  float linear_x;
  float angular_z;
  float linear;
  float angular;
  float duration;
  bool obstacle;
} kmj_msg_srv_action_interface__action__Move_Goal;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_Goal.
typedef struct kmj_msg_srv_action_interface__action__Move_Goal__Sequence
{
  kmj_msg_srv_action_interface__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_Result
{
  bool success;
  rosidl_runtime_c__String message;
} kmj_msg_srv_action_interface__action__Move_Result;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_Result.
typedef struct kmj_msg_srv_action_interface__action__Move_Result__Sequence
{
  kmj_msg_srv_action_interface__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_Feedback
{
  float elapsed_time;
} kmj_msg_srv_action_interface__action__Move_Feedback;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_Feedback.
typedef struct kmj_msg_srv_action_interface__action__Move_Feedback__Sequence
{
  kmj_msg_srv_action_interface__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "kmj_msg_srv_action_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  kmj_msg_srv_action_interface__action__Move_Goal goal;
} kmj_msg_srv_action_interface__action__Move_SendGoal_Request;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_SendGoal_Request.
typedef struct kmj_msg_srv_action_interface__action__Move_SendGoal_Request__Sequence
{
  kmj_msg_srv_action_interface__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} kmj_msg_srv_action_interface__action__Move_SendGoal_Response;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_SendGoal_Response.
typedef struct kmj_msg_srv_action_interface__action__Move_SendGoal_Response__Sequence
{
  kmj_msg_srv_action_interface__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} kmj_msg_srv_action_interface__action__Move_GetResult_Request;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_GetResult_Request.
typedef struct kmj_msg_srv_action_interface__action__Move_GetResult_Request__Sequence
{
  kmj_msg_srv_action_interface__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "kmj_msg_srv_action_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_GetResult_Response
{
  int8_t status;
  kmj_msg_srv_action_interface__action__Move_Result result;
} kmj_msg_srv_action_interface__action__Move_GetResult_Response;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_GetResult_Response.
typedef struct kmj_msg_srv_action_interface__action__Move_GetResult_Response__Sequence
{
  kmj_msg_srv_action_interface__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "kmj_msg_srv_action_interface/action/detail/move__struct.h"

/// Struct defined in action/Move in the package kmj_msg_srv_action_interface.
typedef struct kmj_msg_srv_action_interface__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  kmj_msg_srv_action_interface__action__Move_Feedback feedback;
} kmj_msg_srv_action_interface__action__Move_FeedbackMessage;

// Struct for a sequence of kmj_msg_srv_action_interface__action__Move_FeedbackMessage.
typedef struct kmj_msg_srv_action_interface__action__Move_FeedbackMessage__Sequence
{
  kmj_msg_srv_action_interface__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kmj_msg_srv_action_interface__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__STRUCT_H_
