#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrixA[10][10], matrixB[10][10], result[10][10];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    printf("Resultant Matrix (A - B):\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
