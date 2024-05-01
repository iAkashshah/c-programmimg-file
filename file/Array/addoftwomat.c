#include <stdio.h>

// Function to add two matrices
void addMatrices(int rows, int columns, int mat1[][100], int mat2[][100], int result[][100]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[100][100], matrix2[100][100], sum[100][100];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Call the function to add matrices
    addMatrices(rows, columns, matrix1, matrix2, sum);

    printf("Sum of two matrices:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
