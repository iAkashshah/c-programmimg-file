//comparing of two strings without using library funvtion of string
#include <stdio.h>

int compareStrings(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return 0; // Not equal
        ++str1;
        ++str2;
    }
    // If both strings have the same length, they are equal.
    return (*str1 == *str2);
}

int main() {
    const char* string1 = "hello";
    const char* string2 = "world";

    if (compareStrings(string1, string2))
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}

