/*
Now modify the previous program in a way where the user can enter the number of 
rows and columns to design the pattern. ​

For example: If the user entered 5 rows and then 3 columns then the system 
should print out a 
rectangle that is 3 asterisks wide and 5 asterisks high.

Use nested while loop to achieve the final result.​
*/

#include <stdio.h>

int main () {
    int row, col;

    printf("Enter the rows: ");
    scanf("%d", &row);

    printf("Enter the col: ");
    scanf("%d", &col);

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    /*int count = 0;
    while (count < row)
    {
        int counts = 0;
       while (counts < col)
       {
        printf("* ");
        counts+=1;
       }
       printf("\n");
       count += 1;
    }*/
    return 0;
}