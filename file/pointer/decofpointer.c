#include <stdio.h>



// Function to initialize a pointer
void initializePointer(int *ptr, int value) {
    *ptr = value;
}

// Function to display basic pointer declaration
void displayPointerDeclaration(int *ptr) {
    printf("Pointer address: %p\n", (void *)ptr);
}

int main() {
    double num1, num2, sum;
    int num = 42;
    int *ptr = &num;

    

    // Initialize the pointer using the function
    initializePointer(ptr, 99);

    // Display the pointer declaration using the function
    printf("Value at pointer address: %d\n", *ptr);
    displayPointerDeclaration(ptr);

    return 0;
}
