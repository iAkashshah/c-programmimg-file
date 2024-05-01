#include <stdio.h>

int main() {
    int arr[5]; // You can adjust the size as needed
    int sum = 0;

    // Input elements from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add the current element to the sum
    }

    // Print the sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}
