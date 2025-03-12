/*
Write a program to calculate the factorial of a given number n. Use a for loop.

    Input should be taken from user.

    Note: The factorial of a number is the product of all positive integers less than or equal to (<=) that number.

    For example, the factorial of 5 is:
    5 x 4 x 3 x 2 x 1 = 120.
*/
#include <stdio.h>

int main(){
    int n, factorial = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("Factorial %d is %d\n", n, factorial);

    return 0;
}