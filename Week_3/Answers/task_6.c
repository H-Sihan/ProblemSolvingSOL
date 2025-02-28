/*
Task 6:
Write a program that checks the nature of the number input by the user. The program:

    Determines if the number is positive, negative, or zero.
    Checks whether the that number is even or odd.

    Check Number is Positive or Negative 
*/

#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Outer switch to check if the number is positive, negative, or zero
    switch ((num > 0) - (num < 0)) { // Fix: Use arithmetic expression to get -1, 0, or 1
        case 1: // Number is positive
            printf("The number is positive.\n");

            // Nested switch to check if the positive number is even or odd
            switch (num % 2) {
                case 0: // Even number
                    printf("It is an even number.\n");
                    break;
                case 1: // Odd number
                    printf("It is an odd number.\n");
                    break;
            }
            break;

        case -1: // Number is negative
            printf("The number is negative.\n");

            // Nested switch to check if the negative number is even or odd
            switch (num % 2) {
                case 0: // Even number
                    printf("It is an even number.\n");
                    break;
                case -1: // Fix: Handle negative odd numbers correctly
                    printf("It is an odd number.\n");
                    break;
            }
            break;

        case 0: // Number is zero
            printf("The number is zero.\n");
            break;
    }

    return 0;
}