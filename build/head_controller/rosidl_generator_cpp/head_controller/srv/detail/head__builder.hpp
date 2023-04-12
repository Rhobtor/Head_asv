// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from head_controller:srv/Head.idl
// generated code does not contain a copyright notice

#ifndef HEAD_CONTROLLER__SRV__DETAIL__HEAD__BUILDER_HPP_
#define HEAD_CONTROLLER__SRV__DETAIL__HEAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "head_controller/srv/detail/head__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace head_controller
{

namespace srv
{

namespace builder
{

class Init_Head_Request_distance
{
public:
  explicit Init_Head_Request_distance(::head_controller::srv::Head_Request & msg)
  : msg_(msg)
  {}
  ::head_controller::srv::Head_Request distance(::head_controller::srv::Head_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::head_controller::srv::Head_Request msg_;
};

class Init_Head_Request_simbol
{
public:
  Init_Head_Request_simbol()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Head_Request_distance simbol(::head_controller::srv::Head_Request::_simbol_type arg)
  {
    msg_.simbol = std::move(arg);
    return Init_Head_Request_distance(msg_);
  }

private:
  ::head_controller::srv::Head_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::head_controller::srv::Head_Request>()
{
  return head_controller::srv::builder::Init_Head_Request_simbol();
}

}  // namespace head_controller


namespace head_controller
{

namespace srv
{

namespace builder
{

class Init_Head_Response_success
{
public:
  explicit Init_Head_Response_success(::head_controller::srv::Head_Response & msg)
  : msg_(msg)
  {}
  ::head_controller::srv::Head_Response success(::head_controller::srv::Head_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::head_controller::srv::Head_Response msg_;
};

class Init_Head_Response_movemin
{
public:
  explicit Init_Head_Response_movemin(::head_controller::srv::Head_Response & msg)
  : msg_(msg)
  {}
  Init_Head_Response_success movemin(::head_controller::srv::Head_Response::_movemin_type arg)
  {
    msg_.movemin = std::move(arg);
    return Init_Head_Response_success(msg_);
  }

private:
  ::head_controller::srv::Head_Response msg_;
};

class Init_Head_Response_movemax
{
public:
  explicit Init_Head_Response_movemax(::head_controller::srv::Head_Response & msg)
  : msg_(msg)
  {}
  Init_Head_Response_movemin movemax(::head_controller::srv::Head_Response::_movemax_type arg)
  {
    msg_.movemax = std::move(arg);
    return Init_Head_Response_movemin(msg_);
  }

private:
  ::head_controller::srv::Head_Response msg_;
};

class Init_Head_Response_movement
{
public:
  Init_Head_Response_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Head_Response_movemax movement(::head_controller::srv::Head_Response::_movement_type arg)
  {
    msg_.movement = std::move(arg);
    return Init_Head_Response_movemax(msg_);
  }

private:
  ::head_controller::srv::Head_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::head_controller::srv::Head_Response>()
{
  return head_controller::srv::builder::Init_Head_Response_movement();
}

}  // namespace head_controller

#endif  // HEAD_CONTROLLER__SRV__DETAIL__HEAD__BUILDER_HPP_
