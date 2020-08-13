// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_msgs:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_
#define APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_

#include "apriltag_msgs/msg/detail/april_tag_detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'centre'
// Member 'corners'
#include "apriltag_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<apriltag_msgs::msg::AprilTagDetection>()
{
  return "apriltag_msgs::msg::AprilTagDetection";
}

template<>
struct has_fixed_size<apriltag_msgs::msg::AprilTagDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<apriltag_msgs::msg::AprilTagDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<apriltag_msgs::msg::AprilTagDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_
