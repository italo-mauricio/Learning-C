#include <stdio.h>
#include <stdlib.h>

//  Ler dois caracteres


int main(){

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    // o espaço entre os %c é o comando para  computador desconsiderar o ENTER, o TAB e o ESPAÇO
    // fflush(); <- Não use
    return 0;

}