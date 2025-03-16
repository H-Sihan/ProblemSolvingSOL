/*
Now modify the previous program in a way where the user can enter the number 
of rows to design the pattern. ​

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for a square pattern: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < rows; j++) { // Inner loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
}
