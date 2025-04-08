# Matrix Multiplication Program

This program performs matrix multiplication in different ways using C. You can select between six different matrix multiplication strategies by passing a matrix number as a parameter.

## Requirements
This program should work on any system with `gcc` installed.

## Compilation

To compile the program, you can use the following `gcc` command:

```bash
gcc -o matrix_multiplication matrix_multiplication.c
```

This will generate an executable file named `matrix_multiplication`.

## Usage

After compiling, you can run the program with the following command:

```bash
./matrix_multiplication <matrix_number> <matrix_size>
```

### Parameters:
- `<matrix_number>`: Choose a matrix multiplication strategy (1 to 6). Each number corresponds to a different method of multiplying matrices:
  - `1`: Standard triple nested loop.
  - `2`: Loop order change (outer loop for columns).
  - `3`: Loop reordering with temporary variables.
  - `4`: Loop reordering with the inner-most loop as the first.
  - `5`: Transposing the second matrix and changing loop order.
  - `6`: Similar to the fifth, but with slightly different loop reordering.

- `<matrix_size>`: The size of the square matrices. This is an integer value representing both the number of rows and columns. For example, `n = 3` will create a `3x3` matrix.

### Example:
This command will run the program using matrix multiplication strategy 1 on `3x3` matrices:

```bash
./matrix_multiplication 1 3
```

## Explanation of Matrix Multiplication Functions

The program defines six matrix multiplication strategies:

- **`matrixMultiplication1`**: Standard triple nested loop.
- **`matrixMultiplication2`**: Loops rearranged to optimize cache.
- **`matrixMultiplication3`**: Intermediate variables used to store values.
- **`matrixMultiplication4`**: Loop ordering optimized for better memory access patterns.
- **`matrixMultiplication5`**: Transpose the second matrix for improved cache utilization.
- **`matrixMultiplication6`**: Similar to `matrixMultiplication5`, but with different loop orders.
```
