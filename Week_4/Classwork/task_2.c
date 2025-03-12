/*
    Create a program that prints out a multiplication table that will be specified by the user:
        Ask user what multiplication table they would like to see.
        They should be able to input a number via the keyboard.
        The system should then output the appropriate times table (from 1X to 10X).
        For example, if the user entered 3 then the system should display the following: ​
        1 x 3 = 3 ​

        2 x 3 = 6 ​

        3 x 3 = 9 ​

        4 x 3 = 12 ​

        ….​

        10 x 3 = 30
*/

#include <stdio.h>

int main(){
    int num;

    printf("Type a number to multiple: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, num, i * num);
    }

    return 0;
}


