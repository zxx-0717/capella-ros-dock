# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:msg/ChargeState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargeState(type):
    """Metaclass of message 'ChargeState'."""

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
                'capella_ros_service_interfaces.msg.ChargeState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charge_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charge_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charge_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charge_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charge_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeState(metaclass=Metaclass_ChargeState):
    """Message class 'ChargeState'."""

    __slots__ = [
        '_pid',
        '_has_contact',
        '_is_charging',
        '_is_docking',
    ]

    _fields_and_field_types = {
        'pid': 'string',
        'has_contact': 'boolean',
        'is_charging': 'boolean',
        'is_docking': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pid = kwargs.get('pid', str())
        self.has_contact = kwargs.get('has_contact', bool())
        self.is_charging = kwargs.get('is_charging', bool())
        self.is_docking = kwargs.get('is_docking', bool())

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
        if self.pid != other.pid:
            return False
        if self.has_contact != other.has_contact:
            return False
        if self.is_charging != other.is_charging:
            return False
        if self.is_docking != other.is_docking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pid(self):
        """Message field 'pid'."""
        return self._pid

    @pid.setter
    def pid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pid' field must be of type 'str'"
        self._pid = value

    @builtins.property
    def has_contact(self):
        """Message field 'has_contact'."""
        return self._has_contact

    @has_contact.setter
    def has_contact(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_contact' field must be of type 'bool'"
        self._has_contact = value

    @builtins.property
    def is_charging(self):
        """Message field 'is_charging'."""
        return self._is_charging

    @is_charging.setter
    def is_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_charging' field must be of type 'bool'"
        self._is_charging = value

    @builtins.property
    def is_docking(self):
        """Message field 'is_docking'."""
        return self._is_docking

    @is_docking.setter
    def is_docking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_docking' field must be of type 'bool'"
        self._is_docking = value
