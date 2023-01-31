# generated from rosidl_generator_py/resource/_idl.py.em
# with input from example_msgs:msg/Example.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'tags'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


from ._example_base import ExampleBase


class Metaclass_Example(type):
    """Metaclass of message 'Example'."""

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
            module = import_type_support('example_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'example_msgs.msg.Example')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__example
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__example
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__example
            cls._TYPE_SUPPORT = module.type_support_msg__msg__example
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__example

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Example(ExampleBase, metaclass=Metaclass_Example):
    """Message class 'Example'."""

    # Defined in base class
    # __slots__ = ("_header", "_id", "_gauge", "_tags")

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint32',
        'gauge': 'float',
        'tags': 'uint8[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'header' in kwargs:
            self.header = kwargs.pop('header')
        else:
            from std_msgs.msg import Header
            self.header = kwargs.get('header', Header())
        self.id = kwargs.pop('id', int())
        self.gauge = kwargs.pop('gauge', float())
        if 'tags' not in kwargs:
            self.tags = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.tags = numpy.array(kwargs.pop('tags'), dtype=numpy.uint8)
            assert self.tags.shape == (8, )
        assert len(kwargs) == 0, 'Invalid arguments passed to constructor: %s' % ', '.join(sorted(kwargs.keys())

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
        if self.header != other.header:
            return False
        if self.id != other.id:
            return False
        if self.gauge != other.gauge:
            return False
        if all(self.tags != other.tags):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def gauge(self):
        """Message field 'gauge'."""
        return self._gauge

    @gauge.setter
    def gauge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gauge' field must be of type 'float'"
        self._gauge = value

    @property
    def tags(self):
        """Message field 'tags'."""
        return self._tags

    @tags.setter
    def tags(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'tags' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'tags' numpy.ndarray() must have a size of 8"
            self._tags = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'tags' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._tags = numpy.array(value, dtype=numpy.uint8)

