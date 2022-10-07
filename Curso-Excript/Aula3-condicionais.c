#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // biblioteca dedicada a manipulação de caracteres


int main(){

    char c;
    int i;
    

    printf("Digite um caracter em letra minuscula: ");
    scanf("%c", &c);


    if (c == tolower(c)){

        printf("\nvc digitou em minuscula!\n");
        
    }else
    {

        printf("\nVocê digitou em letra maiuscula\n");
    }


    printf("Digite um numero: ");
    scanf("%d", &i);

    if (i >= 0 ){

        printf("voce digitou um numero!\n");
    }
    
    return 0;
}