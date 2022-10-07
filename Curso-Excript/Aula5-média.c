#include<stdio.h>
#include<stdlib.h>


int main(){

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\t\t\t\tMedia escolha 1.0\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite sua quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media escolar foi de: %f ", media);

    if (media >= 5){

        printf("Voce foi aprovado!");
    }
    else{

        printf("Voce foi reprovado!");
    }


    return 0;
}