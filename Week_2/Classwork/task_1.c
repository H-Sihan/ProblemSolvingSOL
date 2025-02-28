/*
    If-Statements
    1. Write a program that:
        Asks the user how old they are (which the user should enter via the console screen)
        If the user enters an age that is 0 or less, 
        display "wow, people start using computers early" on the console screen
*/

#include <stdio.h>

int main(){
    int age;
    printf("how old are you? ");
    scanf("%d", &age);

//if there should be a condition
    if (age <= 8){
        printf("wow, people start using computers early");
    }

    return 0;
}
//gcc task_1.c -o task_1 