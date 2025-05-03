/*
    Task 3: Check if a number is even or odd:
        Define a function checkEvenOdd() that:

        Asks the user to enter a number.
            Determines whether the number is even or odd. Prints the result.
            The function should handle user input and execute inside main().
*/

#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main() {
    checkEvenOdd(); // Call function
    return 0;
}
