#include<stdio.h>
#include<stdlib.h>

/*

        Aula 1, sobre printf e funções
        %d = decimal


*/

int main(void){

    int ret = 0;

    ret = printf("Ola mundo\n");
    printf("retorno da printf anterior %d\n", ret);  // verificando o retorno da variável ret

    return 0;

}