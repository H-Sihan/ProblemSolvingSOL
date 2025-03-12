#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) { // Outer loop for rows
        for (int j = 0; j < 3; j++) { // Inner loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
