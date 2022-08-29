#include <stdlib.h>
#include <stdio.h>

// Descobrindo o tamanho de memória de cada tipo
// Sizeof x ou sizeof (int)


int main(){

    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof (x));
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

    // 4 * 8 = 32 bits


    return 0;

}