#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // biblioteca dedicada a manipulação de caracteres


int main(){

    char c;

    printf("Digite um caracter em letra minuscula: ");
    scanf("%c", &c);

    if (c == tolower(c)){

        printf("\nvc digitou em minuscula!\n");
        
    }else
    {

        printf("Você digitou em letra maiuscula");
    }


    return 0;
}