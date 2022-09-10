#include<stdio.h>
#include<stdlib.h>

/*

        Aula 1, sobre printf e funções
        %d = decimal


*/

int main(void){

    int ret = 0;

    ret = printf("Ola mundo\n");
    printf("%d - %d - %d - %d\n", ret, 10, 0xa, 'A');  
    printf("%x - %x - %x - %x\n", ret, 10, 0xa, 'A');

    return 0;

}