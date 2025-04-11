/*
    2. Scenario: Extract Domain from an Email

        You are given an email address like user@gmail.com and 
            want to extract the domain part (i.e., gmail.com).
*/

#include <stdio.h>

int main() {
    char email[] = "user@gmail.com";
    int i = 0;

    // Find the position of '@'
    while (email[i] != '@' && email[i] != '\0') {
        i++;
    }

    if (email[i] == '@') {
        printf("Domain: %s\n", &email[i + 1]);
    } else {
        printf("Invalid email.\n");
    }

    return 0;
}
