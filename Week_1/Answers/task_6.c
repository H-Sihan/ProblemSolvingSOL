#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    // Input birth year and current year
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    
    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    // Calculate age
    age = currentYear - birthYear;

    // Output the result
    printf("You were born in %d, it's now %d - That means you will turn %d this year!\n", birthYear, currentYear, age);
}