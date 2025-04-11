/*
    1. Scenario: Swapping Two Temperatures
        You're reading temperatures from two different sensors and 
            notice they are incorrectly assigned.

        for example:
            sensor1 = 30°C  
            sensor2 = 25°C

*/

#include <stdio.h>

int main() {
    int sensor1 = 30, sensor2 = 25, temp;

    printf("Before Swap: Sensor1 = %d, Sensor2 = %d\n", sensor1, sensor2);

    temp = sensor1;
    sensor1 = sensor2;
    sensor2 = temp;

    printf("After Swap: Sensor1 = %d, Sensor2 = %d\n", sensor1, sensor2);
    return 0;
}


