/* 
Task 2
Write a program that calculates the grade based on a score. The program:
    Scores ranges and corresponding grades:​
    90-100: A​
    80-89: B​
    70-79: C​
    60-69: D​
    Below 60: F ​
Uses a switch statement to determine the grade based on the tens digit of the score
    
    Grade Calculator
*/
 
#include <stdio.h>

int main() {
    int score;

    // Prompt the user for the score
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Validate score input
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1; // Exit the program
    }

    // Use the tens digit of the score for the switch statement
    switch (score / 10) {
        case 10: // For scores 100
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default: // For scores below 60
            printf("Grade: F\n");
    }

    return 0;
}