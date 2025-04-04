/*
    Task 1: Initialize and Print an Integer Array​
        -Create a program that initializes an integer array named values with six values of your choice.​
        -Use a loop to print out the contents of the array.​
*/

#include <stdio.h>

int main() {
    int values[] = {10, 20, 30, 40, 50, 60};
    
    for(int i = 0; i < 6; i++) {
        printf("Value %d: %d\n", i, values[i]);
    }

    return 0;
}