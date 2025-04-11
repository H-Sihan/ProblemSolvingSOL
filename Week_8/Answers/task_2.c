/*
    Task 2: Swap Two Character Values
        - Modify Task 1 to swap two char variables instead of integers 
            (e.g., char1 = 'X', char2 = 'Y’).
        - Ensure the output shows both values before and after swapping.
*/

#include <stdio.h>

int main() {
    char char1 = 'X', char2 = 'Y', temp;
    
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    
    temp = char1;
    char1 = char2;
    char2 = temp;
    
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);
    return 0;
}
