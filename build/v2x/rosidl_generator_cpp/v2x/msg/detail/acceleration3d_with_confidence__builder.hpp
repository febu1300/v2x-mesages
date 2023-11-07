// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__BUILDER_HPP_
#define V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x/msg/detail/acceleration3d_with_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x
{

namespace msg
{

namespace builder
{

class Init_Acceleration3dWithConfidence_cartesian_acceleration
{
public:
  explicit Init_Acceleration3dWithConfidence_cartesian_acceleration(::v2x::msg::Acceleration3dWithConfidence & msg)
  : msg_(msg)
  {}
  ::v2x::msg::Acceleration3dWithConfidence cartesian_acceleration(::v2x::msg::Acceleration3dWithConfidence::_cartesian_acceleration_type arg)
  {
    msg_.cartesian_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x::msg::Acceleration3dWithConfidence msg_;
};

class Init_Acceleration3dWithConfidence_polar_acceleration
{
public:
  Init_Acceleration3dWithConfidence_polar_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Acceleration3dWithConfidence_cartesian_acceleration polar_acceleration(::v2x::msg::Acceleration3dWithConfidence::_polar_acceleration_type arg)
  {
    msg_.polar_acceleration = std::move(arg);
    return Init_Acceleration3dWithConfidence_cartesian_acceleration(msg_);
  }

private:
  ::v2x::msg::Acceleration3dWithConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x::msg::Acceleration3dWithConfidence>()
{
  return v2x::msg::builder::Init_Acceleration3dWithConfidence_polar_acceleration();
}

}  // namespace v2x

#endif  // V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__BUILDER_HPP_
