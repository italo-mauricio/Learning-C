#include <stdio.h>
#include <stdlib.h>


// tamanho de tipo double

// %lf

int main (){

    float x = 3.1415; // Precisão simples

    double y = 3.141523232452323  ;  // Precisão muito maior
 
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);




    return 0;
}