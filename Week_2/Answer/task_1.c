/*
    If-Statements
    1. Write a program that:
        Asks the user how old they are (which the user should enter via the console screen)
        If the user enters an age that is 0 or less, 
        display "wow, people start using computers early" on the console screen
*/

#include <stdio.h>

int main() {
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 0) {
        printf("Wow, people start using computers early!\n");
    }

    return 0;
}