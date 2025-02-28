/*
    7. Repeat task 3, but this time it should also alert the user to other days of the year:
        o April Fools Day
        o New Years Day
        o Your birthday
        o Star Wars Day (May the 4th be with you)
        o Any other days you wish to add
*/

#include <stdio.h>

int main(){
    int day, month;
    //int myAge = 25;
    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    if (day == 1 && month == 4){
        printf("It is April fools day");
    }

    return 0;
}