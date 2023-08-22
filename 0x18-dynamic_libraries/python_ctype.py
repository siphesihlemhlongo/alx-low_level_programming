import ctypes

# Load for shared library
operations_lib = ctypes.CDLL('./100-operations.so')

# Call the 'add' function
result = operations_lib.add(5, 3)
print(f"Result of add function: {result}")

# Call the 'greet' function
name = b"Python"
operations_lib.greet(name)
