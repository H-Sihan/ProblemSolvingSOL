/*
    Task 5: Calculate power without using pow()
        • Implement int power(int base, int exp), using a 
            loop to calculate base^exp.
        • Call it in main() with at least three test cases.
*/

#include <stdio.h>

// Function to calculate power using a loop
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Test cases
    int base1 = 2, exp1 = 3;
    int base2 = 5, exp2 = 4;
    int base3 = 7, exp3 = 2;

    printf("%d^%d = %d\n", base1, exp1, power(base1, exp1));
    printf("%d^%d = %d\n", base2, exp2, power(base2, exp2));
    printf("%d^%d = %d\n", base3, exp3, power(base3, exp3));

    return 0;
}
