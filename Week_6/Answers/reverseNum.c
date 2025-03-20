/*
    Reverse Number using Nested While Loops
*/
#include <stdio.h>
 
int main() {
    int number, reversedNumber = 0, remainder;
 
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
 
    int temp = number; // Temporary variable to work with
 
    // Outer while loop (runs until the number becomes 0)
    while (temp != 0) {
        remainder = temp % 10; // Extract the last digit
 
        // Inner while loop (performs the reversing logic)
        while (remainder > 0) {
            reversedNumber = reversedNumber * 10 + remainder; // Append digit to reversedNumber
            break; // Exit inner loop after processing one digit
        }
 
        temp = temp / 10; // Remove the last digit from the number
    }
 
    // Display the reversed number
    printf("Reversed Number: %d\n", reversedNumber);
 
    return 0;
}