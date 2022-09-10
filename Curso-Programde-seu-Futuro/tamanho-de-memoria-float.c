#include <stdio.h>
#include <stdlib.h>


// tamando de um float na memória

// float não aceita short nem long

int main (){

    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);




    return 0;
}