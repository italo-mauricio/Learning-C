#include<stdio.h>
#include<stdlib.h>


int main(){

    int tabuada = 0;

    printf("\nDigite a tabuada que vc deseja \n\t\t\t>>>");
    scanf("%i", &tabuada);

    for (int x = 1; x <= 10; ++x){



        printf("%i x %i = %i\n", x, tabuada, x * tabuada);
    }




    return 0;
}