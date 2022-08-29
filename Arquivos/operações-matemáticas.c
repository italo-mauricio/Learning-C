#include <stdio.h>
#include <stdlib.h>

// ============= Projetos em C =============== //
// ======== Operadores matemáticos =========== //

int main()

{
    int num, num2;
    num =  1;
    num2 = 20;

    int soma = num + num2;

    printf("O resultado da soma e: %i\n", soma);

    int sub = num2 - num;
    
    printf("O resultado da subtracaoo e: %i\n", sub);

    int multi = num * num2;
    
    printf("O resultado da multiplicacao e: %i\n", multi);

    int div = num2 / 3;

    printf("O resultado da divisao e: %i", div);
    
    return 0;    


}