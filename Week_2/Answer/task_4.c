/*
    If-Else Statements
        Using the same age variable from before, check the users age and 
            indicate whether or not they are old enough to travel the world alone.
            Remember, the current minimum age to travel the world alone is 18.
        If the user is too young, the program should display "You are too young to travel the world alone." 
            Otherwise, it should display "You are old enough to travel the world alone."
*/

#include <stdio.h>

int main() {
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are old enough to travel the world alone.\n");
    } else {
        printf("You are too young to travel the world alone.\n");
    }

    return 0;
}
