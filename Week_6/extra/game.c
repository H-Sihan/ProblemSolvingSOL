/*
    A game to guess user's number 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Generate a number between 1 and 100

    printf("\x1b[31m🎮 Welcome to the Number Guessing Game! 🎮\n\x1b[31m");
    printf("\x1b[38;5;10mI have chosen a number between 1 and 100. Try to guess it!\n\x1b[38;5;10m");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("\x1b[38;5;167m	Too high! Try again.\n\x1b[38;5;167m");
        } else if (guess < secretNumber) {
            printf("\x1b[38;5;97mToo low! Try again.\n\x1b[38;5;97m");
        } else {
            printf("\x1b[31m🎉 Congratulations! You guessed the number in %d attempts.\n\x1b[31m", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
