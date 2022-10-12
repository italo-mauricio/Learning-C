#include <stdio.h>
#include <stdlib.h>


int main(){

    int i = 1;

    printf("%i\n", i);
    printf("%i\n", ++i);
    i++;
    printf("%i\n", i);

    system("cls");
    int i2 = 5;
    printf("%i", i2);
    printf("%i",  -- i2);
    printf("%i", i2--);

    return 0;
}

/*

    -> 1) Incremento
    -> 2) Decremento

    Pre -> O valor será incrementado/decrementado na instrução que a variável estiver contida

    Pos -> O valor será incrementado/decrementado na próxima instrução




*/