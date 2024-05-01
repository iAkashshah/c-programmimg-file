#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original array: ");
    printArray(myArray, arraySize);

    // You can modify the array elements here if needed

    printf("Modified array: ");
    printArray(myArray, arraySize);

    return 0;
}
