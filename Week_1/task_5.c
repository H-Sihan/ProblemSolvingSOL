#include <stdio.h>

int main(){
    float price = 2.25;
    int quantity = 5;
    float totalPrice = price * quantity;
    printf("You bought %.2f * %d = %.2f", price,quantity,totalPrice);
    return 0;
}