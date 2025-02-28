/*
Task 4
Write a program that displays a menu for a user to choose a dish. The program:
    Displays the menu:​
        1 = Pizza​
        2 = Pasta​
        3 = Salad​
        4 = Soup​
    Takes the user input and display their selected dish
    Prints "Invalid choice" for inputs outside the range
    
        Menu Selector 
*/



#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Pizza\n");
    printf("2. Pasta\n");
    printf("3. Salad\n");
    printf("4. Soup\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Pizza.\n");
            break;
        case 2:
            printf("You selected Pasta.\n");
            break;
        case 3:
            printf("You selected Salad.\n");
            break;
        case 4:
            printf("You selected Soup.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
