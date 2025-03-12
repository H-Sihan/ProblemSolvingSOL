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
