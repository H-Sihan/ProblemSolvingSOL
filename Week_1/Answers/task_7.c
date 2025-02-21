#include <stdio.h>

int main() {
    float height;

    // Prompt user for input
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Output the result
    printf("You are %.2f meters tall\n", height);
}