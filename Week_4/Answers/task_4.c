/*
Repeat task 3. However,  instead of getting the user to enter either 1 or 0 to control the loop:

    Use the char values 'y' and 'n'
*/

#include <stdio.h>

int main() {
    int age;
    char choice;
    float fare;

    do {
        // Ask the user to enter their age
        printf("Enter your age: ");
        scanf("%d", &age);

        // Calculate fare based on age
        if (age <= 5) {
            fare = 0.0; // Free for children under 5
        } else if (age <= 18) {
            fare = 1.5; // Discounted fare for children 6-18
        } else if (age >= 60) {
            fare = 1.0; // Discounted fare for seniors 60+
        } else {
            fare = 2.5; // Full fare for adults
        }

        // Display the calculated fare
        printf("Your bus fare is: $%.2f\n", fare);

        // Ask the user if they want to run the program again
        printf("Do you want to calculate another fare? (y/n): ");
        scanf(" %c", &choice); // Add a space before %c to consume the newline character
    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the bus fare calculator. Goodbye!\n");
    return 0;
}