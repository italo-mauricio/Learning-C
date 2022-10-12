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

    int x = 0;
    x = x + 1; // incrementar quantas unidades desejamos
    x += 1; // incrementar quantas unidades desejamos

    ++x; // só podemos incrementar uma única unidade

    printf("%i", x);

    return 0;
}

/*

    -> 1) Incremento
    -> 2) Decremento

    Pre -> O valor será incrementado/decrementado na instrução que a variável estiver contida

    Pos -> O valor será incrementado/decrementado na próxima instrução

*/

  