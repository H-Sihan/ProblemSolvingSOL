/*
    Task 6: Compare Two Strings Character by Character
        - Create a programme that:​

        - Write a programme that compares two strings character by character.
            * Example: Compare "Hello" and "World".

        - If they match, print "SAME", otherwise print "DIFFERENT".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    if (strcmp(str1, str2) == 0) {
        printf("SAME\n");
    } else {
        printf("DIFFERENT\n");
    }
    
    return 0;
}
