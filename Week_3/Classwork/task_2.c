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

int main(){
    int score;

    printf("Input your score: ");
    scanf("%d", &score);

    if (score <= 0 || score > 100){
            printf("Score should be (0,100)");
            return 1;
        }

    switch (score / 10)
    {
    case 10: // score 100
    case 9:
        /* code */
        printf("A");
        break;
    case 8:
        /* code */
        printf("B");
        break;
    case 7:
        /* code */
        printf("C");
        break;
    case 6:
        /* code */
        printf("D");
        break;
    default:
        break;
    }

    return 0;
}