#include<stdio.h>
#include<stdlib.h>


int main(){

    char nome[20];
    int idade; 
    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    printf("Qual a sua idade: ");
    scanf("%i", &idade);

    printf(" Voce se chama %s\n Voce tem %i anos\n", nome, idade);
    return 0;
}
