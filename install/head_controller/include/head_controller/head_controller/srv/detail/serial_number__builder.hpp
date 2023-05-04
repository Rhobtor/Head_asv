// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from head_controller:srv/SerialNumber.idl
// generated code does not contain a copyright notice

#ifndef HEAD_CONTROLLER__SRV__DETAIL__SERIAL_NUMBER__BUILDER_HPP_
#define HEAD_CONTROLLER__SRV__DETAIL__SERIAL_NUMBER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "head_controller/srv/detail/serial_number__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace head_controller
{

namespace srv
{

namespace builder
{

class Init_SerialNumber_Request_serial_number
{
public:
  Init_SerialNumber_Request_serial_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::head_controller::srv::SerialNumber_Request serial_number(::head_controller::srv::SerialNumber_Request::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::head_controller::srv::SerialNumber_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::head_controller::srv::SerialNumber_Request>()
{
  return head_controller::srv::builder::Init_SerialNumber_Request_serial_number();
}

}  // namespace head_controller


namespace head_controller
{

namespace srv
{

namespace builder
{

class Init_SerialNumber_Response_success
{
public:
  Init_SerialNumber_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::head_controller::srv::SerialNumber_Response success(::head_controller::srv::SerialNumber_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::head_controller::srv::SerialNumber_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::head_controller::srv::SerialNumber_Response>()
{
  return head_controller::srv::builder::Init_SerialNumber_Response_success();
}

}  // namespace head_controller

#endif  // HEAD_CONTROLLER__SRV__DETAIL__SERIAL_NUMBER__BUILDER_HPP_
