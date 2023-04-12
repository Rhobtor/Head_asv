// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from head_controller:srv/Head.idl
// generated code does not contain a copyright notice

#ifndef HEAD_CONTROLLER__SRV__DETAIL__HEAD__STRUCT_H_
#define HEAD_CONTROLLER__SRV__DETAIL__HEAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'simbol'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Head in the package head_controller.
typedef struct head_controller__srv__Head_Request
{
  rosidl_runtime_c__String simbol;
  double distance;
} head_controller__srv__Head_Request;

// Struct for a sequence of head_controller__srv__Head_Request.
typedef struct head_controller__srv__Head_Request__Sequence
{
  head_controller__srv__Head_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} head_controller__srv__Head_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Head in the package head_controller.
typedef struct head_controller__srv__Head_Response
{
  double movement;
  double movemax;
  double movemin;
  bool success;
} head_controller__srv__Head_Response;

// Struct for a sequence of head_controller__srv__Head_Response.
typedef struct head_controller__srv__Head_Response__Sequence
{
  head_controller__srv__Head_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} head_controller__srv__Head_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HEAD_CONTROLLER__SRV__DETAIL__HEAD__STRUCT_H_
