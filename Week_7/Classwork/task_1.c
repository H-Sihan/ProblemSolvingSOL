/*
    Task 1: Initialize and Print an Integer Array​
        -Create a program that initializes an integer array named 
                values with six values of your choice.​
        -Use a loop to print out the contents of the array.​
*/

#include <stdio.h>
#include <unistd.h>

int main(){
    int num [] = {1,2,3,4,5,6};

    for (int i = 0; i < 6; i++)
    {
        printf("Values %d \n",num[i]);
        usleep(500000);
    }

    return 0;
}

//5 --- 1 -- 0
//2 --- 0 --1