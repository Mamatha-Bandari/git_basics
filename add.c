// addition of matrix
#include <stdio.h>
#include "matrix.h" 

void inputMatrix(int m[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}
void addMatrix(int a[2][2],int b[2][2],int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}
void displayMatrix(int m[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

