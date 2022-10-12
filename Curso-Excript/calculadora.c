#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>



int main(){

    double num1, num2, resultado;
    char op = '0';

    do
    {
        num1 = num2 = resultado = 0;
        printf(" 1 - Somar\n");
        printf(" 2 - Subtrair\n");
        printf(" 3 - Multiplicar\n");
        printf(" 4 - Dividir\n");

        printf("Informe a operacao: \n");
        op = getchar();

        printf("Digite o primeiro numero:\n\t ");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t ");
        scanf("%f", &num2);

   
      
    } while (op != '0');
    


    return 0;




}