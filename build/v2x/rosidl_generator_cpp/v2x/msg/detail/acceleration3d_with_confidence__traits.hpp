// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__TRAITS_HPP_
#define V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x/msg/detail/acceleration3d_with_confidence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polar_acceleration'
#include "v2x/msg/detail/acceleration_polar_with_z__traits.hpp"
// Member 'cartesian_acceleration'
#include "v2x/msg/detail/acceleration_cartesian__traits.hpp"

namespace v2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const Acceleration3dWithConfidence & msg,
  std::ostream & out)
{
  out << "{";
  // member: polar_acceleration
  {
    out << "polar_acceleration: ";
    to_flow_style_yaml(msg.polar_acceleration, out);
    out << ", ";
  }

  // member: cartesian_acceleration
  {
    out << "cartesian_acceleration: ";
    to_flow_style_yaml(msg.cartesian_acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Acceleration3dWithConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: polar_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polar_acceleration:\n";
    to_block_style_yaml(msg.polar_acceleration, out, indentation + 2);
  }

  // member: cartesian_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_acceleration:\n";
    to_block_style_yaml(msg.cartesian_acceleration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Acceleration3dWithConfidence & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace v2x

namespace rosidl_generator_traits
{

[[deprecated("use v2x::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x::msg::Acceleration3dWithConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x::msg::Acceleration3dWithConfidence & msg)
{
  return v2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x::msg::Acceleration3dWithConfidence>()
{
  return "v2x::msg::Acceleration3dWithConfidence";
}

template<>
inline const char * name<v2x::msg::Acceleration3dWithConfidence>()
{
  return "v2x/msg/Acceleration3dWithConfidence";
}

template<>
struct has_fixed_size<v2x::msg::Acceleration3dWithConfidence>
  : std::integral_constant<bool, has_fixed_size<v2x::msg::AccelerationCartesian>::value && has_fixed_size<v2x::msg::AccelerationPolarWithZ>::value> {};

template<>
struct has_bounded_size<v2x::msg::Acceleration3dWithConfidence>
  : std::integral_constant<bool, has_bounded_size<v2x::msg::AccelerationCartesian>::value && has_bounded_size<v2x::msg::AccelerationPolarWithZ>::value> {};

template<>
struct is_message<v2x::msg::Acceleration3dWithConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__TRAITS_HPP_
