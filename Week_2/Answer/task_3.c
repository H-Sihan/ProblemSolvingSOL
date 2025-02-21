/*
    Write code that:
        o Reads in two integer values from the keyboard: day and month
        o Checks to see if day is 1 and month is 4. If they are, display "It is April fools day" on the screen.
*/

#include <stdio.h>

int main() {
    int day, month;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);

    if (day == 1 && month == 4) {
        printf("It is April Fools' Day!\n");
    }

    return 0;
}
