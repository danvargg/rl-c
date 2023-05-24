/*
 * Performs matrix multiplication of two matrices.
 *
 * This function multiplies two matrices, `matrix_a` and `matrix_b`, and stores the result in the `result` matrix.
 * The matrices are assumed to be stored in row-major order.

 * @param matrix_a Pointer to the first matrix.
 * @param matrix_b Pointer to the second matrix.
 * @param result Pointer to the result matrix.
 * @param rows_a Number of rows in `matrix_a`.
 * @param cols_a Number of columns in `matrix_a` and number of rows in `matrix_b`.
 * @param cols_b Number of columns in `matrix_b`.
 */
void matrix_multiply(double const *matrix_a, double const *matrix_b, double *result, int rows_a, int cols_a, int cols_b) {
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