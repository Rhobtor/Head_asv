// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from head_controller:srv/SerialNumber.idl
// generated code does not contain a copyright notice
#include "head_controller/srv/detail/serial_number__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "head_controller/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "head_controller/srv/detail/serial_number__struct.h"
#include "head_controller/srv/detail/serial_number__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // serial_number
#include "rosidl_runtime_c/string_functions.h"  // serial_number

// forward declare type support functions


using _SerialNumber_Request__ros_msg_type = head_controller__srv__SerialNumber_Request;

static bool _SerialNumber_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SerialNumber_Request__ros_msg_type * ros_message = static_cast<const _SerialNumber_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SerialNumber_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SerialNumber_Request__ros_msg_type * ros_message = static_cast<_SerialNumber_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_head_controller
size_t get_serialized_size_head_controller__srv__SerialNumber_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerialNumber_Request__ros_msg_type * ros_message = static_cast<const _SerialNumber_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SerialNumber_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_head_controller__srv__SerialNumber_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_head_controller
size_t max_serialized_size_head_controller__srv__SerialNumber_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: serial_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SerialNumber_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_head_controller__srv__SerialNumber_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SerialNumber_Request = {
  "head_controller::srv",
  "SerialNumber_Request",
  _SerialNumber_Request__cdr_serialize,
  _SerialNumber_Request__cdr_deserialize,
  _SerialNumber_Request__get_serialized_size,
  _SerialNumber_Request__max_serialized_size
};

static rosidl_message_type_support_t _SerialNumber_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerialNumber_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, head_controller, srv, SerialNumber_Request)() {
  return &_SerialNumber_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "head_controller/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "head_controller/srv/detail/serial_number__struct.h"
// already included above
// #include "head_controller/srv/detail/serial_number__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SerialNumber_Response__ros_msg_type = head_controller__srv__SerialNumber_Response;

static bool _SerialNumber_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SerialNumber_Response__ros_msg_type * ros_message = static_cast<const _SerialNumber_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SerialNumber_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SerialNumber_Response__ros_msg_type * ros_message = static_cast<_SerialNumber_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_head_controller
size_t get_serialized_size_head_controller__srv__SerialNumber_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerialNumber_Response__ros_msg_type * ros_message = static_cast<const _SerialNumber_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SerialNumber_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_head_controller__srv__SerialNumber_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_head_controller
size_t max_serialized_size_head_controller__srv__SerialNumber_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SerialNumber_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_head_controller__srv__SerialNumber_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SerialNumber_Response = {
  "head_controller::srv",
  "SerialNumber_Response",
  _SerialNumber_Response__cdr_serialize,
  _SerialNumber_Response__cdr_deserialize,
  _SerialNumber_Response__get_serialized_size,
  _SerialNumber_Response__max_serialized_size
};

static rosidl_message_type_support_t _SerialNumber_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerialNumber_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, head_controller, srv, SerialNumber_Response)() {
  return &_SerialNumber_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "head_controller/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "head_controller/srv/serial_number.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SerialNumber__callbacks = {
  "head_controller::srv",
  "SerialNumber",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, head_controller, srv, SerialNumber_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, head_controller, srv, SerialNumber_Response)(),
};

static rosidl_service_type_support_t SerialNumber__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SerialNumber__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, head_controller, srv, SerialNumber)() {
  return &SerialNumber__handle;
}

#if defined(__cplusplus)
}
#endif
