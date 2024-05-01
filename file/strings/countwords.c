// C program to count total number of words in a string
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main() {
    char str[MAX_SIZE];
    char prevChar;
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 0;
    prevChar = '\0'; // The previous character of str[0] is null

    /* Runs loop infinitely */
    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0') {
            /* It is a word if the current character is whitespace and the previous character is non-white space */
            if (prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0') {
                words++;
            }
        }

        if (str[i] == '\0') {
            break; // Exit the loop when the end of the string is reached
        }

        prevChar = str[i];
        i++;
    }

    printf("Total number of words = %d", words);
    return 0;
}
