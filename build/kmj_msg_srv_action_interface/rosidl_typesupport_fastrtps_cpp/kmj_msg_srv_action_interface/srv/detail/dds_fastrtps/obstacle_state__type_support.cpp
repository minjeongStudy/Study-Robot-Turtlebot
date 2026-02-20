// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kmj_msg_srv_action_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
cdr_serialize(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: set
  cdr << (ros_message.set ? true : false);
  // Member: obstacle
  cdr << (ros_message.obstacle ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kmj_msg_srv_action_interface::srv::ObstacleState_Request & ros_message)
{
  // Member: set
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set = tmp ? true : false;
  }

  // Member: obstacle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.obstacle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
get_serialized_size(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: set
  {
    size_t item_size = sizeof(ros_message.set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacle
  {
    size_t item_size = sizeof(ros_message.obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
max_serialized_size_ObstacleState_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstacle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kmj_msg_srv_action_interface::srv::ObstacleState_Request;
    is_plain =
      (
      offsetof(DataType, obstacle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ObstacleState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kmj_msg_srv_action_interface::srv::ObstacleState_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kmj_msg_srv_action_interface::srv::ObstacleState_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleState_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kmj_msg_srv_action_interface::srv::ObstacleState_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleState_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObstacleState_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObstacleState_Request__callbacks = {
  "kmj_msg_srv_action_interface::srv",
  "ObstacleState_Request",
  _ObstacleState_Request__cdr_serialize,
  _ObstacleState_Request__cdr_deserialize,
  _ObstacleState_Request__get_serialized_size,
  _ObstacleState_Request__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleState_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleState_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kmj_msg_srv_action_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<kmj_msg_srv_action_interface::srv::ObstacleState_Request>()
{
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kmj_msg_srv_action_interface, srv, ObstacleState_Request)() {
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kmj_msg_srv_action_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
cdr_serialize(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: obstacle
  cdr << (ros_message.obstacle ? true : false);
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kmj_msg_srv_action_interface::srv::ObstacleState_Response & ros_message)
{
  // Member: obstacle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.obstacle = tmp ? true : false;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
get_serialized_size(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: obstacle
  {
    size_t item_size = sizeof(ros_message.obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kmj_msg_srv_action_interface
max_serialized_size_ObstacleState_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: obstacle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kmj_msg_srv_action_interface::srv::ObstacleState_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ObstacleState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kmj_msg_srv_action_interface::srv::ObstacleState_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kmj_msg_srv_action_interface::srv::ObstacleState_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleState_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kmj_msg_srv_action_interface::srv::ObstacleState_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleState_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObstacleState_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObstacleState_Response__callbacks = {
  "kmj_msg_srv_action_interface::srv",
  "ObstacleState_Response",
  _ObstacleState_Response__cdr_serialize,
  _ObstacleState_Response__cdr_deserialize,
  _ObstacleState_Response__get_serialized_size,
  _ObstacleState_Response__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleState_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleState_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kmj_msg_srv_action_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<kmj_msg_srv_action_interface::srv::ObstacleState_Response>()
{
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kmj_msg_srv_action_interface, srv, ObstacleState_Response)() {
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace kmj_msg_srv_action_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ObstacleState__callbacks = {
  "kmj_msg_srv_action_interface::srv",
  "ObstacleState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kmj_msg_srv_action_interface, srv, ObstacleState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kmj_msg_srv_action_interface, srv, ObstacleState_Response)(),
};

static rosidl_service_type_support_t _ObstacleState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleState__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kmj_msg_srv_action_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<kmj_msg_srv_action_interface::srv::ObstacleState>()
{
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kmj_msg_srv_action_interface, srv, ObstacleState)() {
  return &kmj_msg_srv_action_interface::srv::typesupport_fastrtps_cpp::_ObstacleState__handle;
}

#ifdef __cplusplus
}
#endif
