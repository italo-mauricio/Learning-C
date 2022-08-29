#include <stdlib.h>
#include <stdio.h>

/*

     utilzando operador short para o tipo int
     intervalo: -32.768 até 32.767
     %hi u %d


*/


int main(){

    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof (x));
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));

    // 4 * 8 = 32 bits


    return 0;

}