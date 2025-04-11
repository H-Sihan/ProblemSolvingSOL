/*
    Task 5: Reverse a String
        - Write a programme that reverses a string without using built-in functions.
            * First, find the length of the string using a loop.
            * Then, use another loop to print it in reverse order.
            * Example: "Program" → "margorP".
*/

#include <stdio.h>

int main() {
    char str[] = "Program";
    int length = 0;
    
    // Find length of string
    while (str[length] != '\0') {
        length++;
    }
    
    // Print in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
