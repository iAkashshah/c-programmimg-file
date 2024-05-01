#include <stdio.h>

// Define the Address structure (nested)
struct Address {
    char street[50];
    char city[30];
    char state[20];
    int zipCode;
};

// Define the Person structure
struct Person {
    char firstName[30];
    char lastName[30];
    struct Address address; // Nested structure
};

int main() {
    // Create a Person instance
    struct Person person;

    // Input data
    printf("Enter first name: ");
    scanf("%s", person.firstName);
    printf("Enter last name: ");
    scanf("%s", person.lastName);
    printf("Enter street: ");
    scanf("%s", person.address.street);
    printf("Enter city: ");
    scanf("%s", person.address.city);
    printf("Enter state: ");
    scanf("%s", person.address.state);
    printf("Enter ZIP code: ");
    scanf("%d", &person.address.zipCode);

    // Display person's information
    printf("\nPerson Information:\n");
    printf("Name: %s %s\n", person.firstName, person.lastName);
    printf("Address: %s, %s, %s, %d\n",
           person.address.street, person.address.city,
           person.address.state, person.address.zipCode);

    return 0;
}
