// C program to demonstrate the use of #undef preprocessor directive
#include <stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG
        printf("Debug mode\n");
    #else
        printf("Release mode\n");
    #endif
    return 0;
}
