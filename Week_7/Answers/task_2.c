/*
    // Task 2: Modify an Array Element
        -Extend Task 1 by allowing the user to modify an element in the array.
        -The program should:​
            . Ask the user for an index (0-5).​
            . Ask the user for a new value.​
            . Update the array and display the updated contents.
*/

#include <stdio.h>

int main() {
    int values[] = {10, 20, 30, 40, 50, 60};
    int index, newValue;

    for(int i = 0; i < 6; i++) {
        printf("Value %d: %d\n", i, values[i]);
    }

    printf("Enter index (0-5) to modify: ");
    scanf("%d", &index);
    printf("Enter new value: ");
    scanf("%d", &newValue);

    values[index] = newValue;

    printf("Updated array:\n");
    for(int i = 0; i < 6; i++) {
        printf("Value %d: %d\n", i, values[i]);
    }

    return 0;
}
