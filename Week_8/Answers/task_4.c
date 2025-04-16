/*
    Task 4: Swap Contents of Two Strings
        - Create two strings of the same length (e.g., "Sun" and "Sky").
        - Swap their contents character by character using a loop.
        - Display both strings before and after swapping.
*/

#include <stdio.h>

int main() {
    char str1[] = "Sun";
    char str2[] = "Sky";
    //int len = sizeof(str1) - 1;  // Exclude null terminator

    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);

    // Check if lengths are equal
    if (strlen(str1) == strlen(str2)) {
        for (int i = 0; i < strlen(str1); i++) {
            // Swap character by character
            char temp = str1[i];
            str1[i] = str2[i];
            str2[i] = temp;
        }
    }

    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
