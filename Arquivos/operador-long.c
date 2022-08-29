#include <stdlib.h>
#include <stdio.h>

/*

    Operador long para o tipo int
    %li  /  %ld
    operador long long para o tipo int
    %lli  /  %lld
    
    
*/


int main(){

    long long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n", sizeof x);

    printf("Valor de x: %lld\n", x);
    x++;
    printf("Valor de x: %lld\n", x);

    // 4 * 8 = 32 bits


    return 0;

}

