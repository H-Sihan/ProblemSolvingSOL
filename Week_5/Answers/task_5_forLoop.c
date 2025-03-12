#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < rows; j++) { // Inner loop for columns
            if (j == i || j == rows - i - 1) { // Condition for star positions
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}