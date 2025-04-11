/*
    4. Scenario: Validate Password Length and Numbers

        You need to check if a password:
            Is at least 8 characters long
            Contains at least one digit
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasDigit = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    if (strlen(password) - 1 >= 8) { // -1 to ignore '\n'
        for (int i = 0; password[i] != '\0'; i++) {
            if (isdigit(password[i])) {
                hasDigit = 1;
                break;
            }
        }

        if (hasDigit) {
            printf("Password is valid.\n");
        } else {
            printf("Password must contain at least one digit.\n");
        }
    } else {
        printf("Password must be at least 8 characters long.\n");
    }

    return 0;
}
