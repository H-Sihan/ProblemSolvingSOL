/*
Now modify the previous program in a way where the user can enter the number of rows and columns to design the pattern. ​

For example: If the user entered 5 rows and then 3 columns then the system should print out a 
rectangle that is 3 asterisks wide and 5 asterisks high.

Use nested while loop to achieve the final result.​
*/

#include <stdio.h>

int main() {
    int rows, cols, i = 0, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    while (i < rows) { // Outer loop for rows
        j = 0;
        while (j < cols) { // Inner loop for columns
            printf("* ");
            j++;
        }
        printf("\n"); // Move to the next line after each row
        i++;
    }
    return 0;
}