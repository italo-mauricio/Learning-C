#include<stdio.h>
#include<stdlib.h>



int main(){

    int resultado, contador = 10;

    // contador--;
    // contador -= 1;   São 3 formas de fazer a mesma coisa
    // contador = contador - 1;

    // printf("Valor: %d\n", contador++);  // Precisa ser colocado a esquerda da variável
    resultado = --contador; // para se tornar 11 o decremento precisa ficar a esquerda e não a direita
    printf("Valor: %d\n", resultado);


    return 0;


}