/*
Task 3
Write a program that simulates a traffic light. The program:
    Takes an input (1, 2, or 3) where:​
        1 = Red​
        2 = Yellow​
        3 = Green​

    Print the corresponding traffic light message:​
        Red = "Stop“ ​
        Yellow = "Get Ready“​
        Green = "Go“
        
        Traffic Light Detector ​
*/
#include <stdio.h>

int main() {
    int light;

    printf("Enter the traffic light number (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &light);

    /*if(light!=0){
        printf("Invalid number");
        return 1;
    }*/

    switch (light) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Get Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Invalid Case input.\n");
    }

    return 0;
}