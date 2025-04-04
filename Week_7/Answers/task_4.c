/*
    // Task 4: Calculate Average
        -Modify Task 3 so that it calculates and prints the average temperature instead of the total.
*/

#include <stdio.h>

int main() {
    double temperatures[] = {23.5, 24.1, 22.8, 21.9, 25.2, 23.7, 24.5};
    double sum = 0;
    int count = 7;

    for(int i = 0; i < count; i++) {
        sum += temperatures[i];
    }

    double average = sum / count;
    printf("Average temperature: %.2f\n", average);
    return 0;
}
