/*
Print three asterisks on one line.

* * *

Challenge: Your printf() statement should only print out a single asterisk. ​Use loop to achieve the final result.

Use nested while loop to achieve the final result.
*/

#include <stdio.h>

int main() {
    int i = 0;
    while (i < 3) { // Loop to print three asterisks
        printf("* ");
        i++;
    }
    printf("\n"); // Move to the next line
    return 0;
}

/*
Code version 40-49  -> No explanation
Code version 50-59 -> Couple of sentences max.
Code version 60-69 -> Paragraph 
Code version 70+ -> Couple of paragraphs/detailed discussion of the topic (often their research)
*/
