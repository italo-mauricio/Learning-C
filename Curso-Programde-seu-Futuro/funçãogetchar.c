#include<stdio.h>
#include<stdlib.h>


int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar(); // getchar é uma função que recebe dados do teclado e armazena em uma variável

    // Funciona como o getc, mas como getchar não tem o \n, ele não vai pular a linha

    printf("Lido: %c\n", letra);

    return 0;




}