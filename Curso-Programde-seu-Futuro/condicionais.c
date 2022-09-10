#include<stdio.h>
#include<stdlib.h>


int main(){

    /*
        > maior que
        < menor que
        >= maior ou igual
        <= menor ou igual
        != não igual ou diferente
        == igual
        = atribuição

    */





    int a, b;

    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);


    if (a > b){

        printf("%d e maior que %d", a, b);
    }

    else if(a == b){
        // Aqui é praticamente a mesma coisa que o Python, o Else if, seria o Elif no python
        printf("%d eh igual a %d ", a, b);
    }
    else{
        printf("%d eh menor %d", a, b);
    }
    return 0;

}