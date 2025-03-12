/*
Tracking Daily Sales of Products
A store manager needs to track total sales of different products over a 
few days and see the total sales per product and overall.

Enter sales for Product 1 on Day 1: 10
Enter sales for Product 1 on Day 2: 15
Enter sales for Product 1 on Day 3: 20
Enter sales for Product 1 on Day 4: 12
Enter sales for Product 2 on Day 1: 8
Enter sales for Product 2 on Day 2: 10

*/

#include <stdio.h>

/*int main() {
    int products, days, sales, totalSales = 0;
    int i = 1, j;

    printf("Enter number of products: ");
    scanf("%d", &products);
    
    char productNames[products][50]; // Store product names
    
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Get product names
    while (i <= products) {
        printf("Enter name of Product %d: ", i);
        scanf("%s", productNames[i - 1]); // Store product name
        i++;
    }

    i = 1; // Reset i for sales input

    // Loop through products to get sales
    while (i <= products) {
        int productTotal = 0; // Track total for each product
        j = 1;
        while (j <= days) {
            printf("Enter sales for %s on Day %d: ", productNames[i - 1], j);
            scanf("%d", &sales);
            productTotal += sales; // Add to product total
            totalSales += sales;   // Add to overall total
            j++;
        }
        printf("Total sales for %s: £%d\n", productNames[i - 1], productTotal);
        i++;
    }

    // Print overall total sales
    printf("Total sales for all products: £%d\n", totalSales);

    return 0;
}*/

#include <stdio.h>

int main() {
    int products, days, sales, totalSales = 0;

    printf("Enter number of products: ");
    scanf("%d", &products);
    
    char productNames[products][50]; // Store product names
    
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Get product names
    for (int i = 0; i < products; i++) {
        printf("Enter name of Product %d: ", i + 1);
        scanf("%s", productNames[i]); // Store product name
    }

    // Loop through products to get sales
    for (int i = 0; i < products; i++) {
        int productTotal = 0; // Track total for each product
        for (int j = 1; j <= days; j++) {
            printf("Enter sales for %s on Day %d: ", productNames[i], j);
            scanf("%d", &sales);
            productTotal += sales; // Add to product total
            totalSales += sales;   // Add to overall total
        }
        printf("Total sales for %s: £%d\n", productNames[i], productTotal);
    }

    // Print overall total sales
    printf("Total sales for all products: £%d\n", totalSales);

    return 0;
}

