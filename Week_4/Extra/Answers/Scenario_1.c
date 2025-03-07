/*
A restaurant offers a menu where customers can place an order. The system should:

    Display a menu with prices.
    Allow customers to choose multiple items.
        Apply discounts:
            10% discount if the bill is above $100.
            5% discount if the bill is between $50-$100.

    Show the final bill and exit when the customer chooses "checkout".
        Requirements:
            Use switch-case for menu selection.
            Use while-loop to take multiple orders.
            Use if-else for discount calculation.
*/

#include <stdio.h>

int main() {
    int choice, quantity;
    float totalBill = 0, discount = 0;
    char moreOrders = 'y';

    printf("Welcome to the Restaurant\n");
    printf("1. Burger - $10\n");
    printf("2. Pizza - $15\n");
    printf("3. Pasta - $12\n");
    printf("4. Salad - $8\n");
    printf("5. Checkout\n");

    while (moreOrders == 'y' || moreOrders == 'Y') {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch(choice) {
            case 1: totalBill += quantity * 10; break;
            case 2: totalBill += quantity * 15; break;
            case 3: totalBill += quantity * 12; break;
            case 4: totalBill += quantity * 8; break;
            default: printf("Invalid choice! Try again.\n"); continue;
        }

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &moreOrders);
    }

    // Apply Discount
    if (totalBill > 100) {
        discount = totalBill * 0.10;
    } else if (totalBill >= 50) {
        discount = totalBill * 0.05;
    }

    printf("\nTotal Bill: $%.2f\n", totalBill - discount);
    printf("Discount Applied: $%.2f\n", discount);
    printf("Thank you for dining with us!\n");

    return 0;
}