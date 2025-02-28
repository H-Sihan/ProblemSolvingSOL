/*
    5. Create two variables: 
    speed and speedLimit. Assign them values of your choosing. 
    Now create an if statement that tests whether or not the user is speeding.
    If they are speeding, output: "Your speed is [show speed here], 
    the speed limit is [limit here]. You’re Speeding! Ticket for you!" 
    If they are not speeding, output: "Please continue to drive safely"
*/

#include <stdio.h>

int main() {
    int speed = 45;     // Replace with desired value
    int speedLimit = 40; // Replace with desired value

    if (speed > speedLimit) {
        printf("Your speed is %d, the speed limit is %d. You’re speeding! Ticket for you!\n", speed, speedLimit);
    } else {
        printf("Please continue to drive safely.\n");
    }

    return 0;
}