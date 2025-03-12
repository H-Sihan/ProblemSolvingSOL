#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) { // Controls rows
        for (int j = 0; j <= i; j++) { // Left-side stars
            printf("* ");
        }
        
        for (int s = 3 - i; s > 0; s--) { // Spaces
            printf("  "); // Two spaces for alignment
        }
        
        for (int j = 3 - i; j > 0; j--) { // Right-side stars
            printf("* ");
        }

        printf("\n"); // New line after each row
    }
    
    return 0;
}
