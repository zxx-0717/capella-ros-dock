# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AtomizeSwitchCtrStu(type):
    """Metaclass of message 'AtomizeSwitchCtrStu'."""

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
            module = import_type_support('capella_ros_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'capella_ros_msg.msg.AtomizeSwitchCtrStu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__atomize_switch_ctr_stu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__atomize_switch_ctr_stu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__atomize_switch_ctr_stu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__atomize_switch_ctr_stu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__atomize_switch_ctr_stu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AtomizeSwitchCtrStu(metaclass=Metaclass_AtomizeSwitchCtrStu):
    """Message class 'AtomizeSwitchCtrStu'."""

    __slots__ = [
        '_emer_button',
        '_atomize_sw',
        '_strength',
    ]

    _fields_and_field_types = {
        'emer_button': 'boolean',
        'atomize_sw': 'boolean',
        'strength': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.emer_button = kwargs.get('emer_button', bool())
        self.atomize_sw = kwargs.get('atomize_sw', bool())
        self.strength = kwargs.get('strength', int())

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
        if self.emer_button != other.emer_button:
            return False
        if self.atomize_sw != other.atomize_sw:
            return False
        if self.strength != other.strength:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def emer_button(self):
        """Message field 'emer_button'."""
        return self._emer_button

    @emer_button.setter
    def emer_button(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emer_button' field must be of type 'bool'"
        self._emer_button = value

    @builtins.property
    def atomize_sw(self):
        """Message field 'atomize_sw'."""
        return self._atomize_sw

    @atomize_sw.setter
    def atomize_sw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'atomize_sw' field must be of type 'bool'"
        self._atomize_sw = value

    @builtins.property
    def strength(self):
        """Message field 'strength'."""
        return self._strength

    @strength.setter
    def strength(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strength' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'strength' field must be an unsigned integer in [0, 255]"
        self._strength = value
