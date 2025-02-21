/*
    Using the age received from the keyboard in the previous task, 
    We will now have the system calculate the price a user would have to pay for a bus ticket, based on the following criteria:
        o The normal ticket price is £4.
        o Passengers under 4 are considered infants and travel for free
        o Passengers under 16 can buy a child ticket which is half price
        o Passengers who are 65 or older are considered pensioners and pay one third of the price
        o All other ages pay full price.
    You should store the ticket price in a variable and the program should perform 
    the relevant mathematical calculations (as required) to derive the price. 
    It should then display this to the user in an easy to understand way
*/

#include <stdio.h>

int main() {
    int age;
    float ticketPrice = 4.0;

    printf("How old are you? ");
    scanf("%d", &age);

    if (age < 4) {
        ticketPrice = 0.0;
        printf("You are considered an infant. Your ticket is free.\n");
    } else if (age < 16) {
        ticketPrice *= 0.5;
        printf("You qualify for a child ticket. Your ticket costs £%.2f.\n", ticketPrice);
    } else if (age >= 65) {
        ticketPrice /= 3;
        printf("You qualify for a pensioner ticket. Your ticket costs £%.2f.\n", ticketPrice);
    } else {
        printf("You pay the full price. Your ticket costs £%.2f.\n", ticketPrice);
    }
    return 0;
}
