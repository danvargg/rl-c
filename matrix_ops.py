"""Matrix operations."""
import ctypes
import numpy as np

# Load the C extension module
matrix_ops = ctypes.CDLL('./matrix_operations.so')

# Function signature for the matrix_multiply function in C
matrix_ops.matrix_multiply.argtypes = (
    np.ctypeslib.ndpointer(dtype=np.float64, ndim=2, flags='C_CONTIGUOUS'),  # matrix_a
    np.ctypeslib.ndpointer(dtype=np.float64, ndim=2, flags='C_CONTIGUOUS'),  # matrix_b
    np.ctypeslib.ndpointer(dtype=np.float64, ndim=2, flags='C_CONTIGUOUS'),  # result
    ctypes.c_int,  # rows_a
    ctypes.c_int,  # cols_a
    ctypes.c_int  # cols_b
)

# Define the matrices and their dimensions
matrix_a = np.random.rand(1000, 1000)
matrix_b = np.random.rand(1000, 1000)
result = np.zeros((1000, 1000))

# Call the matrix_multiply function from C
matrix_ops.matrix_multiply(matrix_a, matrix_b, result, matrix_a.shape[0], matrix_a.shape[1], matrix_b.shape[1])

# Print the result
print(result)
