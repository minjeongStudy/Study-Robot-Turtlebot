// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kmj_msg_srv_action_interface:srv/ObstacleState.idl
// generated code does not contain a copyright notice

#ifndef KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_HPP_
#define KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Request __attribute__((deprecated))
#else
# define DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Request __declspec(deprecated)
#endif

namespace kmj_msg_srv_action_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObstacleState_Request_
{
  using Type = ObstacleState_Request_<ContainerAllocator>;

  explicit ObstacleState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = false;
      this->obstacle = false;
    }
  }

  explicit ObstacleState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = false;
      this->obstacle = false;
    }
  }

  // field types and members
  using _set_type =
    bool;
  _set_type set;
  using _obstacle_type =
    bool;
  _obstacle_type obstacle;

  // setters for named parameter idiom
  Type & set__set(
    const bool & _arg)
  {
    this->set = _arg;
    return *this;
  }
  Type & set__obstacle(
    const bool & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Request
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Request
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleState_Request_ & other) const
  {
    if (this->set != other.set) {
      return false;
    }
    if (this->obstacle != other.obstacle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleState_Request_

// alias to use template instance with default allocator
using ObstacleState_Request =
  kmj_msg_srv_action_interface::srv::ObstacleState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface


#ifndef _WIN32
# define DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Response __attribute__((deprecated))
#else
# define DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Response __declspec(deprecated)
#endif

namespace kmj_msg_srv_action_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObstacleState_Response_
{
  using Type = ObstacleState_Response_<ContainerAllocator>;

  explicit ObstacleState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle = false;
      this->success = false;
    }
  }

  explicit ObstacleState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle = false;
      this->success = false;
    }
  }

  // field types and members
  using _obstacle_type =
    bool;
  _obstacle_type obstacle;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__obstacle(
    const bool & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Response
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kmj_msg_srv_action_interface__srv__ObstacleState_Response
    std::shared_ptr<kmj_msg_srv_action_interface::srv::ObstacleState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleState_Response_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleState_Response_

// alias to use template instance with default allocator
using ObstacleState_Response =
  kmj_msg_srv_action_interface::srv::ObstacleState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

namespace kmj_msg_srv_action_interface
{

namespace srv
{

struct ObstacleState
{
  using Request = kmj_msg_srv_action_interface::srv::ObstacleState_Request;
  using Response = kmj_msg_srv_action_interface::srv::ObstacleState_Response;
};

}  // namespace srv

}  // namespace kmj_msg_srv_action_interface

#endif  // KMJ_MSG_SRV_ACTION_INTERFACE__SRV__DETAIL__OBSTACLE_STATE__STRUCT_HPP_
