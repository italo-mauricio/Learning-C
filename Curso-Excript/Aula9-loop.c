#include <stdio.h>
#include <stdlib.h>




int main(){

    int i = 0;
    int valor = 0;

    printf("Informe a quant de x que vc deseja repetir na instrucao: \n");
    scanf("%i", &valor);

    while(i < valor){

        printf("%i\n", i * 10);
        i += 1;
    }




    return 0;
}