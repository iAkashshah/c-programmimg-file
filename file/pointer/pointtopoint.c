
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr1 = &num;// Pointer to an integer
    int **ptr2 = &ptr1; // Pointer to a pointer (double pointer)

    printf("Value of num: %d\n", num);
    printf("Value of ptr1: %d\n", *ptr1);
    printf("Value of ptr2: %d\n", **ptr2);

    return 0;
}
