// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__FUNCTIONS_H_
#define V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x/msg/rosidl_generator_c__visibility_control.h"

#include "v2x/msg/detail/acceleration3d_with_confidence__struct.h"

/// Initialize msg/Acceleration3dWithConfidence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x__msg__Acceleration3dWithConfidence
 * )) before or use
 * v2x__msg__Acceleration3dWithConfidence__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__init(v2x__msg__Acceleration3dWithConfidence * msg);

/// Finalize msg/Acceleration3dWithConfidence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
void
v2x__msg__Acceleration3dWithConfidence__fini(v2x__msg__Acceleration3dWithConfidence * msg);

/// Create msg/Acceleration3dWithConfidence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x__msg__Acceleration3dWithConfidence__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
v2x__msg__Acceleration3dWithConfidence *
v2x__msg__Acceleration3dWithConfidence__create();

/// Destroy msg/Acceleration3dWithConfidence message.
/**
 * It calls
 * v2x__msg__Acceleration3dWithConfidence__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
void
v2x__msg__Acceleration3dWithConfidence__destroy(v2x__msg__Acceleration3dWithConfidence * msg);

/// Check for msg/Acceleration3dWithConfidence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__are_equal(const v2x__msg__Acceleration3dWithConfidence * lhs, const v2x__msg__Acceleration3dWithConfidence * rhs);

/// Copy a msg/Acceleration3dWithConfidence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__copy(
  const v2x__msg__Acceleration3dWithConfidence * input,
  v2x__msg__Acceleration3dWithConfidence * output);

/// Initialize array of msg/Acceleration3dWithConfidence messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x__msg__Acceleration3dWithConfidence__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__Sequence__init(v2x__msg__Acceleration3dWithConfidence__Sequence * array, size_t size);

/// Finalize array of msg/Acceleration3dWithConfidence messages.
/**
 * It calls
 * v2x__msg__Acceleration3dWithConfidence__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
void
v2x__msg__Acceleration3dWithConfidence__Sequence__fini(v2x__msg__Acceleration3dWithConfidence__Sequence * array);

/// Create array of msg/Acceleration3dWithConfidence messages.
/**
 * It allocates the memory for the array and calls
 * v2x__msg__Acceleration3dWithConfidence__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
v2x__msg__Acceleration3dWithConfidence__Sequence *
v2x__msg__Acceleration3dWithConfidence__Sequence__create(size_t size);

/// Destroy array of msg/Acceleration3dWithConfidence messages.
/**
 * It calls
 * v2x__msg__Acceleration3dWithConfidence__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
void
v2x__msg__Acceleration3dWithConfidence__Sequence__destroy(v2x__msg__Acceleration3dWithConfidence__Sequence * array);

/// Check for msg/Acceleration3dWithConfidence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__Sequence__are_equal(const v2x__msg__Acceleration3dWithConfidence__Sequence * lhs, const v2x__msg__Acceleration3dWithConfidence__Sequence * rhs);

/// Copy an array of msg/Acceleration3dWithConfidence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x
bool
v2x__msg__Acceleration3dWithConfidence__Sequence__copy(
  const v2x__msg__Acceleration3dWithConfidence__Sequence * input,
  v2x__msg__Acceleration3dWithConfidence__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__FUNCTIONS_H_
