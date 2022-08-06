#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;

    printf("Escolha um dia da semana: ");
    scanf("%d", &num); 

    switch (num)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("Número invalido");
        break;
    }
    return 0;

   


}