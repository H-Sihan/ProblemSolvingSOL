/*
    3. Scenario: Convert Country Code to Uppercase

        You're reading a lowercase country code like "in" or "us" from a database and 
            want to convert it to uppercase for display: "IN", "US".
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char country[10] = "uk";

    for (int i = 0; country[i] != '\0'; i++) {
        country[i] = toupper(country[i]);
    }

    printf("Uppercase Country Code: %s\n", country);

    return 0;
}
