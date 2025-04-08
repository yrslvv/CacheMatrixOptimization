# Matrix Multiplication Performance Benchmark

This project benchmarks the performance of different matrix multiplication algorithms. It includes several variations in matrix multiplication implementations to assess their performance and efficiency in terms of cache utilization and execution times.

## Purpose
The goal of this project is to analyze and compare the execution times of different matrix multiplication algorithms using varying matrix sizes. The project measures both the filling time for matrices and the multiplication time for six different algorithm types.

## Hardware Specifications
- **Processor**: AMD Ryzen 7 5800X3D 8-Core Processor 3.40 GHz

Here is all information about my processor L1, L2, L3 caches
![image](https://github.com/user-attachments/assets/8f21344d-b57c-4622-8abb-2f6d70857bcc)

## Decided Measure Tests

### Matrices Fill Times

| Matrix Size | Time to Fill |
|-------------|--------------|
| 300         | 13ms         |
| 2300        | 51ms         |
| 4300        | 148ms        |
| 6300        | 302ms        |
| 8300        | 549ms        |
| 10000       | 764ms        |

### Function Type vs Matrix Size (excluding matrix filling)

*Converted times to minutes to make the data easier to visualize, since the difference between milliseconds and minutes is too large for meaningful graphing.*

| Size/Type (Matrix Size) | 1      | 2      | 3      | 4      | 5      | 6      |
|-------------------------|--------|--------|--------|--------|--------|--------|
| 300                     | 0.0014m| 0.0014m| 0.0012m| 0.0012m| 0.0013m| 0.0014m|
| 2300                    | 0.6103m| 0.6038m| 0.4428m| 0.4836m| 0.8867m| 0.8852m|
| 4300                    | 4.8752m| 4.5370m| 3.0746m| 3.0675m| 7.0326m| 6.9502m|
| 6300                    | 16.5784m| 15.1501m| 9.7148m| 9.7536m| 24.8790m| 24.9332m|
| 8300                    | 40.0525m| 36.4034m| 22.6711m| 22.4835m| 59.5312m| 59.6276m|
| 10000                   | 67.6216m| 64.3929m| 41.0716m| 41.2670m| 99.9447m| 102.2649m|

# Plotting The Data
![image](https://github.com/user-attachments/assets/ecd7ab60-b663-45f7-9a3f-5229180aed3b)

# Conclusion 
In conclusion, the 3-rd and 4-th type of function is the best, but overall, the 3-rd type is
winning (fastest). Graph using matplotlib python.
