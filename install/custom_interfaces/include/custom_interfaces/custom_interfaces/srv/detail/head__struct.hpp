// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/Head.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__HEAD__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__HEAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Head_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Head_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Head_Request_
{
  using Type = Head_Request_<ContainerAllocator>;

  explicit Head_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simbol = "";
      this->distance = 0.0;
    }
  }

  explicit Head_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : simbol(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simbol = "";
      this->distance = 0.0;
    }
  }

  // field types and members
  using _simbol_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _simbol_type simbol;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__simbol(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->simbol = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::Head_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Head_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Head_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Head_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Head_Request
    std::shared_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Head_Request
    std::shared_ptr<custom_interfaces::srv::Head_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Head_Request_ & other) const
  {
    if (this->simbol != other.simbol) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Head_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Head_Request_

// alias to use template instance with default allocator
using Head_Request =
  custom_interfaces::srv::Head_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Head_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Head_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Head_Response_
{
  using Type = Head_Response_<ContainerAllocator>;

  explicit Head_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = 0.0;
      this->movemax = 0.0;
      this->movemin = 0.0;
      this->success = false;
    }
  }

  explicit Head_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = 0.0;
      this->movemax = 0.0;
      this->movemin = 0.0;
      this->success = false;
    }
  }

  // field types and members
  using _movement_type =
    double;
  _movement_type movement;
  using _movemax_type =
    double;
  _movemax_type movemax;
  using _movemin_type =
    double;
  _movemin_type movemin;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__movement(
    const double & _arg)
  {
    this->movement = _arg;
    return *this;
  }
  Type & set__movemax(
    const double & _arg)
  {
    this->movemax = _arg;
    return *this;
  }
  Type & set__movemin(
    const double & _arg)
  {
    this->movemin = _arg;
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
    custom_interfaces::srv::Head_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Head_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Head_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Head_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Head_Response
    std::shared_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Head_Response
    std::shared_ptr<custom_interfaces::srv::Head_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Head_Response_ & other) const
  {
    if (this->movement != other.movement) {
      return false;
    }
    if (this->movemax != other.movemax) {
      return false;
    }
    if (this->movemin != other.movemin) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Head_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Head_Response_

// alias to use template instance with default allocator
using Head_Response =
  custom_interfaces::srv::Head_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct Head
{
  using Request = custom_interfaces::srv::Head_Request;
  using Response = custom_interfaces::srv::Head_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__HEAD__STRUCT_HPP_
