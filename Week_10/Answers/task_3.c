/*
    Task 3: Sum of array elements
        • Define a function int sumArray(int arr[], int size) that 
            calculates and returns the sum of the elements.
        • In main(), create an array and call the function, 
            then print the result.
*/

#include <stdio.h>

// Function to calculate the sum of an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Sum of array 1: %d\n", sumArray(arr1, size1));
    printf("Sum of array 2: %d\n", sumArray(arr2, size2));

    return 0;
}
