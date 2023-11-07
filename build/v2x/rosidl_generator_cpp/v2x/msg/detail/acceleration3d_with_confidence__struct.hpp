// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_HPP_
#define V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polar_acceleration'
#include "v2x/msg/detail/acceleration_polar_with_z__struct.hpp"
// Member 'cartesian_acceleration'
#include "v2x/msg/detail/acceleration_cartesian__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x__msg__Acceleration3dWithConfidence __attribute__((deprecated))
#else
# define DEPRECATED__v2x__msg__Acceleration3dWithConfidence __declspec(deprecated)
#endif

namespace v2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Acceleration3dWithConfidence_
{
  using Type = Acceleration3dWithConfidence_<ContainerAllocator>;

  explicit Acceleration3dWithConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polar_acceleration(_init),
    cartesian_acceleration(_init)
  {
    (void)_init;
  }

  explicit Acceleration3dWithConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polar_acceleration(_alloc, _init),
    cartesian_acceleration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _polar_acceleration_type =
    v2x::msg::AccelerationPolarWithZ_<ContainerAllocator>;
  _polar_acceleration_type polar_acceleration;
  using _cartesian_acceleration_type =
    v2x::msg::AccelerationCartesian_<ContainerAllocator>;
  _cartesian_acceleration_type cartesian_acceleration;

  // setters for named parameter idiom
  Type & set__polar_acceleration(
    const v2x::msg::AccelerationPolarWithZ_<ContainerAllocator> & _arg)
  {
    this->polar_acceleration = _arg;
    return *this;
  }
  Type & set__cartesian_acceleration(
    const v2x::msg::AccelerationCartesian_<ContainerAllocator> & _arg)
  {
    this->cartesian_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x__msg__Acceleration3dWithConfidence
    std::shared_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x__msg__Acceleration3dWithConfidence
    std::shared_ptr<v2x::msg::Acceleration3dWithConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Acceleration3dWithConfidence_ & other) const
  {
    if (this->polar_acceleration != other.polar_acceleration) {
      return false;
    }
    if (this->cartesian_acceleration != other.cartesian_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Acceleration3dWithConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Acceleration3dWithConfidence_

// alias to use template instance with default allocator
using Acceleration3dWithConfidence =
  v2x::msg::Acceleration3dWithConfidence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x

#endif  // V2X__MSG__DETAIL__ACCELERATION3D_WITH_CONFIDENCE__STRUCT_HPP_
