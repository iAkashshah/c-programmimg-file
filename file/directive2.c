// C program to demonstrate the use of #define preprocessor directive
#include <stdio.h>

#define PI 3.14159

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("Area of circle: %lf\n", area);
    return 0;
}
