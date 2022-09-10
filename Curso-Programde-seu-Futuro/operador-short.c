#include <stdlib.h>
#include <stdio.h>

/*

     utilzando operador short para o tipo int
     intervalo: -32.768 até 32.767
     %hi ou %d

    short é utilizado para economizar memoria


    O short só pode ser utilizado neste intervalo de numeros, caso voce queira usar um intervalo maior
    ou menor tera que utilzar um int normal sem os short.
    
*/


int main(){

    int y = 0;
    short int x = 32767;

    printf("Valor de x: %hi\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    // 4 * 8 = 32 bits


    return 0;

}

