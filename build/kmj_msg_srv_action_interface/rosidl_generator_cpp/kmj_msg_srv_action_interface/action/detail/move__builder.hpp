// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kmj_msg_srv_action_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kmj_msg_srv_action_interface/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_Goal_obstacle
{
public:
  explicit Init_Move_Goal_obstacle(::kmj_msg_srv_action_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_Goal obstacle(::kmj_msg_srv_action_interface::action::Move_Goal::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_duration
{
public:
  explicit Init_Move_Goal_duration(::kmj_msg_srv_action_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_obstacle duration(::kmj_msg_srv_action_interface::action::Move_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_Move_Goal_obstacle(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_angular
{
public:
  explicit Init_Move_Goal_angular(::kmj_msg_srv_action_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_duration angular(::kmj_msg_srv_action_interface::action::Move_Goal::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return Init_Move_Goal_duration(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_linear
{
public:
  explicit Init_Move_Goal_linear(::kmj_msg_srv_action_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_angular linear(::kmj_msg_srv_action_interface::action::Move_Goal::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Move_Goal_angular(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_angular_z
{
public:
  explicit Init_Move_Goal_angular_z(::kmj_msg_srv_action_interface::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_linear angular_z(::kmj_msg_srv_action_interface::action::Move_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_Move_Goal_linear(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

class Init_Move_Goal_linear_x
{
public:
  Init_Move_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_angular_z linear_x(::kmj_msg_srv_action_interface::action::Move_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Move_Goal_angular_z(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_Goal>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_Goal_linear_x();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_Result_message
{
public:
  explicit Init_Move_Result_message(::kmj_msg_srv_action_interface::action::Move_Result & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_Result message(::kmj_msg_srv_action_interface::action::Move_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Result msg_;
};

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Result_message success(::kmj_msg_srv_action_interface::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Move_Result_message(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_Result>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_Result_success();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_elapsed_time
{
public:
  Init_Move_Feedback_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kmj_msg_srv_action_interface::action::Move_Feedback elapsed_time(::kmj_msg_srv_action_interface::action::Move_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_Feedback>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_Feedback_elapsed_time();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::kmj_msg_srv_action_interface::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Request goal(::kmj_msg_srv_action_interface::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::kmj_msg_srv_action_interface::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_SendGoal_Request>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::kmj_msg_srv_action_interface::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Response stamp(::kmj_msg_srv_action_interface::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::kmj_msg_srv_action_interface::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_SendGoal_Response>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kmj_msg_srv_action_interface::action::Move_GetResult_Request goal_id(::kmj_msg_srv_action_interface::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_GetResult_Request>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::kmj_msg_srv_action_interface::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_GetResult_Response result(::kmj_msg_srv_action_interface::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::kmj_msg_srv_action_interface::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_GetResult_Response>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace kmj_msg_srv_action_interface


namespace kmj_msg_srv_action_interface
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::kmj_msg_srv_action_interface::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::kmj_msg_srv_action_interface::action::Move_FeedbackMessage feedback(::kmj_msg_srv_action_interface::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::kmj_msg_srv_action_interface::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::kmj_msg_srv_action_interface::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kmj_msg_srv_action_interface::action::Move_FeedbackMessage>()
{
  return kmj_msg_srv_action_interface::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace kmj_msg_srv_action_interface

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__ACTION__DETAIL__MOVE__BUILDER_HPP_
