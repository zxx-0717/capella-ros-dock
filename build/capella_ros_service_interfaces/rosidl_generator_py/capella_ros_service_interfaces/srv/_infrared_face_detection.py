# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:srv/InfraredFaceDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InfraredFaceDetection_Request(type):
    """Metaclass of message 'InfraredFaceDetection_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('capella_ros_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'capella_ros_service_interfaces.srv.InfraredFaceDetection_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infrared_face_detection__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infrared_face_detection__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infrared_face_detection__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infrared_face_detection__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infrared_face_detection__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfraredFaceDetection_Request(metaclass=Metaclass_InfraredFaceDetection_Request):
    """Message class 'InfraredFaceDetection_Request'."""

    __slots__ = [
        '_infrared_face_detection',
    ]

    _fields_and_field_types = {
        'infrared_face_detection': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.infrared_face_detection = kwargs.get('infrared_face_detection', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.infrared_face_detection != other.infrared_face_detection:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def infrared_face_detection(self):
        """Message field 'infrared_face_detection'."""
        return self._infrared_face_detection

    @infrared_face_detection.setter
    def infrared_face_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infrared_face_detection' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infrared_face_detection' field must be an unsigned integer in [0, 255]"
        self._infrared_face_detection = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InfraredFaceDetection_Response(type):
    """Metaclass of message 'InfraredFaceDetection_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('capella_ros_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'capella_ros_service_interfaces.srv.InfraredFaceDetection_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__infrared_face_detection__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__infrared_face_detection__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__infrared_face_detection__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__infrared_face_detection__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__infrared_face_detection__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InfraredFaceDetection_Response(metaclass=Metaclass_InfraredFaceDetection_Response):
    """Message class 'InfraredFaceDetection_Response'."""

    __slots__ = [
        '_face_detection_status',
    ]

    _fields_and_field_types = {
        'face_detection_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.face_detection_status = kwargs.get('face_detection_status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.face_detection_status != other.face_detection_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def face_detection_status(self):
        """Message field 'face_detection_status'."""
        return self._face_detection_status

    @face_detection_status.setter
    def face_detection_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'face_detection_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'face_detection_status' field must be an unsigned integer in [0, 255]"
        self._face_detection_status = value


class Metaclass_InfraredFaceDetection(type):
    """Metaclass of service 'InfraredFaceDetection'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('capella_ros_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'capella_ros_service_interfaces.srv.InfraredFaceDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__infrared_face_detection

            from capella_ros_service_interfaces.srv import _infrared_face_detection
            if _infrared_face_detection.Metaclass_InfraredFaceDetection_Request._TYPE_SUPPORT is None:
                _infrared_face_detection.Metaclass_InfraredFaceDetection_Request.__import_type_support__()
            if _infrared_face_detection.Metaclass_InfraredFaceDetection_Response._TYPE_SUPPORT is None:
                _infrared_face_detection.Metaclass_InfraredFaceDetection_Response.__import_type_support__()


class InfraredFaceDetection(metaclass=Metaclass_InfraredFaceDetection):
    from capella_ros_service_interfaces.srv._infrared_face_detection import InfraredFaceDetection_Request as Request
    from capella_ros_service_interfaces.srv._infrared_face_detection import InfraredFaceDetection_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
