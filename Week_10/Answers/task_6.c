/*
    Task 6: Recursive factorial calculation
    
        • Implement a function int factorial(int n) that returns 
            the factorial of n.
        • Call it in main() with three different values and print the results.

*/

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Test cases
    int num1 = 5, num2 = 7, num3 = 10;

    printf("Factorial of %d is %d\n", num1, factorial(num1));
    printf("Factorial of %d is %d\n", num2, factorial(num2));
    printf("Factorial of %d is %d\n", num3, factorial(num3));

    return 0;
}
