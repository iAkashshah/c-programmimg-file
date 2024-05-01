//lenth of string without using library funvtions of string
#include <stdio.h>

int main() {
    char str[100]; // Assume the input string won't exceed 100 characters
    int i;

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    // Traverse the string until the null character is encountered
    for (i = 0; str[i] != '\0'; ++i);

    printf("\nLength of input string: %d\n", i);
    return 0;
}

