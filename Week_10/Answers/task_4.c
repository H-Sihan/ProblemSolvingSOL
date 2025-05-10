/*
    Task 4: Counting even and odd numbers in an array
    
        • Write a function void countEvenOdd(int arr[], int size, 
            int *evenCount, int *oddCount).
        • Use parameters to store and return the count of 
            even and odd numbers.
*/

#include <stdio.h>

// Function to count even and odd numbers in an array
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount, oddCount;

    // Function call
    countEvenOdd(arr, size, &evenCount, &oddCount);

    // Output results
    printf("Number of Even Numbers: %d\n", evenCount);
    printf("Number of Odd Numbers: %d\n", oddCount);

    return 0;
}
