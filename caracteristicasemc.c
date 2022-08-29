#include<stdio.h>
#include<stdlib.h>


int main(){

    char sexo;
    int idade;
    float peso, altura;


    printf("Digite sua idade, peso e altura eo sexo (M/F):\n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    // buffer do teclado => 45\n56.2\n1.6\nM\n    

    printf("idade: %d\npeso: %.1f\naltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);




    return 0;




}