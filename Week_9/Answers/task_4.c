/*
    Task 4: Print a right-angled triangle pattern

        Create a function printTriangle() that prints the following 
            pattern of stars (*):
        *
        * *
        * * *
        * * * *
        * * * * *
        The function should not take any parameters. It should print 5 rows of stars 
            when called inside main().
*/

#include <stdio.h>

// Function to print a triangle pattern
void printTriangle() {
    int i, j;
    int rows = 5; // Number of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    printTriangle(); // Call function
    return 0;
}