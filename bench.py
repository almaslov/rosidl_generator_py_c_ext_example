import time

from rclpy.serialization import deserialize_message, serialize_message

from example_msgs.msg import Example
from example_msgs.msg.fast import Example as ExampleF


e = Example(id=1, gauge=2.2, tags=[1, 2, 3, 4, 5, 6, 7, 8])
serialized_data = serialize_message(e)
m = [serialized_data] * 1_000_000


deserialize_message(serialized_data, Example)  # implementation imports all modules
t = time.monotonic()
d1 = [deserialize_message(d, Example) for d in m]
print(time.monotonic() - t)

deserialize_message(serialized_data, ExampleF)  # implementation imports all modules
t = time.monotonic()
d2 = [deserialize_message(d, ExampleF) for d in m]
print(time.monotonic() - t)

from rosidl_runtime_py.convert import message_to_ordereddict
assert([message_to_ordereddict(d) for d in d1] == [message_to_ordereddict(d) for d in d2])
