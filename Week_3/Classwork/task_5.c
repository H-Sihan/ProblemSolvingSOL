/*
Task 5
Write a program that simulates a simple calculator with a nested switch:

    The outer switch selects the operation (addition, subtraction, etc.).
    The inner switch handles the actual operation based on the user's input.

        Nested Switch Statements – Calculator 
*/

#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);
// ABC
    switch (choice) {
        case 1: // Add
            switch (choice) {
                case 1:
                    printf("Result: %d\n", num1 + num2);
                    break;
            }
            break;
        case 2: // Subtract
            switch (choice) {
                case 2:
                    printf("Result: %d\n", num1 - num2);
                    break;
            }
            break;
        case 3: // Multiply
            switch (choice) {
                case 3:
                    printf("Result: %d\n", num1 * num2);
                    break;
            }
            break;
        case 4: // Divide
            switch (choice) {
                case 4:
                    if (num2 != 0) {
                        printf("Result: %.2f\n", (float)num1 / num2);
                    } else {
                        printf("Error! Division by zero.\n");
                    }
                    break;
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
