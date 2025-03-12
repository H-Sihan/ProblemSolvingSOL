/*
Print three asterisks on one line.

* * *

Challenge: Your printf() statement should only print out a single asterisk. ​Use loop to achieve the final result.

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 3) { // Loop to print three asterisks
        printf("* ");
        i++;
    }
    printf("\n"); // Move to the next line
    return 0;
}
