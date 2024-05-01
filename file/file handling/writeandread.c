#include <stdio.h>

int main() {
    FILE *file; // File pointer
    char data[100]; // Buffer to store data

    // Open a file for writing
    file = fopen("mydata.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input data from the user
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    // Write data to the file
    fprintf(file, "%s", data);
    fclose(file);

    // Open the same file for reading
    file = fopen("mydata.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read data from the file and display it
    printf("\nData read from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);
    return 0;
}
