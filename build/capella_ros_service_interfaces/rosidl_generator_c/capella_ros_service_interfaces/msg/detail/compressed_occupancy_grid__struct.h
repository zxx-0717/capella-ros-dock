// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capella_ros_service_interfaces:msg/CompressedOccupancyGrid.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'info'
#include "nav_msgs/msg/detail/map_meta_data__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CompressedOccupancyGrid in the package capella_ros_service_interfaces.
/**
  * This represents a 2-D grid map
 */
typedef struct capella_ros_service_interfaces__msg__CompressedOccupancyGrid
{
  std_msgs__msg__Header header;
  /// MetaData for the map
  nav_msgs__msg__MapMetaData info;
  /// The map data, in row-major order, starting with (0,0).
  /// Cell (1, 0) will be listed second, representing the next cell in the x direction.
  /// Cell (0, 1) will be at the index equal to info.width, followed by (1, 1).
  /// The values inside are application dependent, but frequently,
  /// 0 represents unoccupied, 1 represents definitely occupied, and
  /// -1 represents unknown.
  rosidl_runtime_c__uint8__Sequence data;
} capella_ros_service_interfaces__msg__CompressedOccupancyGrid;

// Struct for a sequence of capella_ros_service_interfaces__msg__CompressedOccupancyGrid.
typedef struct capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence
{
  capella_ros_service_interfaces__msg__CompressedOccupancyGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capella_ros_service_interfaces__msg__CompressedOccupancyGrid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__COMPRESSED_OCCUPANCY_GRID__STRUCT_H_
