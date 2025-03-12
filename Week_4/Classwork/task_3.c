/*
Create a program that calculates how much someone would have to pay to travel on a bus, based on their age.

    Create a variable called state and assign it a value of 1. === int state = 1
    The program should continue running while state is 1. while (state == 1)
    Prompt the user to enter their age. printf and scanf
    Based on the entered age, calculate the bus fare using simple fare rules 
    (e.g., free for children under 5, discounted fare for seniors).
    After displaying the fare, ask the user if they want to run the program again. printf and scanf
    
    The user should enter 1 to continue or 0 to exit.

    Note: Ensure the user enters a valid number for age (no negative values or text).
*/

#include <stdio.h>

int main(){
    int age, state = 1;
    float fare;

    while (state == 1){

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age <= 5) {
            fare = 0.0;
            printf("You are considered an infant. Your ticket is free.\n");
        } else if (age < 16) {
            fare = 5.0;
            printf("You qualify for a child ticket. Your ticket costs £%.2f.\n", fare);
        } else if (age >= 65) {
            fare = 10;
            printf("You qualify for a pensioner ticket. Your ticket costs £%.2f.\n", fare);
        } else {
            fare = 15;
            printf("You pay the full price. Your ticket costs £%.2f.\n", fare);
        }

        printf("Your total ticket price: £%.2f\n", fare);

        printf("Book more tickets select 1, to exit 0: ");
        scanf("%d",&state);
    }

    printf("Thank you!!");

    return 0;
    
}