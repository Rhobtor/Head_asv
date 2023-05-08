// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/Head.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__HEAD__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__HEAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/head__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Head_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: simbol
  {
    out << "simbol: ";
    rosidl_generator_traits::value_to_yaml(msg.simbol, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Head_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: simbol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "simbol: ";
    rosidl_generator_traits::value_to_yaml(msg.simbol, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Head_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Head_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Head_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Head_Request>()
{
  return "custom_interfaces::srv::Head_Request";
}

template<>
inline const char * name<custom_interfaces::srv::Head_Request>()
{
  return "custom_interfaces/srv/Head_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Head_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Head_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::Head_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Head_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: movement
  {
    out << "movement: ";
    rosidl_generator_traits::value_to_yaml(msg.movement, out);
    out << ", ";
  }

  // member: movemax
  {
    out << "movemax: ";
    rosidl_generator_traits::value_to_yaml(msg.movemax, out);
    out << ", ";
  }

  // member: movemin
  {
    out << "movemin: ";
    rosidl_generator_traits::value_to_yaml(msg.movemin, out);
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
  const Head_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement: ";
    rosidl_generator_traits::value_to_yaml(msg.movement, out);
    out << "\n";
  }

  // member: movemax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movemax: ";
    rosidl_generator_traits::value_to_yaml(msg.movemax, out);
    out << "\n";
  }

  // member: movemin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movemin: ";
    rosidl_generator_traits::value_to_yaml(msg.movemin, out);
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

inline std::string to_yaml(const Head_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Head_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Head_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Head_Response>()
{
  return "custom_interfaces::srv::Head_Response";
}

template<>
inline const char * name<custom_interfaces::srv::Head_Response>()
{
  return "custom_interfaces/srv/Head_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Head_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Head_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Head_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Head>()
{
  return "custom_interfaces::srv::Head";
}

template<>
inline const char * name<custom_interfaces::srv::Head>()
{
  return "custom_interfaces/srv/Head";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Head>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::Head_Request>::value &&
    has_fixed_size<custom_interfaces::srv::Head_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::Head>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::Head_Request>::value &&
    has_bounded_size<custom_interfaces::srv::Head_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::Head>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::Head_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::Head_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__HEAD__TRAITS_HPP_
