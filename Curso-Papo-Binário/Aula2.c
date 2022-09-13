#include<stdio.h>
#include<stdlib.h>

/*

    Aula 2 - Variávesi booleanas e do tipo char



*/


int main(void){
    signed char c1;
    signed char c2;
    signed char c3;
    float f = 13.4;

    printf("O tamanho de C eh: %lu\n", sizeof c1);       // sizeof retorna o tamanho da variável retornando um número.
    printf("O tamanho de F eh: %f\n", sizeof f);
    printf("O tamanho de C eh: %lu bytes / %lu bits\n", sizeof c1, sizeof c1 *8);

    c1 = 10;
    c2 = 0xa;
    c3 = '\n';
    printf("Valor de c: %d\n", c1);
    printf("Valor de c: %d\n", c2);
    printf("Valor de C: %d\n", c3);




    return 0;

}

// sizeof não é uma função, é um operador