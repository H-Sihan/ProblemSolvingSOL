/*
    Task 1: Create a function to calculate simple interest using parameters.
    
        • Formula: Simple Interest= (Principal×Rate×Time)/ 100
        • Define a function float calculateInterest(float principal, 
            float rate, float time).
        • The function should return the calculated interest.
        • In main(), call this function with different values and print 
            the result.
*/

#include <stdio.h>

// Function to calculate simple interest
float calculateInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal1 = 1000, rate1 = 5, time1 = 2;
    float principal2 = 1500, rate2 = 4.5, time2 = 3;

    printf("Simple Interest 1: %.2f\n", calculateInterest(principal1, rate1, time1));
    printf("Simple Interest 2: %.2f\n", calculateInterest(principal2, rate2, time2));

    return 0;
}