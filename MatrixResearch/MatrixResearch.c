#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void fillMatrices(int*, int*, unsigned int);
void matrixMultiplication1(int*, int*, int*, unsigned int n);
void matrixMultiplication2(int*, int*, int*, unsigned int n);
void matrixMultiplication3(int*, int*, int*, unsigned int n);
void matrixMultiplication4(int*, int*, int*, unsigned int n);
void matrixMultiplication5(int*, int*, int*, unsigned int n);
void matrixMultiplication6(int*, int*, int*, unsigned int n);

int main(int argc, char** argv)
{
	if (argc != 3) {
		printf("Usage: %s <matrix_number> <matrix_size>\n", argv[0]);
		return 1;
	}

	int matrixNum = atoi(argv[1]);
	unsigned int n = atoi(argv[2]);

	int* matrixA = (int*)malloc(n * n * sizeof(int));
	if (matrixA == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}
	int* matrixB = (int*)malloc(n * n * sizeof(int));
	if (matrixB == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}
	int* matrixC = (int*)malloc(n * n * sizeof(int));
	if (matrixC == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}
	fillMatrices(matrixA, matrixB, n);


	switch (matrixNum) {
	case 1:
		matrixMultiplication1(matrixA, matrixB, matrixC, n);
		break;
	case 2:
		matrixMultiplication2(matrixA, matrixB, matrixC, n);
		break;
	case 3:
		matrixMultiplication3(matrixA, matrixB, matrixC, n);
		break;
	case 4:
		matrixMultiplication4(matrixA, matrixB, matrixC, n);
		break;
	case 5:
		matrixMultiplication5(matrixA, matrixB, matrixC, n);
		break;
	case 6:
		matrixMultiplication6(matrixA, matrixB, matrixC, n);
		break;
	default:
		printf("Sad :( no more function available, choose 1-6");
		break;
	}
	free(matrixA);
	free(matrixB);
	free(matrixC);
}

void fillMatrices(int* matrixA, int* matrixB, unsigned int n) {
	int counter = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			*(matrixA + i * n + j) = counter;
			*(matrixB + i * n + j) = counter;
			counter++;
		}
	}
}

void matrixMultiplication1(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double sum;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			sum = 0.0;
			for (k = 0; k < n; k++) {
				sum += *(A + i * n + k) * *(B + k * n + j);
			}
			*(C + i * n + j) += sum;
		}
	}
}

void matrixMultiplication2(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double sum;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			sum = 0.0;
			for (k = 0; k < n; k++) {
				sum += *(A + i * n + k) * *(B + k * n + j);
			}
			*(C + i * n + j) += sum;
		}
	}
}

void matrixMultiplication3(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double temp;
	for (i = 0; i < n; i++) {
		for (k = 0; k < n; k++) {
			temp = *(A + i * n + k);
			for (j = 0; j < n; j++) {
				*(C + i * n + j) += temp * *(B + k * n + j);
			}
		}
	}
}
void matrixMultiplication4(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double temp;
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			temp = *(A + i * n + k);
			for (j = 0; j < n; j++) {
				*(C + i * n + j) += temp * *(B + k * n + j);
			}
		}
	}
}
void matrixMultiplication5(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double temp;
	for (k = 0; k < n; k++) {
		for (j = 0; j < n; j++) {
			temp = *(B + k * n + j);
			for (i = 0; i < n; i++) {
				*(C + i * n + j) += *(A + i * n + k) * temp;
			}
		}
	}
}

void matrixMultiplication6(int* A, int* B, int* C, unsigned int n) {
	int i, j, k;
	double temp;
	for (j = 0; j < n; j++) {
		for (k = 0; k < n; k++) {
			temp = *(B + k * n + j);
			for (i = 0; i < n; i++) {
				*(C + i * n + j) += *(A + i * n + k) * temp;
			}
		}
	}
}