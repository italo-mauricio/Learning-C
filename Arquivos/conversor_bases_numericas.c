#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])

{

    int opcao; // Aqui são criadas duas variáveis do tipo inteiro.
    int valor; // Vriável valor vai armazenar os valores que o usuário deseja conveter.

    printf("Conversor de bases numericas\n");
    printf("1 = Decimal para Hexadecimal\n");
    printf("2 = Hexadecimal para Decimal\n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1)
    {
        printf("Informe o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em Hexadecimal eh: %x", valor, valor);
    }
    else if(opcao == 2)
    {
        printf("\nInforme o valor em Hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal eh: %d", valor, valor);

    }
    else printf("\nValor invalido");



    return 0;
}