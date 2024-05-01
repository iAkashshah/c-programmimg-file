#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
    double totalMarks;
};

int main() {
    // Declare an array of Student structures
    struct Student students[4];

    // Input data for each student
    for (int i = 0; i < 4; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%lf", &students[i].totalMarks);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Total Marks: %.2lf\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}
