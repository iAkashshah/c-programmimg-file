#include <stdio.h>
#include <string.h>

// Define arrays for student data
#define MAX_STUDENTS 4
char studentNames[MAX_STUDENTS][50];
int studentAges[MAX_STUDENTS];
double studentTotalMarks[MAX_STUDENTS];

int main() {
    // Input data for each student
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", studentNames[i]); // Read up to 49 characters
        printf("Age: ");
        scanf("%d", &studentAges[i]);
        printf("Total Marks: ");
        scanf("%lf", &studentTotalMarks[i]);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", studentNames[i]);
        printf("Age: %d\n", studentAges[i]);
        printf("Total Marks: %.2lf\n", studentTotalMarks[i]);
        printf("\n");
    }

    return 0;
}
