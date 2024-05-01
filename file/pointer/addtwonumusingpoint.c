#include <stdio.h>

int main() {
    double num1, num2, sum;
    double *ptr1, *ptr2;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Initialize pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the numbers using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    printf("Sum of %.2lf and %.2lf is %.2lf\n", *ptr1, *ptr2, sum);

    return 0;
}
