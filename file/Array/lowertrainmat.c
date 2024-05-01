#include <stdio.h>

int main() {
    int n; // Size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower triangular matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
