#include <stdio.h>
#include <stdlib.h>



int main(){

    /*
    for (parte1; parte2; parte){

        parte1 - é onde nós declaramos e inicializamos a nossa variavel

        parte2 - é a condição 

        parte3 - é onde nós incrementamos a nossa variável





    }
    
   
   for (int i = 0; i<=10; ++i){

    printf("%i\n", i);
   

    }

    return 0;
    */


   for (int a=0, b=10; a <= 10; ++a, --b){


        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);

    }
    printf("\nBUM!");



   return 0;
}