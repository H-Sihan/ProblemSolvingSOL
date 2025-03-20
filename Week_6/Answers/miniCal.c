/*
    Summation of Numbers
*/
#include <stdio.h>

int main() {
    int n, number, sum = 0;

    printf("How many numbers do you want to sum? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;  // Add the entered number to the sum
    }

    printf("The total sum is: %d\n", sum);
    return 0;
}
