/*
    Task 8: Sum of Row and Column in a 2D Array​
        -Modify Task 7 by asking the user for a row number (0-2).​
        -The program should calculate and print the sum of all elements in that row.​
        -Then, ask for a column number (0-2) and print the sum of that column.
*/

#include <stdio.h>

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter row number (0-2): ");
    scanf("%d", &row);

    for(int j = 0; j < 3; j++) {
        rowSum += matrix[row][j];
    }

    printf("Sum of row %d: %d\n", row, rowSum);

    printf("Enter column number (0-2): ");
    scanf("%d", &col);

    for(int i = 0; i < 3; i++) {
        colSum += matrix[i][col];
    }

    printf("Sum of column %d: %d\n", col, colSum);

    return 0;
}