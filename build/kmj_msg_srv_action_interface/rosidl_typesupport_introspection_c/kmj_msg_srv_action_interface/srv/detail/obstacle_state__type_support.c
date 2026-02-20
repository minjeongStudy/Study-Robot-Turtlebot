// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__rosidl_typesupport_introspection_c.h"
#include "kmj_msg_srv_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__functions.h"
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__init(message_memory);
}

void kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_fini_function(void * message_memory)
{
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_member_array[2] = {
  {
    "set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kmj_msg_srv_action_interface__srv__ObstacleState_Request, set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kmj_msg_srv_action_interface__srv__ObstacleState_Request, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_members = {
  "kmj_msg_srv_action_interface__srv",  // message namespace
  "ObstacleState_Request",  // message name
  2,  // number of fields
  sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Request),
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_member_array,  // message members
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_type_support_handle = {
  0,
  &kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kmj_msg_srv_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Request)() {
  if (!kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_type_support_handle.typesupport_identifier) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kmj_msg_srv_action_interface__srv__ObstacleState_Request__rosidl_typesupport_introspection_c__ObstacleState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kmj_msg_srv_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__functions.h"
// already included above
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__init(message_memory);
}

void kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_fini_function(void * message_memory)
{
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_member_array[2] = {
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kmj_msg_srv_action_interface__srv__ObstacleState_Response, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kmj_msg_srv_action_interface__srv__ObstacleState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_members = {
  "kmj_msg_srv_action_interface__srv",  // message namespace
  "ObstacleState_Response",  // message name
  2,  // number of fields
  sizeof(kmj_msg_srv_action_interface__srv__ObstacleState_Response),
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_member_array,  // message members
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_type_support_handle = {
  0,
  &kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kmj_msg_srv_action_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Response)() {
  if (!kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_type_support_handle.typesupport_identifier) {
    kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kmj_msg_srv_action_interface__srv__ObstacleState_Response__rosidl_typesupport_introspection_c__ObstacleState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kmj_msg_srv_action_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_members = {
  "kmj_msg_srv_action_interface__srv",  // service namespace
  "ObstacleState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_Request_message_type_support_handle,
  NULL  // response message
  // kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_Response_message_type_support_handle
};

static rosidl_service_type_support_t kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_type_support_handle = {
  0,
  &kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kmj_msg_srv_action_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState)() {
  if (!kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_type_support_handle.typesupport_identifier) {
    kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kmj_msg_srv_action_interface, srv, ObstacleState_Response)()->data;
  }

  return &kmj_msg_srv_action_interface__srv__detail__obstacle_state__rosidl_typesupport_introspection_c__ObstacleState_service_type_support_handle;
}
