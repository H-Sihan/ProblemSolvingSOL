/*
Print a square of asterisks on the screen.

* * * ​

* * * ​

* * *

Challenge: Your printf() statement should only print out a single asterisk. ​

Use nested while loop to achieve the final result.
*/
#include <stdio.h>

int main() {
    int i = 0, j;

    while (i < 3) { // Outer loop for rows
        j = 0;
        while (j < 3) { // Inner loop for columns
            printf("* ");
            j++;
        }
        printf("\n"); // Move to the next line after each row
        i++;
    }
    return 0;
}