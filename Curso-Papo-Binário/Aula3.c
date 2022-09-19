#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

// Aul 3, variáveis do tipo int

// comando cat verifica o código todo

int main(){

    // uint32_t i = USHRT_MAX;     // usando uint32_t eu garanto que aquela variável terá 32 bits
    // uint8_t i = UCHAR_MAX;
    short int i;
    // i += 2; // i = i + 1 ou i += 1  é a mesma coisa

    printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i *8);
    printf("Valor de i: %u\n", i);
    printf("Valor de i: %x\n", i);
    printf("Valor de i: %o\n", i);
    




    return 0;
}

