#include <stdio.h>

int main() {
    FILE *file; // File pointer
    char data[100]; // Buffer to store data

    // Open a file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display data from the beginning
    printf("Data read from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Move the file position indicator to the 10th byte from the beginning
    fseek(file, 10, SEEK_SET);

    // Read and display data from the new position
    printf("\nData read after fseek:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Reset the file position indicator to the beginning
    rewind(file);

    // Read and display data from the beginning again
    printf("\nData read after rewind:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);
    return 0;
}
