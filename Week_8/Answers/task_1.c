/*
    Task 1: Swap Two Integer Values
        - Write a programme that swaps two integer values 
            (e.g., num1 = 45, num2 = 78) using a third variable.
        - Print the values before and after swapping.
*/

#include <stdio.h>

int main() {
    int num1 = 45, num2 = 78, temp;
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}