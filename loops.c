#include<stdio.h>
#include<stdlib.h>



int main(){

    // FOR

    int num;

    for (num = 0; num < 20; num ++)
    {
        printf("My name is Bart \n");
        if (num == 5)
        {
            break;
        }
    }

    // WHILE

    int num1;
    num1 = 0;

    while (num1 < 10){

        printf("ola mundo");
        num1++;
    }

    // DO WHILE

    

    return 0;
}