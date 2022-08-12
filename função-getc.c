#include<stdio.h>
#include<stdlib.h>


int main(){

    char letra; // Aqui é uma variável do tipo caracter
    printf("digite um caracter: ");
    letra = getc(stdin); // getc é uma função que recebe dados do teclado e armazena em uma variável


    printf("Lido: %c\n", letra); // Após letra receber getc, vc pode lê-lo com o printf.

    return 0;



}