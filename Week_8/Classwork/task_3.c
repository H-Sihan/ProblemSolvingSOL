/*
    Task 3: Print a String Without the Null Terminator
        - Initialise a string (e.g., "Coding") and print each character one by one, 
            excluding the '\0'     terminator.
*/

#include <stdio.h>

int main () {
    char str[] = "Coding";
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    print("\n");
    return 0;
}