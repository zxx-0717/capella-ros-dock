# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:srv/NavLaunchMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'image'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavLaunchMode_Request(type):
    """Metaclass of message 'NavLaunchMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAV_MODE': 1,
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
                'capella_ros_service_interfaces.srv.NavLaunchMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nav_launch_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nav_launch_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nav_launch_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nav_launch_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nav_launch_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAV_MODE': cls.__constants['NAV_MODE'],
        }

    @property
    def NAV_MODE(self):
        """Message constant 'NAV_MODE'."""
        return Metaclass_NavLaunchMode_Request.__constants['NAV_MODE']


class NavLaunchMode_Request(metaclass=Metaclass_NavLaunchMode_Request):
    """
    Message class 'NavLaunchMode_Request'.

    Constants:
      NAV_MODE
    """

    __slots__ = [
        '_image',
        '_resolution',
        '_x',
        '_y',
        '_z',
        '_negate',
        '_occupied_thresh',
        '_free_thresh',
    ]

    _fields_and_field_types = {
        'image': 'sequence<uint8>',
        'resolution': 'double',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'negate': 'int32',
        'occupied_thresh': 'double',
        'free_thresh': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.image = array.array('B', kwargs.get('image', []))
        self.resolution = kwargs.get('resolution', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.negate = kwargs.get('negate', int())
        self.occupied_thresh = kwargs.get('occupied_thresh', float())
        self.free_thresh = kwargs.get('free_thresh', float())

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
        if self.image != other.image:
            return False
        if self.resolution != other.resolution:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.negate != other.negate:
            return False
        if self.occupied_thresh != other.occupied_thresh:
            return False
        if self.free_thresh != other.free_thresh:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'image' array.array() must have the type code of 'B'"
            self._image = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._image = array.array('B', value)

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._resolution = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def negate(self):
        """Message field 'negate'."""
        return self._negate

    @negate.setter
    def negate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'negate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'negate' field must be an integer in [-2147483648, 2147483647]"
        self._negate = value

    @builtins.property
    def occupied_thresh(self):
        """Message field 'occupied_thresh'."""
        return self._occupied_thresh

    @occupied_thresh.setter
    def occupied_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'occupied_thresh' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'occupied_thresh' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._occupied_thresh = value

    @builtins.property
    def free_thresh(self):
        """Message field 'free_thresh'."""
        return self._free_thresh

    @free_thresh.setter
    def free_thresh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'free_thresh' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'free_thresh' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._free_thresh = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavLaunchMode_Response(type):
    """Metaclass of message 'NavLaunchMode_Response'."""

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
                'capella_ros_service_interfaces.srv.NavLaunchMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nav_launch_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nav_launch_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nav_launch_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nav_launch_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nav_launch_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavLaunchMode_Response(metaclass=Metaclass_NavLaunchMode_Response):
    """Message class 'NavLaunchMode_Response'."""

    __slots__ = [
        '_nav_status',
    ]

    _fields_and_field_types = {
        'nav_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nav_status = kwargs.get('nav_status', int())

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
        if self.nav_status != other.nav_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nav_status(self):
        """Message field 'nav_status'."""
        return self._nav_status

    @nav_status.setter
    def nav_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_status' field must be an unsigned integer in [0, 255]"
        self._nav_status = value


class Metaclass_NavLaunchMode(type):
    """Metaclass of service 'NavLaunchMode'."""

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
                'capella_ros_service_interfaces.srv.NavLaunchMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__nav_launch_mode

            from capella_ros_service_interfaces.srv import _nav_launch_mode
            if _nav_launch_mode.Metaclass_NavLaunchMode_Request._TYPE_SUPPORT is None:
                _nav_launch_mode.Metaclass_NavLaunchMode_Request.__import_type_support__()
            if _nav_launch_mode.Metaclass_NavLaunchMode_Response._TYPE_SUPPORT is None:
                _nav_launch_mode.Metaclass_NavLaunchMode_Response.__import_type_support__()


class NavLaunchMode(metaclass=Metaclass_NavLaunchMode):
    from capella_ros_service_interfaces.srv._nav_launch_mode import NavLaunchMode_Request as Request
    from capella_ros_service_interfaces.srv._nav_launch_mode import NavLaunchMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
