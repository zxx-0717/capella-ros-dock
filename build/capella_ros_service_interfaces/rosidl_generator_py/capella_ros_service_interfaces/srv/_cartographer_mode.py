# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:srv/CartographerMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartographerMode_Request(type):
    """Metaclass of message 'CartographerMode_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CARTO_MODE': 1,
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
                'capella_ros_service_interfaces.srv.CartographerMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartographer_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartographer_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartographer_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartographer_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartographer_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CARTO_MODE': cls.__constants['CARTO_MODE'],
        }

    @property
    def CARTO_MODE(self):
        """Message constant 'CARTO_MODE'."""
        return Metaclass_CartographerMode_Request.__constants['CARTO_MODE']


class CartographerMode_Request(metaclass=Metaclass_CartographerMode_Request):
    """
    Message class 'CartographerMode_Request'.

    Constants:
      CARTO_MODE
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


class Metaclass_CartographerMode_Response(type):
    """Metaclass of message 'CartographerMode_Response'."""

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
                'capella_ros_service_interfaces.srv.CartographerMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartographer_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartographer_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartographer_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartographer_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartographer_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartographerMode_Response(metaclass=Metaclass_CartographerMode_Response):
    """Message class 'CartographerMode_Response'."""

    __slots__ = [
        '_cart_status',
    ]

    _fields_and_field_types = {
        'cart_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cart_status = kwargs.get('cart_status', int())

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
        if self.cart_status != other.cart_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cart_status(self):
        """Message field 'cart_status'."""
        return self._cart_status

    @cart_status.setter
    def cart_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cart_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cart_status' field must be an unsigned integer in [0, 255]"
        self._cart_status = value


class Metaclass_CartographerMode(type):
    """Metaclass of service 'CartographerMode'."""

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
                'capella_ros_service_interfaces.srv.CartographerMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cartographer_mode

            from capella_ros_service_interfaces.srv import _cartographer_mode
            if _cartographer_mode.Metaclass_CartographerMode_Request._TYPE_SUPPORT is None:
                _cartographer_mode.Metaclass_CartographerMode_Request.__import_type_support__()
            if _cartographer_mode.Metaclass_CartographerMode_Response._TYPE_SUPPORT is None:
                _cartographer_mode.Metaclass_CartographerMode_Response.__import_type_support__()


class CartographerMode(metaclass=Metaclass_CartographerMode):
    from capella_ros_service_interfaces.srv._cartographer_mode import CartographerMode_Request as Request
    from capella_ros_service_interfaces.srv._cartographer_mode import CartographerMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
