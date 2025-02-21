#include <stdio.h>

int main() {
    float price = 2.25;
    int quantity = 5;
    float totalPrice = price * quantity;

    printf("You bought %d things for £%.2f. That costs: £%.2f\n", quantity, price, totalPrice);
}
