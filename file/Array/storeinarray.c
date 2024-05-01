#include <stdio.h>

int main() {
    // Define an array of integers
    int arr[5]; // You can change the size as needed

    // Input elements from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("Elements in the array:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
