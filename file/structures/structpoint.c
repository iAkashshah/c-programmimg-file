#include <stdio.h>

// Define the Person structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a structure variable
    struct Person person1;

    // Declare a pointer to a Person structure
    struct Person *ptrPerson;

    // Initialize the structure members
    strcpy(person1.name, "John");
    person1.age = 30;

    // Assign the address of person1 to the pointer
    ptrPerson = &person1;

    // Access and modify structure members using the pointer
    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);

    // Modify the structure using the pointer
    strcpy(ptrPerson->name, "Alice");
    ptrPerson->age = 25;

    // Display updated information
    printf("Updated Name: %s\n", person1.name);
    printf("Updated Age: %d\n", person1.age);

    return 0;
}
