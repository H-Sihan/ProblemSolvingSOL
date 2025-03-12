#include <stdio.h>
#include <string.h>

// Function to print a single letter row by row
void printLetter(char ch, int row) {
    switch (ch) {
        case 'A': case 'a':
            if (row == 0) printf("  *  ");
            if (row == 1) printf(" * * ");
            if (row == 2) printf("*****");
            if (row == 3) printf("*   *");
            if (row == 4) printf("*   *");
            break;
        case 'B': case 'b':
            if (row == 0) printf("**** ");
            if (row == 1) printf("*   *");
            if (row == 2) printf("**** ");
            if (row == 3) printf("*   *");
            if (row == 4) printf("**** ");
            break;
        case 'C': case 'c':
            if (row == 0) printf(" *** ");
            if (row == 1) printf("*   *");
            if (row == 2) printf("*    ");
            if (row == 3) printf("*   *");
            if (row == 4) printf(" *** ");
            break;
        case 'T': case 't':
            if (row == 0) printf("*****");
            if (row == 1) printf("  *  ");
            if (row == 2) printf("  *  ");
            if (row == 3) printf("  *  ");
            if (row == 4) printf("  *  ");
            break;
        default:
            printf("     "); // Spaces for unsupported characters
    }
}

int main() {
    char name[20];

    // Get the user's name
    printf("Enter your name: ");
    scanf("%s", name);

    int len = strlen(name);

    // Print the name in stars row by row
    for (int row = 0; row < 5; row++) {  // 5 rows for each letter
        for (int i = 0; i < len; i++) {  // Loop through each letter
            printLetter(name[i], row);
            printf("  "); // Space between letters
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
