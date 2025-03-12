/*
    Create a program that performs the following actions. You should use a 
    while loop to achieve this. ​

        Make the program count from 1 – 20 (this should be output to the console screen) ​
        Make the program count from 5 – 15 ​
        Make the program count from 1 – 21 in steps of 2 ​
        Make the program count down from 10 – 1 in steps of 1 ​
*/

#include <stdio.h>

int main(){
    int i;

    //count from 1 – 20
    i = 1;
    printf("Counting from 1 - 20:\n");

    while (i <= 20){
        printf("%d ", i);
        i++;
    }

    //count from 5 – 15
    i = 5;
    printf("Counting from 5 - 15:\n");

    while (i <= 15){
        printf("%d ", i);
        i++;
    }

    //count from 1 – 21 in steps of 2 ​
    i = 1;
    printf("Counting from 1 - 21:\n");

    while (i <= 21){
        printf("%d ", i);
        i+=2;
    }
    printf("\n\n");

    //count down from 10 – 1 in steps of 1 
    i = 10;
    printf("Counting down from 10 - 1:\n");

    while (i >= 1){
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
    
}