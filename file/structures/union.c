#include <stdio.h>

// Define a union named Data
union Data {
    int intValue;
    float floatValue;
};

int main() {
    // Declare a union variable
    union Data myData;

    // Initialize the integer value
    myData.intValue = 42;
    printf("Integer value: %d\n", myData.intValue);

    // Initialize the floating-point value
    myData.floatValue = 3.14;
    printf("Float value: %.2f\n", myData.floatValue);

    // Accessing the same memory location
    printf("Memory location: %p\n", (void *)&myData);

    return 0;
}
