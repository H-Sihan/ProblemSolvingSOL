#include <stdio.h>

int main() {
    int i = 0, j, spaces, stars1, stars2;
    
    while (i < 3) { // Controls the number of rows
        stars1 = 0;
        while (stars1 <= i) { // Print left-side stars
            printf("* ");
            stars1++;
        }

        spaces = 3 - i; 
        while (spaces > 0) { // Print spaces
            printf("  ");  // Two spaces for alignment
            spaces--;
        }

        stars2 = 3 - i; 
        while (stars2 > 0) { // Print right-side stars
            printf("* ");
            stars2--;
        }

        printf("\n"); // Move to the next line after each row
        i++;
    }
    
    return 0;
}
