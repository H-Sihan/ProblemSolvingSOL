/*
Create a program that calculates how much someone would have to pay to travel on a bus, based on their age.

    Create a variable called state and assign it a value of 1.
    The program should continue running while state is 1.
    Prompt the user to enter their age.
    Based on the entered age, calculate the bus fare using simple fare rules (e.g., free for children under 5, discounted fare for seniors).
    After displaying the fare, ask the user if they want to run the program again.
    The user should enter 1 to continue or 0 to exit.

    Note: Ensure the user enters a valid number for age (no negative values or text).
*/

#include <stdio.h>

int main() {
    int age, state = 1;
    float fare;

    while (state == 1) {
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
        printf("Enter 1 to calculate another fare or 0 to exit: ");
        scanf("%d", &state);
    }

    printf("Thank you for using the bus fare calculator. Goodbye!\n");
    return 0;
}