// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x:msg/Acceleration3dWithConfidence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x/msg/detail/acceleration3d_with_confidence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Acceleration3dWithConfidence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x::msg::Acceleration3dWithConfidence(_init);
}

void Acceleration3dWithConfidence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x::msg::Acceleration3dWithConfidence *>(message_memory);
  typed_message->~Acceleration3dWithConfidence();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Acceleration3dWithConfidence_message_member_array[2] = {
  {
    "polar_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x::msg::AccelerationPolarWithZ>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x::msg::Acceleration3dWithConfidence, polar_acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cartesian_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x::msg::AccelerationCartesian>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x::msg::Acceleration3dWithConfidence, cartesian_acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Acceleration3dWithConfidence_message_members = {
  "v2x::msg",  // message namespace
  "Acceleration3dWithConfidence",  // message name
  2,  // number of fields
  sizeof(v2x::msg::Acceleration3dWithConfidence),
  Acceleration3dWithConfidence_message_member_array,  // message members
  Acceleration3dWithConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  Acceleration3dWithConfidence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Acceleration3dWithConfidence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Acceleration3dWithConfidence_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x::msg::Acceleration3dWithConfidence>()
{
  return &::v2x::msg::rosidl_typesupport_introspection_cpp::Acceleration3dWithConfidence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x, msg, Acceleration3dWithConfidence)() {
  return &::v2x::msg::rosidl_typesupport_introspection_cpp::Acceleration3dWithConfidence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
