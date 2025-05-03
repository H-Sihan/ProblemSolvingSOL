/*
    Task 5: Find the factorial of a number

        Write a function calculateFactorial() that:

        Asks the user for a number.
            Calculates its factorial using a loop.
            Prints the factorial value.
            The function should execute when called from main().
*/

#include <stdio.h>

// Function to calculate factorial of a number
void calculateFactorial() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", num, factorial);
}

int main() {
    calculateFactorial(); // Call function
    return 0;
}
