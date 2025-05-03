/*
    Task 1: Print Fibonacci 
    
    Write a function printFibonacci() that prints the first 10 numbers of the 
        Fibonacci series:0 1 1 2 3 5 8 13 21 34

        The function should not take any parameters and should be called inside main().
*/

#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci() {
    int n1 = 0, n2 = 1, next, i;
    int terms = 10; // First 10 terms

    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    printf("\n");
}

int main() {
    printFibonacci(); // Call function
    return 0;
}