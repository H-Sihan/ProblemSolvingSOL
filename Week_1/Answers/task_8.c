#include <stdio.h>

int main() {
    int choice;
    
    // Display menu
    printf("Choose an option:\n");
    printf("1. Get Age\n");
    printf("2. Add Two Numbers\n");
    printf("3. Calculate Total Price\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Task 3: Get age
        int age;
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("I am %d years old\n", age);
    } 
    else if (choice == 2) {
        // Task 4: Add two numbers
        int firstNumber, secondNumber, sum;
        printf("Enter first number: ");
        scanf("%d", &firstNumber);
        printf("Enter second number: ");
        scanf("%d", &secondNumber);
        sum = firstNumber + secondNumber;
        printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    } 
    else if (choice == 3) {
        // Task 5: Calculate total price
        float price, totalPrice;
        int quantity;
        printf("Enter the price of an item: ");
        scanf("%f", &price);
        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        totalPrice = price * quantity;
        printf("You bought %d things for £%.2f. That costs: £%.2f\n", quantity, price, totalPrice);
    } 
    else if (choice == 4) {
        // Exit program
        printf("Exiting program. Goodbye!\n");
    } 
    else {
        // Invalid choice
        printf("Invalid choice. Please run the program again and select a valid option.\n");
    }

    return 0;
}