#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to calculate love percentage
int calculateLovePercentage() {
    srand(time(0));
    return rand() % 101;
}

// Function to display result
void displayResult(char name1[], char name2[], int lovePercentage) {
    printf("\n%s and %s's love compatibility: %d%%\n", name1, name2, lovePercentage);
}

int main() {
    char name1[50], name2[50];
    int lovePercentage;

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    lovePercentage = calculateLovePercentage();
    displayResult(name1, name2, lovePercentage);

    return 0;
}
