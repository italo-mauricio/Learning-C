
#include <stdio.h>
#include <stdlib.h>

int main()

{

    //scanf("tipo_de entrada", variável_que_receberá);
    //scanf("%tipo1%tipo2", &var1, &var2);
 
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%i", &num1); // Scanf é uma função que recebe dados do teclado e armazena em uma variável

    // %i, %d, %f, %c, %s são formatos de entrada e saída
    // Para usar um "input" que vimos no Python, você deverá usar o printf e logo abaixo o scanf.

    printf("%i\n", num1); 


    char nome [40] = "Italo Mauricio";  // Aqui é uma string, ou seja, um array de caracteres.
    int idade = 24; // Aqui é um inteiro.
    char sexo = 'M'; // Aqui é uma caracter
    float altura = 1.79; // Aqui é um float

    printf(" Nome: %s \n idade: %i \n sexo: %c \n altura: %.2f\n", nome, idade, sexo, altura);
   
  
       
    int laranjaitalo, laranjavini, resultado;
    laranjaitalo = 5;
    laranjavini = 6;

    resultado = laranjaitalo / laranjavini;
    

    printf("O resultado foi: %i", resultado);


    return 0;


}