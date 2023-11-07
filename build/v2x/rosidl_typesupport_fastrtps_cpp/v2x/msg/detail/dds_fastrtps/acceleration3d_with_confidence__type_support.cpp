// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice
#include "v2x/msg/detail/acceleration3d_with_confidence__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x/msg/detail/acceleration3d_with_confidence__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace v2x
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x::msg::AccelerationPolarWithZ &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x::msg::AccelerationPolarWithZ &);
size_t get_serialized_size(
  const v2x::msg::AccelerationPolarWithZ &,
  size_t current_alignment);
size_t
max_serialized_size_AccelerationPolarWithZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x

namespace v2x
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x::msg::AccelerationCartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x::msg::AccelerationCartesian &);
size_t get_serialized_size(
  const v2x::msg::AccelerationCartesian &,
  size_t current_alignment);
size_t
max_serialized_size_AccelerationCartesian(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x


namespace v2x
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x
cdr_serialize(
  const v2x::msg::Acceleration3dWithConfidence & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: polar_acceleration
  v2x::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.polar_acceleration,
    cdr);
  // Member: cartesian_acceleration
  v2x::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cartesian_acceleration,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x::msg::Acceleration3dWithConfidence & ros_message)
{
  // Member: polar_acceleration
  v2x::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.polar_acceleration);

  // Member: cartesian_acceleration
  v2x::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cartesian_acceleration);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x
get_serialized_size(
  const v2x::msg::Acceleration3dWithConfidence & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: polar_acceleration

  current_alignment +=
    v2x::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.polar_acceleration, current_alignment);
  // Member: cartesian_acceleration

  current_alignment +=
    v2x::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cartesian_acceleration, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x
max_serialized_size_Acceleration3dWithConfidence(
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


  // Member: polar_acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelerationPolarWithZ(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cartesian_acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        v2x::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelerationCartesian(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Acceleration3dWithConfidence__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x::msg::Acceleration3dWithConfidence *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Acceleration3dWithConfidence__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x::msg::Acceleration3dWithConfidence *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Acceleration3dWithConfidence__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x::msg::Acceleration3dWithConfidence *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Acceleration3dWithConfidence__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Acceleration3dWithConfidence(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Acceleration3dWithConfidence__callbacks = {
  "v2x::msg",
  "Acceleration3dWithConfidence",
  _Acceleration3dWithConfidence__cdr_serialize,
  _Acceleration3dWithConfidence__cdr_deserialize,
  _Acceleration3dWithConfidence__get_serialized_size,
  _Acceleration3dWithConfidence__max_serialized_size
};

static rosidl_message_type_support_t _Acceleration3dWithConfidence__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Acceleration3dWithConfidence__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x::msg::Acceleration3dWithConfidence>()
{
  return &v2x::msg::typesupport_fastrtps_cpp::_Acceleration3dWithConfidence__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x, msg, Acceleration3dWithConfidence)() {
  return &v2x::msg::typesupport_fastrtps_cpp::_Acceleration3dWithConfidence__handle;
}

#ifdef __cplusplus
}
#endif
