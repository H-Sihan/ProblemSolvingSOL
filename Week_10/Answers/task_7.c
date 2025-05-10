/*
    Task 7: Checking palindrome number
    
        • Create a function to check whether a number is a palindrome 
                (same forward and backward, Example: 343, 121).
        • Implement int isPalindrome(int num), returning 
            1 if true, 0 if false.
        • Test it in main() with at least three numbers.

*/

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed) ? 1 : 0;
}

int main() {
    // Test cases
    int num1 = 121, num2 = 343, num3 = 123;

    printf("%d is %s palindrome\n", num1, isPalindrome(num1) ? "a" : "not a");
    printf("%d is %s palindrome\n", num2, isPalindrome(num2) ? "a" : "not a");
    printf("%d is %s palindrome\n", num3, isPalindrome(num3) ? "a" : "not a");

    return 0;
}