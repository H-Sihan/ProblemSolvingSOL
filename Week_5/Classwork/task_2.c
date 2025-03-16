/*
Print a square of asterisks on the screen.

* * * ​

* * * ​

* * *

Challenge: Your printf() statement should only print out a single asterisk. ​

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    for(int i = 0; i <3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}