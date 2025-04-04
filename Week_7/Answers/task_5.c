/*
    Task 5: User Input for an Array​
        -Modify Task 4 so that the array is no longer pre-populated.​
        -Instead, the user should enter five values, which will be stored in an array.​
        -The program should then calculate and display the average of the values.
*/

#include <stdio.h>

int main() {
    float results[5];  // Array to store user-entered values
    float sum = 0;
    int count = 5;

    // Get user input
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < count; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &results[i]);
        sum += results[i];  // Add value to sum
    }

    // Calculate average
    float average = sum / count;
    printf("The average of the entered values is: %.2f\n", average);

    return 0;
}