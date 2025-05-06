#include <stdio.h>

void convertTemperature(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    //return fahrenheit;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    //float a = convertTemperature(celsius); 
    convertTemperature(celsius); 
    return 0;
}
