#include <stdio.h>
#include <stdlib.h>


int main(){

    int i;

    printf("Digite um numero: ");
    scanf("%d", &i);

    if (i >= 5 && i <= 10){

        printf("Entre 5 e 10");
    }else{

        printf("Abaixo de 5 ou maior de 10");
    }


    return 0;
}