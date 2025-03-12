/*
Task 5
Finally, try to produce the following pattern on the screen: ​

* *** ​

** ** ​

*** *

Attention to the spaces!

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    int rows = 4, i = 0, j;

    while (i < rows) { // Outer loop for rows
        j = 0;
        while (j < rows) { // Inner loop for columns
            if (j == i || j == rows - i - 1) { // Condition for star positions
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n"); // Move to the next line after each row
        i++;
    }
    return 0;
}