/*
    Else-If Statements
    Repeat the previous task, only this time we are going to add an additional check.
    First check if the user is exceeding the speed limit by more than 10mph. 
    If they have then it should inform the user of the speed they were doing, the limit, 
    how much they exceeded the limit by and that they will now face a ticket and a possible court summons.
    If they were speeding but by less than 10mph, then the user should be informed of their speed, 
    the limit and the fact that they will now get a speeding ticket.
    Otherwise, the user should be asked to "Please continue to drive safely"
*/
#include <stdio.h>

//"""adasd"""

int main() {
    int speed = 70;     // Replace with desired value
    int speedLimit = 40; // Replace with desired value

    if (speed > speedLimit + 10) {
        printf("Your speed is %d, the speed limit is %d. You exceeded the limit by %d."
        "Ticket and possible court summons!\n", speed, speedLimit, speed - speedLimit);
    } else if(speed > speedLimit){
        printf("Your speed is %d, the speed limit is %d. You’re getting a speeding ticket.\n", speed, speedLimit);
    } else {
        printf("Please continue to drive safely.\n");
    }

    return 0;
}