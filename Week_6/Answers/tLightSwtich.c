/*
    Traffic Light Switch Statement
*/
#include <stdio.h>

int main() {
    char light;

    printf("Enter the traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'Y':
            printf("Ready\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
            break;
    }

    return 0;
}