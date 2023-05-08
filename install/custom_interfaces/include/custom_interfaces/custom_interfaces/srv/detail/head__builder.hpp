// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Head.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__HEAD__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__HEAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/head__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Head_Request_distance
{
public:
  explicit Init_Head_Request_distance(::custom_interfaces::srv::Head_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Head_Request distance(::custom_interfaces::srv::Head_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Request msg_;
};

class Init_Head_Request_simbol
{
public:
  Init_Head_Request_simbol()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Head_Request_distance simbol(::custom_interfaces::srv::Head_Request::_simbol_type arg)
  {
    msg_.simbol = std::move(arg);
    return Init_Head_Request_distance(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Head_Request>()
{
  return custom_interfaces::srv::builder::Init_Head_Request_simbol();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Head_Response_success
{
public:
  explicit Init_Head_Response_success(::custom_interfaces::srv::Head_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Head_Response success(::custom_interfaces::srv::Head_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Response msg_;
};

class Init_Head_Response_movemin
{
public:
  explicit Init_Head_Response_movemin(::custom_interfaces::srv::Head_Response & msg)
  : msg_(msg)
  {}
  Init_Head_Response_success movemin(::custom_interfaces::srv::Head_Response::_movemin_type arg)
  {
    msg_.movemin = std::move(arg);
    return Init_Head_Response_success(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Response msg_;
};

class Init_Head_Response_movemax
{
public:
  explicit Init_Head_Response_movemax(::custom_interfaces::srv::Head_Response & msg)
  : msg_(msg)
  {}
  Init_Head_Response_movemin movemax(::custom_interfaces::srv::Head_Response::_movemax_type arg)
  {
    msg_.movemax = std::move(arg);
    return Init_Head_Response_movemin(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Response msg_;
};

class Init_Head_Response_movement
{
public:
  Init_Head_Response_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Head_Response_movemax movement(::custom_interfaces::srv::Head_Response::_movement_type arg)
  {
    msg_.movement = std::move(arg);
    return Init_Head_Response_movemax(msg_);
  }

private:
  ::custom_interfaces::srv::Head_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Head_Response>()
{
  return custom_interfaces::srv::builder::Init_Head_Response_movement();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__HEAD__BUILDER_HPP_
