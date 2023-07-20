// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from capella_ros_service_interfaces:msg/IrimageData.idl
// generated code does not contain a copyright notice
#include "capella_ros_service_interfaces/msg/detail/irimage_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "capella_ros_service_interfaces/msg/detail/irimage_data__struct.hpp"

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
namespace capella_ros_service_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const capella_ros_service_interfaces::msg::IrtemperatureData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  capella_ros_service_interfaces::msg::IrtemperatureData &);
size_t get_serialized_size(
  const capella_ros_service_interfaces::msg::IrtemperatureData &,
  size_t current_alignment);
size_t
max_serialized_size_IrtemperatureData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace capella_ros_service_interfaces


namespace capella_ros_service_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
cdr_serialize(
  const capella_ros_service_interfaces::msg::IrimageData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: irimage
  {
    cdr << ros_message.irimage;
  }
  // Member: irtemp_and_coord
  {
    size_t size = ros_message.irtemp_and_coord.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.irtemp_and_coord[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capella_ros_service_interfaces::msg::IrimageData & ros_message)
{
  // Member: irimage
  {
    cdr >> ros_message.irimage;
  }

  // Member: irtemp_and_coord
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.irtemp_and_coord.resize(size);
    for (size_t i = 0; i < size; i++) {
      capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.irtemp_and_coord[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
get_serialized_size(
  const capella_ros_service_interfaces::msg::IrimageData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: irimage
  {
    size_t array_size = ros_message.irimage.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.irimage[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: irtemp_and_coord
  {
    size_t array_size = ros_message.irtemp_and_coord.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.irtemp_and_coord[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capella_ros_service_interfaces
max_serialized_size_IrimageData(
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


  // Member: irimage
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: irtemp_and_coord
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_IrtemperatureData(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _IrimageData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::IrimageData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IrimageData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<capella_ros_service_interfaces::msg::IrimageData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IrimageData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const capella_ros_service_interfaces::msg::IrimageData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IrimageData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IrimageData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IrimageData__callbacks = {
  "capella_ros_service_interfaces::msg",
  "IrimageData",
  _IrimageData__cdr_serialize,
  _IrimageData__cdr_deserialize,
  _IrimageData__get_serialized_size,
  _IrimageData__max_serialized_size
};

static rosidl_message_type_support_t _IrimageData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IrimageData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace capella_ros_service_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_capella_ros_service_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<capella_ros_service_interfaces::msg::IrimageData>()
{
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_IrimageData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capella_ros_service_interfaces, msg, IrimageData)() {
  return &capella_ros_service_interfaces::msg::typesupport_fastrtps_cpp::_IrimageData__handle;
}

#ifdef __cplusplus
}
#endif
