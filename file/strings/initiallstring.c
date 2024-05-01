#include <stdio.h>

int main() {
    char myString[100]; // Declare an array to store the string

    // Input the string
    printf("Enter a string: ");
    scanf("%99[^\n]", myString); // Read up to 99 characters (excluding newline)

    // Print the entered string
    printf("You entered: %s\n", myString);

    return 0;
}
