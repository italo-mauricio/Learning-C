// criando uma calculadora em C
#include <stdio.h>
#include <stdlib.h>


char telaprincipal(void);
int calculadora(void);

int main(void){

    char op;
    do{
        op = telaprincipal();
        switch(op){

            case '1':
                calculadora();
                break;
          
            default:
                printf("Opcao invalida!");
                break;
 


        }

    } while (op != '0');




    return op;



}




int calculadora(void){

    char esc;
    int num1, num2, soma, sub, multi, divi ;
    printf("Por favor digite um numero: ");
    scanf("%d", &num1);
    printf("Por favor digite outro numero: ");
    scanf("%d", &num2);


    soma = num1 +  num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("A soma eh: %d\n", soma);
    printf("A subtracao eh: %d\n", sub);
    printf("A multiplicacao eh: %d\n", multi);
    printf("A divisao eh: %d\n", divi);

    printf("Press START for continue...");
    scanf("%c", &esc);
    getchar();


    return esc;

}



char telaprincipal(void){

    
    char op;
    system("clear");
    printf(" ==================== Menu ===================== | \n");
    printf(" ----------------------------------------------- | \n");
    printf("                                                 | \n");
    printf("                1 - Calculadora                  | \n");
    printf("                0 - Return                       | \n");
    printf("                                                 | \n");
    printf("                                                 | \n");
    printf(" ----------------------------------------------- | \n");
    printf(" =============================================== | \n");
    printf(" Escolha uma opcao: ");
    scanf("%c", &op);
    getchar();

    return op;











}