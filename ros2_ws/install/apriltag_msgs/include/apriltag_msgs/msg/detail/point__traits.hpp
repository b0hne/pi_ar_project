// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
#define APRILTAG_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_

#include "apriltag_msgs/msg/detail/point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<apriltag_msgs::msg::Point>()
{
  return "apriltag_msgs::msg::Point";
}

template<>
struct has_fixed_size<apriltag_msgs::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<apriltag_msgs::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<apriltag_msgs::msg::Point>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
