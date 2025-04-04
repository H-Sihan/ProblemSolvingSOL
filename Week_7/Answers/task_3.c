/*
    // Task 3: Sum of Array Elements
        -Create a program that initializes a double array called temperatures with seven values.​
        -Use a loop to calculate the total sum of all values.
        -Display the total sum.​
*/

#include <stdio.h>

int main() {
    double temperatures[] = {23.5, 24.1, 22.8, 21.9, 25.2, 23.7, 24.5};
    double sum = 0;

    for(int i = 0; i < 7; i++) {
        sum += temperatures[i];
    }

    printf("Total sum: %.2f\n", sum);
    return 0;
}
