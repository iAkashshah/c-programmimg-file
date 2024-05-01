#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure it's large enough
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
