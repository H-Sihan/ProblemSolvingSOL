/*
Imagine a cinema hall where seats are arranged in rows and columns.
A program is needed to display the seat numbers in a structured format.
*/
#include <stdio.h>

/*#include <stdio.h>

int main() {
    int rows, cols, totalSeats = 0;
    int i = 1, j;

    // Get user input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Loop through rows
    while (i <= rows) {
        j = 1; // Reset column counter
        while (j <= cols) {
            printf("Seat [%d,%d]  ", i, j);
            totalSeats++; // Count total seats
            j++;
        }
        printf("\n");
        i++;
    }

    // Print total seats available
    printf("Total seats available: %d\n", totalSeats);

    return 0;
}
}*/

int main() {
    int rows, cols, totalSeats = 0;

    // Get user input for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Loop through rows
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("Seat [%d,%d]  ", i, j);
            totalSeats++; // Count total seats
        }
        printf("\n");
    }

    // Print total seats available
    printf("Total seats available: %d\n", totalSeats);

    return 0;
}
