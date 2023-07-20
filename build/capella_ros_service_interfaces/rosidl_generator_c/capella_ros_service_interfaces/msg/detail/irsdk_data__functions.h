// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from capella_ros_service_interfaces:msg/IrsdkData.idl
// generated code does not contain a copyright notice

#ifndef CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__FUNCTIONS_H_
#define CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "capella_ros_service_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "capella_ros_service_interfaces/msg/detail/irsdk_data__struct.h"

/// Initialize msg/IrsdkData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * capella_ros_service_interfaces__msg__IrsdkData
 * )) before or use
 * capella_ros_service_interfaces__msg__IrsdkData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__init(capella_ros_service_interfaces__msg__IrsdkData * msg);

/// Finalize msg/IrsdkData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
void
capella_ros_service_interfaces__msg__IrsdkData__fini(capella_ros_service_interfaces__msg__IrsdkData * msg);

/// Create msg/IrsdkData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * capella_ros_service_interfaces__msg__IrsdkData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
capella_ros_service_interfaces__msg__IrsdkData *
capella_ros_service_interfaces__msg__IrsdkData__create();

/// Destroy msg/IrsdkData message.
/**
 * It calls
 * capella_ros_service_interfaces__msg__IrsdkData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
void
capella_ros_service_interfaces__msg__IrsdkData__destroy(capella_ros_service_interfaces__msg__IrsdkData * msg);

/// Check for msg/IrsdkData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__are_equal(const capella_ros_service_interfaces__msg__IrsdkData * lhs, const capella_ros_service_interfaces__msg__IrsdkData * rhs);

/// Copy a msg/IrsdkData message.
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
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__copy(
  const capella_ros_service_interfaces__msg__IrsdkData * input,
  capella_ros_service_interfaces__msg__IrsdkData * output);

/// Initialize array of msg/IrsdkData messages.
/**
 * It allocates the memory for the number of elements and calls
 * capella_ros_service_interfaces__msg__IrsdkData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__init(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array, size_t size);

/// Finalize array of msg/IrsdkData messages.
/**
 * It calls
 * capella_ros_service_interfaces__msg__IrsdkData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
void
capella_ros_service_interfaces__msg__IrsdkData__Sequence__fini(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array);

/// Create array of msg/IrsdkData messages.
/**
 * It allocates the memory for the array and calls
 * capella_ros_service_interfaces__msg__IrsdkData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
capella_ros_service_interfaces__msg__IrsdkData__Sequence *
capella_ros_service_interfaces__msg__IrsdkData__Sequence__create(size_t size);

/// Destroy array of msg/IrsdkData messages.
/**
 * It calls
 * capella_ros_service_interfaces__msg__IrsdkData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
void
capella_ros_service_interfaces__msg__IrsdkData__Sequence__destroy(capella_ros_service_interfaces__msg__IrsdkData__Sequence * array);

/// Check for msg/IrsdkData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__are_equal(const capella_ros_service_interfaces__msg__IrsdkData__Sequence * lhs, const capella_ros_service_interfaces__msg__IrsdkData__Sequence * rhs);

/// Copy an array of msg/IrsdkData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_capella_ros_service_interfaces
bool
capella_ros_service_interfaces__msg__IrsdkData__Sequence__copy(
  const capella_ros_service_interfaces__msg__IrsdkData__Sequence * input,
  capella_ros_service_interfaces__msg__IrsdkData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAPELLA_ROS_SERVICE_INTERFACES__MSG__DETAIL__IRSDK_DATA__FUNCTIONS_H_
