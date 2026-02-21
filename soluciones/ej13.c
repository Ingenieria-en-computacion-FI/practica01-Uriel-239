#include <stdio.h>

#define n 3

int main() {
    float A[n][n];
    float B[n];
    int i, j;

    printf("Introduce los valores para una matriz %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        float sum = 0;
        float prod = 1;
        float otro = 1;
        float sumf = 0;

        switch (i % 3) {
            case 1: {
                for (j = 0; j <= i; j++) {
                    sum += A[i][j];
                }
                B[i] = sum;
                break;
            }

            case 2: {
                for (j = 1; j < n; j++) {
                    prod *= A[j][i];
                }
                B[i] = prod;
                break;
            }

            default: {
                for (j = 0; j < n; j++) {
                    otro *= A[j][i];
                }

                for (j = 0; j <= i; j++) {
                    sumf += A[i][j];
                }

                B[i] = (sumf != 0) ? (otro / sumf) : 0;
                break;
            }
        }
    }

    printf("\nArreglo B:\n");
    for (i = 0; i < n; i++) {
        printf("B
