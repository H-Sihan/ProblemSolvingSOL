/*
    Task 7: Convert Temperature (Celsius to Fahrenheit)

        The Celsius scale (originally called centigrade) is used in most 
        countries and for scientific purposes worldwide, 
        while the Fahrenheit scale is used in the United States, 
        some island territories,  Liberia and Myanmar. 

        Define a function convertTemperature() that:

            Asks the user for a temperature in Celsius.
                Converts it to Fahrenheit using the formula:
                Fahrenheit = (Celsius × 9/5) + 32
                Prints the converted temperature.
*/
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
void convertTemperature() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}

int main() {
    convertTemperature(); // Call function
    return 0;
}