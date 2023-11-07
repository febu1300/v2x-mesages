// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_H_
#define V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polar_acceleration'
#include "v2x/msg/detail/acceleration_polar_with_z__struct.h"
// Member 'cartesian_acceleration'
#include "v2x/msg/detail/acceleration_cartesian__struct.h"

/// Struct defined in msg/Acceleration3dWithConfidence in the package v2x.
typedef struct v2x__msg__Acceleration3dWithConfidence
{
  /// the representation of the acceleration vector in a polar or cylindrical coordinate system.
  v2x__msg__AccelerationPolarWithZ polar_acceleration;
  /// the representation of the acceleration vector in a cartesian coordinate system.
  v2x__msg__AccelerationCartesian cartesian_acceleration;
} v2x__msg__Acceleration3dWithConfidence;

// Struct for a sequence of v2x__msg__Acceleration3dWithConfidence.
typedef struct v2x__msg__Acceleration3dWithConfidence__Sequence
{
  v2x__msg__Acceleration3dWithConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x__msg__Acceleration3dWithConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_H_
