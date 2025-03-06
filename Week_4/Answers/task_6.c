/*
Write a program to reverse the digits of a given positive integer. Use a for loop.

    Input should be taken from user.

    For example: If the input number is 12345, the output should be 54321.
*/
#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (; num > 0; num /= 10) {
        int digit = num % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Append the digit to reversed
    }

    printf("The reversed number is: %d\n", reversed);

    return 0;
}