/*
    Task 2: Finding the maximum of three numbers
        • Create a function int findMax(int a, int b, int c) that 
            returns the maximum of three numbers.
        • Call the function in main() with different sets of 
            numbers and print the maximum.
*/

#include <stdio.h>

// Function to find the maximum of three numbers
int findMax(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1 = 10, num2 = 25, num3 = 15;
    int num4 = 30, num5 = 22, num6 = 45;

    printf("Maximum of (%d, %d, %d) is: %d\n", num1, num2, num3, findMax(num1, num2, num3));
    printf("Maximum of (%d, %d, %d) is: %d\n", num4, num5, num6, findMax(num4, num5, num6));

    return 0;
}
