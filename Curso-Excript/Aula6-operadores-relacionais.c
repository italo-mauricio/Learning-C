#include<stdio.h>
#include<stdlib.h>


int main(){

    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 0;

    printf("Digite a idade de uma pessoa: ");
    scanf("%i", &idade);

    if (idade <= iJ){

        printf("Idade de uma pessoa jovem!\n");

    }else{
        if (idade >=  iI){

                printf("Idade informada eh de uma pessoa idosa\n");

        }else{
            if ((idade > iJ) || (idade < iI)){

                printf("Idade informada eh de uma pessoa de meia idade \n");

            }

        }


    }


    return 0;  
}