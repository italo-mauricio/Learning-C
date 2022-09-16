#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// Aul 3, variáveis do tipo int



int main(){

    int i = INT_MAX;

    i++; // i = i + 1 ou i += 1

    printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i *8);
    printf("Valor de i: %d\n", i);





    return 0;
}

