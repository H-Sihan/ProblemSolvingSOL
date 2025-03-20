/*
    Simple Calculator
*/
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        // Display menu
        printf("\nCalculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit the loop if the user chooses 5
        if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // Input numbers for operations
        //printf("Enter two numbers: ");
        //scanf("%f %f", &num1, &num2);

        int i = 0;
        while (i < 2) {
        if (i == 0) {
            printf("Enter the first number: ");
            scanf("%f", &num1);
        } else {
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }
        i++; // Increment counter
        }

        // Perform the selected operation
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
