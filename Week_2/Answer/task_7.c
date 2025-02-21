/*
    7. Repeat task 3, but this time it should also alert the user to other days of the year:
        o April Fools Day
        o New Years Day
        o Your birthday
        o Star Wars Day (May the 4th be with you)
        o Any other days you wish to add
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
    } else if (day == 1 && month == 1) {
        printf("Happy New Year's Day!\n");
    } else if (day == 4 && month == 5) {
        printf("It's Star Wars Day (May the 4th be with you)!\n");
    } else if (day == 25 && month == 12) {
        printf("Merry Christmas!\n");
    } else {
        printf("It's just a regular day.\n");
    }

    return 0;
}
