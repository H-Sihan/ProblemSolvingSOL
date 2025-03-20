/*
    Grocery Store (Week 1 to week 5 recap)
*/
#include <stdio.h>
#include <string.h> //// For string comparison function strcmp()

int main() {
    char item[20];
    int quantity;
    float price = 0;

    printf("Enter the item (Apple, Milk, Bread): ");
    scanf("%s", item);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (strcmp(item, "Apple") == 0) {
        price = 2.0 * quantity;
    } else if (strcmp(item, "Milk") == 0) {
        price = 1.5 * quantity;
    } else if (strcmp(item, "Bread") == 0) {
        price = 3.0 * quantity;
    } else {
        printf("Invalid item.\n");
        return 1;
    }

    printf("Total price: $%.2f\n", price);
    return 0;
}