
# Matrix Multiplication Performance Benchmark Research

This project benchmarks the performance of different matrix multiplication algorithms, aiming to assess their efficiency in terms of cache utilization and execution times. Several variations of matrix multiplication implementations are analyzed, with the goal of comparing their execution times for matrices of different sizes.

## How to run youself
For more details, please refer to the [HowToUse](HowToUse.md) file in this repository.

## Purpose
The purpose of this project is to analyze and compare the execution times of six matrix multiplication algorithms. It focuses on both matrix filling time and multiplication time, as well as the efficiency of different strategies at varying matrix sizes.

The program defines six matrix multiplication strategies:

- **`matrixMultiplication1`**: Standard triple nested loop.
- **`matrixMultiplication2`**: Loops rearranged to optimize cache.
- **`matrixMultiplication3`**: Intermediate variables used to store values.
- **`matrixMultiplication4`**: Loop ordering optimized for better memory access patterns.
- **`matrixMultiplication5`**: Transpose the second matrix for improved cache utilization.
- **`matrixMultiplication6`**: Similar to `matrixMultiplication5`, but with different loop orders.

## Research Overview
This research benchmarks six matrix multiplication functions to identify which performs most efficiently in different scenarios. It compares their execution times across different matrix sizes, from smaller 300x300 matrices to larger 10,000x10,000 matrices.

Key insights include:
- The performance differences between the algorithms for small matrices are minor, but grow more noticeable as the matrix size increases.
- **`matrixMultiplication3`** and **`matrixMultiplication4`** outperform other strategies in terms of execution time.
- **`matrixMultiplication5`** and **`matrixMultiplication6`** perform similarly, but are slower than other methods in many test cases.

## Hardware Specifications
- **Processor**: AMD Ryzen 7 5800X3D 8-Core Processor 3.40 GHz

### Cache Details
Here is the information about the processor's L1, L2, and L3 caches:
![image](https://github.com/user-attachments/assets/8f21344d-b57c-4622-8abb-2f6d70857bcc)

## Decided Measure Tests

### Matrices Fill Times

The following table shows the time taken to fill matrices of various sizes:

| Matrix Size | Time to Fill |
|-------------|--------------|
| 300         | 13ms         |
| 2300        | 51ms         |
| 4300        | 148ms        |
| 6300        | 302ms        |
| 8300        | 549ms        |
| 10000       | 764ms        |

### Function Type vs Matrix Size (excluding matrix filling)

The table below shows the execution times of different matrix multiplication algorithms, excluding the time spent filling the matrices. 
The times are converted to minutes for better visualization:

| Size/Type (Matrix Size) | 1      | 2      | 3      | 4      | 5      | 6      |
|-------------------------|--------|--------|--------|--------|--------|--------|
| 300                     | 0.0014| 0.0014| 0.0012| 0.0012| 0.0013| 0.0014|
| 2300                    | 0.6103| 0.6038| 0.4428| 0.4836| 0.8867| 0.8852|
| 4300                    | 4.8752| 4.5370| 3.0746| 3.0675| 7.0326| 6.9502|
| 6300                    | 16.5784| 15.1501| 9.7148| 9.7536| 24.8790| 24.9332|
| 8300                    | 40.0525| 36.4034| 22.6711| 22.4835| 59.5312| 59.6276|
| 10000                   | 67.6216| 64.3929| 41.0716| 41.2670| 99.9447| 102.2649|

## Plotting The Data

Here is a graph visualizing the execution times for different matrix multiplication strategies and matrix sizes:
![image](https://github.com/user-attachments/assets/ecd7ab60-b663-45f7-9a3f-5229180aed3b)

## Conclusion
Based on the results, the best-performing algorithms are **`matrixMultiplication3`** and **`matrixMultiplication4`**, with **`matrixMultiplication3`** being the fastest overall. The performance differences are more noticeable as the matrix size increases, with **`matrixMultiplication3`** consistently outperforming the others in larger matrix sizes. 

### Graphing Conclusion:
The visual data analysis confirms that **`matrixMultiplication3`** achieves the best performance, followed by **`matrixMultiplication4`**. Both of these methods are more efficient in utilizing cache and have better memory access patterns compared to the other strategies. The graph using **matplotlib** in Python showcases the significant performance improvement in larger matrix sizes.


