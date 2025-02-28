/*
    Using the age variable from the previous task, check to see if the user is the same age 
    as you. If they are then display "Hey! We are the same age!"
*/

#include <stdio.h>

int main(){
    int age, myAge = 25;
    //int myAge = 25;
    printf("how old are you? ");
    scanf("%d", &age);

    if (age == myAge){
        printf("Hey! We are the same age!");
    }

    return 0;
}