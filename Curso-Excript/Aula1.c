// criando uma calculadora em C
#include <stdio.h>
#include <stdlib.h>



int main(){

    int num1, num2, soma, sub, multi, divi ;
    printf("Por favor digite dois numeros: ");
    scanf("%i%i", &num1, &num2);

    soma = num1 +  num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("A soma eh: \n", soma);
    printf("A subtracao eh: \n", sub);
    printf("A multiplicacao eh: \n", multi);
    printf("A divisao eh: \n", divi);


    return 0;

}


