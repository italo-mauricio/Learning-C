#include<stdio.h>
#include<stdlib.h>


/*

        usando operadores matemáticos em C

        soma = +
        subtração = -
        multiplicação = *
        divisão = /

        Conversão de tipos
        Se eu converter um float para um inteiro eu perco a parte decimal (Warning)
        exemplo:
            float pi = 3.1415;
            a = (int)pi;

            printf("Valor de a: %d\n", a);

            resultado: 3


*/

int main(){


    int a = 10, b = 20;

    printf("\nsoma: %d\n", a + b);
    printf("\nSubtracao: %d\n", a - b);
    printf("\nMultiplicacao: %d\n", a * b);
    printf("\nDivisao: %f\n", (float)a / b);


    return 0;

}


