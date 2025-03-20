/*
    Multiplication Table
*/
#include <stdio.h>

int main() {
    int start, end;

    //printf("Enter the start and end of the range: ");
    //scanf("%d %d", &start, &end);

    int i = 0;

    while (i < 2) {
        if (i == 0) {
            printf("Enter the start of the range: ");
            scanf("%d", &start);
        } else {
            printf("Enter the end of the range: ");
            scanf("%d", &end);
        }
        i++;  // Increment loop counter
    }

    // Outer loop for each number in the range
    for (int num = start; num <= end; num++) {
        printf("Multiplication Table for %d:\n", num);

        // Inner loop for the table of the current number
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("\n"); // Blank line between tables
    }

    return 0;
}