#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <conio.h>



int main(){

    float num1, num2, resultado;
    char op = '0';

    do
    {
        system("cls");
        num1 = num2 = resultado = 0;
        printf("\n 1 - Somar\n");
        printf(" 2 - Subtrair\n");
        printf(" 3 - Multiplicar\n");
        printf(" 4 - Dividir\n");
        printf(" 0 - Sair\n");

        printf("\nInforme a operacao: \n");
        op = getche();
        printf("\t\t\t>>> ");
        if (op != '0'){
            printf("Digite o primeiro numero:\n\t ");
            scanf("%f", &num1);
            printf("Digite o segundo numero:\n\t ");
            scanf("%f", &num2);


            if (op == '1'){

                resultado = num1 + num2;
             }else{
                if(op == '2'){
                    resultado = num1 - num2;
                }else{
                    if(op == '3'){
                        resultado = num1 * num2;
                    }else{
                        if (op == '4'){
                            resultado = num1 / num2;
                     
                        }
                   
                    }
               
                }

            }
                    
               

        }
        
        printf("O resultado eh: %f\n", resultado);

        system("Pause");
        system("cls");
   
      
    } while (op != '0');
    


    return 0;




}