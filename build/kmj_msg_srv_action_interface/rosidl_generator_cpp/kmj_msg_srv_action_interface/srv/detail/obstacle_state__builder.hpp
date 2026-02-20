// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__BUILDER_HPP_
#define KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kmj_msg_srv_action_interface/srv/detail/obstacle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kmj_msg_srv_action_interface
{

namespace srv
{

namespace builder
{

class Init_ObstacleState_Request_obstacle
{
public:
  explicit Init_ObstacleState_Request_obstacle(::kmj_msg_srv_action_interface::srv::ObstacleState_Request & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Request obstacle(::kmj_msg_srv_action_interface::srv::ObstacleState_Request::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Request msg_;
};

class Init_ObstacleState_Request_set
{
public:
  Init_ObstacleState_Request_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleState_Request_obstacle set(::kmj_msg_srv_action_interface::srv::ObstacleState_Request::_set_type arg)
  {
    msg_.set = std::move(arg);
    return Init_ObstacleState_Request_obstacle(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::srv::ObstacleState_Request>()
{
  return kmj_msg_srv_action_interface::srv::builder::Init_ObstacleState_Request_set();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace srv
{

namespace builder
{

class Init_ObstacleState_Response_success
{
public:
  explicit Init_ObstacleState_Response_success(::kmj_msg_srv_action_interface::srv::ObstacleState_Response & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Response success(::kmj_msg_srv_action_interface::srv::ObstacleState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Response msg_;
};

class Init_ObstacleState_Response_obstacle
{
public:
  Init_ObstacleState_Response_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleState_Response_success obstacle(::kmj_msg_srv_action_interface::srv::ObstacleState_Response::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_ObstacleState_Response_success(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::srv::ObstacleState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::srv::ObstacleState_Response>()
{
  return kmj_msg_srv_action_interface::srv::builder::Init_ObstacleState_Response_obstacle();
}

}  // namespace kmj_msg_srv_action_interface

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__BUILDER_HPP_
