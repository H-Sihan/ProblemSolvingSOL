/*
    Task 4: Swap Contents of Two Strings
        - Create two strings of the same length (e.g., "Sun" and "Sky").
        - Swap their contents character by character using a loop.
        - Display both strings before and after swapping.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Sun";
    char str2[] = "Sky";
    char temp[10];  // Temporary array for swapping
    
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);
    
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
