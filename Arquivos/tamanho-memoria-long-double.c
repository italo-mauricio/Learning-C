#include <stdio.h>
#include <stdlib.h>


// operador long para o tipo double
// double -> %lf
// long double -> lf
// mingw printf();

// %lf

int main (){

    float x = 3.1415; // Precisão simples

    long double y = 3.14155896587458962548;  // Precisão muito maior
 
    printf("Valor de y: %.10lf\n", y);
    __mingw_printf("Valor de y: %.10lf\n", y); // Serve para declarar um número em long double no windows
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y);

    // por padrão float e double imprimem 6 digitos

    // 8*8 = 64 bits de mem´ria
    return 0;
}