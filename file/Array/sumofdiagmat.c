#include <stdio.h>

int main() {
    int n; // Size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j]; // Add diagonal elements to the sum
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
