#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])

{

    int opcao;
    int valor; 

    printf("Conversor de bases numericas\n");
    printf("1 = Decimal para Hexadecimal\n");
    printf("2 = Hexadecimal para Decimal\n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1);
    {
        printf("Informe o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em Hexadecimal eh: %x", valor, valor);
    }




    return 0;
}