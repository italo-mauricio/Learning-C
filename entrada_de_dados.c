#include <stdio.h>
#include <stdlib.h>

int main()

{




    //scanf("tipo_de entrada", variável_que_receberá);
    //scanf("%tipo1%tipo2", &var1, &var2);
 
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("%i\n", num1); 


    char nome [40] = "Italo Mauricio";
    int idade = 24;
    char sexo = 'M';
    float altura = 1.79;

    printf(" Nome: %s \n idade: %i \n sexo: %c \n altura: %.2f\n", nome, idade, sexo, altura);
   
  
       
    int laranjaitalo, laranjavini, resultado;
    laranjaitalo = 5;
    laranjavini = 6;

    resultado = laranjaitalo / laranjavini;
    

    printf("O resultado foi: %i", resultado);


    return 0;


}