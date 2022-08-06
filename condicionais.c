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
        printf("%d eh maior que %d", a, b);
    }
    if (b > a){
        printf("%d eh maior que %d", b, a);
    }
    if (a == b){

        printf("%d e igual a %d", a, b);
    }

    return 0;

}