# Matrix Multiplication Program

This program performs matrix multiplication in different ways using C. You can select between six different matrix multiplication strategies by passing a matrix number as a parameter.

## Requirements
This program should work on any system with `gcc` installed.

## Compilation

To compile the program, you can use the following `gcc` command:

```bash
gcc -o matrix_research MatrixResearch.c
```

This will generate an executable file named `matrix_multiplication`.

## Usage

After compiling, you can run the program with the following command:

```bash
./matrix_research.exe <matrix_number> <matrix_size>
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

## Measuring Execution Time

To measure execution time, you can use Cygwin and type the following command:
```bash
time ./matrix_multiplication 1 3
```

This will output the real time, user CPU time, and system CPU time taken by the program to execute.
```
$ time ./matrix_research.exe 1 1000

real    0m2.810s
user    0m2.765s
sys     0m0.046s
```

The exact result depends on the multiplication strategy chosen. All strategies will produce the same result, but they may optimize the order and method of iteration over the matrices, improving performance.
