/*
    Task 6: Parallel Arrays
        Create a program that:​
            -Initializes an empty char array named experiments to store five experiment IDs.​
            -Initializes an empty float array named results to store the corresponding experiment results.
            -Uses a loop to ask the user for experiment IDs and results and stores them in the respective arrays. 
                Format should be:​
                . The result of experiment A is 3.4 ​
                . The result of experiment B is 7.2​
                . The result of experiment C is 6.3
*/

#include <stdio.h>

int main() {
    char experiments[5];  // Array to store experiment letters
    float results[5];     // Array to store corresponding results

    // Getting user input for experiment IDs and results
    printf("Enter details for 5 experiments:\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter experiment ID (single letter): ");
        scanf(" %c", &experiments[i]);  // Space before %c to consume newline
        printf("Enter result for experiment %c: ", experiments[i]);
        scanf("%f", &results[i]);
    }

    // Displaying the stored results
    printf("\nExperiment Results:\n");
    for(int i = 0; i < 5; i++) {
        printf("The result of experiment %c is %.2f\n", experiments[i], results[i]);
    }

    return 0;
}