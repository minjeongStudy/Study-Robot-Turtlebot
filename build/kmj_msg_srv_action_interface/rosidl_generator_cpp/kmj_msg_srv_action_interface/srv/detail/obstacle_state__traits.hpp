// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__TRAITS_HPP_
#define KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kmj_msg_srv_action_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObstacleState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set
  {
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << ", ";
  }

  // member: obstacle
  {
    out << "obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << "\n";
  }

  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleState_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use kmj_msg_srv_action_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kmj_msg_srv_action_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kmj_msg_srv_action_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const kmj_msg_srv_action_interface::srv::ObstacleState_Request & msg)
{
  return kmj_msg_srv_action_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kmj_msg_srv_action_interface::srv::ObstacleState_Request>()
{
  return "kmj_msg_srv_action_interface::srv::ObstacleState_Request";
}

template<>
inline const char * name<kmj_msg_srv_action_interface::srv::ObstacleState_Request>()
{
  return "kmj_msg_srv_action_interface/srv/ObstacleState_Request";
}

template<>
struct has_fixed_size<kmj_msg_srv_action_interface::srv::ObstacleState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kmj_msg_srv_action_interface::srv::ObstacleState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kmj_msg_srv_action_interface::srv::ObstacleState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kmj_msg_srv_action_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObstacleState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle
  {
    out << "obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleState_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace rosidl_generator_traits
{

[[deprecated("use kmj_msg_srv_action_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kmj_msg_srv_action_interface::srv::ObstacleState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kmj_msg_srv_action_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kmj_msg_srv_action_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const kmj_msg_srv_action_interface::srv::ObstacleState_Response & msg)
{
  return kmj_msg_srv_action_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kmj_msg_srv_action_interface::srv::ObstacleState_Response>()
{
  return "kmj_msg_srv_action_interface::srv::ObstacleState_Response";
}

template<>
inline const char * name<kmj_msg_srv_action_interface::srv::ObstacleState_Response>()
{
  return "kmj_msg_srv_action_interface/srv/ObstacleState_Response";
}

template<>
struct has_fixed_size<kmj_msg_srv_action_interface::srv::ObstacleState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kmj_msg_srv_action_interface::srv::ObstacleState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kmj_msg_srv_action_interface::srv::ObstacleState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kmj_msg_srv_action_interface::srv::ObstacleState>()
{
  return "kmj_msg_srv_action_interface::srv::ObstacleState";
}

template<>
inline const char * name<kmj_msg_srv_action_interface::srv::ObstacleState>()
{
  return "kmj_msg_srv_action_interface/srv/ObstacleState";
}

template<>
struct has_fixed_size<kmj_msg_srv_action_interface::srv::ObstacleState>
  : std::integral_constant<
    bool,
    has_fixed_size<kmj_msg_srv_action_interface::srv::ObstacleState_Request>::value &&
    has_fixed_size<kmj_msg_srv_action_interface::srv::ObstacleState_Response>::value
  >
{
};

template<>
struct has_bounded_size<kmj_msg_srv_action_interface::srv::ObstacleState>
  : std::integral_constant<
    bool,
    has_bounded_size<kmj_msg_srv_action_interface::srv::ObstacleState_Request>::value &&
    has_bounded_size<kmj_msg_srv_action_interface::srv::ObstacleState_Response>::value
  >
{
};

template<>
struct is_service<kmj_msg_srv_action_interface::srv::ObstacleState>
  : std::true_type
{
};

template<>
struct is_service_request<kmj_msg_srv_action_interface::srv::ObstacleState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kmj_msg_srv_action_interface::srv::ObstacleState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__TRAITS_HPP_
