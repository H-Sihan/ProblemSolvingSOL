#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < cols; j++) { // Inner loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
