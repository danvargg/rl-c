// Simple matrix multiplication
#include <stdio.h>

// Function to perform matrix multiplication
void matrix_multiply(double *matrix_a, double *matrix_b, double *result, int rows_a, int cols_a, int cols_b) {
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            double sum = 0.0;
            for (int k = 0; k < cols_a; k++) {
                sum += matrix_a[i * cols_a + k] * matrix_b[k * cols_b + j];
            }
            result[i * cols_b + j] = sum;
        }
    }
}