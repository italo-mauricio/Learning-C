#include<stdio.h>
#include<stdlib.h>


int main(){

    char sexo;
    int idade;
    float peso, altura;


    printf("Digite sexo (M/F), idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);


    printf("sexo: %c\nidade: %d\npeso: %.1f\naltura: %.2f\n", sexo, idade, peso, altura);




    return 0;




}