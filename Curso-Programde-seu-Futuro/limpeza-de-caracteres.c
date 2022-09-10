#include <stdio.h>
#include <stdlib.h>

//  Ler dois caracteres


int main(){

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c", &a);

    // Buffer => \n
    scanf("%c");       // <<=== essa linha limpa o buffer

    printf("Digite duas letras: ");
    scanf(" %c", &b);

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    // o espaço entre os %c é o comando para  computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // fflush(); <- Não use
    return 0;

}