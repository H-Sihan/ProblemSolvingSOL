/*
    Task 6: Reverse a Given Number

        Implement a function reverseNumber() that:

            Asks the user for an integer.
                Reverses the digits of the number.
                Prints the reversed number.
                Example: If the user enters 1234, the function 
                should print 4321.
*/
#include <stdio.h>

// Function to reverse a number
void reverseNumber() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reversed);
}

int main() {
    reverseNumber(); // Call function
    return 0;
}

