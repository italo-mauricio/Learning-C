#include <stdio.h>
#include <stdlib.h>


int main(){

    /*
    int valor = 27;

    int *ptr ;

    ptr = &valor;


    printf("utilizando ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereco da variavel valor: %x\n", &valor);
    printf("Conteudo da variavel ponteiro ptr: %x", ptr);


    return 0;

    */

   int x, *ponteiro, **ponteirode;
   printf("\nValor de x = %d\n", x);
   printf("Endereco de x: %x\n\n", &x);
   x = 0;
   ponteiro = &x;
   ponteirode = &ponteiro;


   printf("\nValor de x = %d", x);
   printf("\nEndereco apontando por ponteiro: %d", ponteiro);
   printf("\nValor da variavel x que esta sendo apotando por ponteiro: %d\n", *ponteiro);
   printf("\nEndereco de memoria da variavel ponteiro %x\n", &ponteiro);

   system("Pause");



   return 0;




}