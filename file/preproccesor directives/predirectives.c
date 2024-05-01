#include <stdio.h>

// Define a macro for the value of PI
#define PI 3.14159

// Define a macro function to calculate the square of a number
#define SQUARE(x) ((x) * (x))

// Check if DEBUG mode is enabled
#ifdef DEBUG
    #define DEBUG_MESSAGE "Debug mode is ON"
#else
    #define DEBUG_MESSAGE "Debug mode is OFF"
#endif

// Undefine the DEBUG macro (comment this line to enable DEBUG mode)
#undef DEBUG

int main() {
    // Using the defined macros
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    printf("Area of circle: %lf\n", area);

    // Conditional compilation based on DEBUG mode
    printf("%s\n", DEBUG_MESSAGE);

    return 0;
}
