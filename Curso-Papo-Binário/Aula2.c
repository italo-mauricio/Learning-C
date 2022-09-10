#include<stdio.h>
#include<stdlib.h>

/*

    Aula 2 - Variávesi booleanas e do tipo char



*/


int main(void){
    char c;
    float f = 13.4;

    printf("O tamanho de C eh: %lu\n", sizeof c);       // sizeof retorna o tamanho da variável retornando um número.
    printf("O tamanho de F eh: %f\n", sizeof f);
    printf("O tamanho de C eh: %lu bytes / %lu bits\n", sizeof c, sizeof c *8);

    c = 255;
    printf("Valor de c: %d\n", c);

    return 0;

}

// sizeof não é uma função, é um operador