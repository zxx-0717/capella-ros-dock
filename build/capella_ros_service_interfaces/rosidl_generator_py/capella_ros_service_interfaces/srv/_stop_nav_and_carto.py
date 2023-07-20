# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:srv/StopNavAndCarto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopNavAndCarto_Request(type):
    """Metaclass of message 'StopNavAndCarto_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP_CMD': 0,
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
                'capella_ros_service_interfaces.srv.StopNavAndCarto_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_nav_and_carto__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_nav_and_carto__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_nav_and_carto__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_nav_and_carto__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_nav_and_carto__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP_CMD': cls.__constants['STOP_CMD'],
        }

    @property
    def STOP_CMD(self):
        """Message constant 'STOP_CMD'."""
        return Metaclass_StopNavAndCarto_Request.__constants['STOP_CMD']


class StopNavAndCarto_Request(metaclass=Metaclass_StopNavAndCarto_Request):
    """
    Message class 'StopNavAndCarto_Request'.

    Constants:
      STOP_CMD
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_StopNavAndCarto_Response(type):
    """Metaclass of message 'StopNavAndCarto_Response'."""

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
                'capella_ros_service_interfaces.srv.StopNavAndCarto_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__stop_nav_and_carto__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__stop_nav_and_carto__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__stop_nav_and_carto__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__stop_nav_and_carto__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__stop_nav_and_carto__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopNavAndCarto_Response(metaclass=Metaclass_StopNavAndCarto_Response):
    """Message class 'StopNavAndCarto_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value


class Metaclass_StopNavAndCarto(type):
    """Metaclass of service 'StopNavAndCarto'."""

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
                'capella_ros_service_interfaces.srv.StopNavAndCarto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__stop_nav_and_carto

            from capella_ros_service_interfaces.srv import _stop_nav_and_carto
            if _stop_nav_and_carto.Metaclass_StopNavAndCarto_Request._TYPE_SUPPORT is None:
                _stop_nav_and_carto.Metaclass_StopNavAndCarto_Request.__import_type_support__()
            if _stop_nav_and_carto.Metaclass_StopNavAndCarto_Response._TYPE_SUPPORT is None:
                _stop_nav_and_carto.Metaclass_StopNavAndCarto_Response.__import_type_support__()


class StopNavAndCarto(metaclass=Metaclass_StopNavAndCarto):
    from capella_ros_service_interfaces.srv._stop_nav_and_carto import StopNavAndCarto_Request as Request
    from capella_ros_service_interfaces.srv._stop_nav_and_carto import StopNavAndCarto_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
