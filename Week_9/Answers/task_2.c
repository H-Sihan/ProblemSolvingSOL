/*
    Task 2: Generate and print a random number
        
        Create a function generateRandom() that generates a random number 
            between 1 and 100 and prints it.

        Call the function three times inside main() to generate different numbers.
            Hint: Use rand() from <stdlib.h> and srand(time(NULL)) for randomness.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate and print a random number
void generateRandom() {
    srand(time(NULL)); // Seed for randomness
    int randomNum = rand() % 100 + 1; // Random number between 1 and 100
    printf("Generated Random Number: %d\n", randomNum);
}

int main() {
    generateRandom(); // Call function
    generateRandom(); // Call again
    generateRandom(); // Call again
    return 0;
}