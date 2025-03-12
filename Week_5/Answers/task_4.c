/*
Now modify the previous program in a way where the user can enter the number of rows to design the pattern. ​

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    int rows, i = 0, j;

    printf("Enter the number of rows for a square pattern: ");
    scanf("%d", &rows);

    while (i < rows) { // Outer loop for rows
        j = 0;
        while (j < rows) { // Inner loop for columns
            printf("* ");
            j++;
        }
        printf("\n"); // Move to the next line after each row
        i++;
    }
    return 0;
}
