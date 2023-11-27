#include <stdio.h>

void strassenMultiply(int A[2][2], int B[2][2], int C[2][2]) {
    int m1, m2, m3, m4, m5, m6, m7;

    m1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    m2 = (A[1][0] + A[1][1]) * B[0][0];
    m3 = A[0][0] * (B[0][1] - B[1][1]);
    m4 = A[1][1] * (B[1][0] - B[0][0]);
    m5 = (A[0][0] + A[0][1]) * B[1][1];
    m6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    m7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = m1 + m4 - m5 + m7;
    C[0][1] = m3 + m5;
    C[1][0] = m2 + m4;
    C[1][1] = m1 - m2 + m3 + m6;
}

void printMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

  
    printf("Enter elements of matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

  
    strassenMultiply(matrix1, matrix2, result);

    
    printf("Resultant matrix:\n");
    printMatrix(result);

    return 0;
}
