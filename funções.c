#include<stdio.h>
#include<stdlib.h>


int main()

{
        // Funções
    int v1, v2, resultado;
    printf("Digite o valor 01: \n");
    scanf("%d", &v1);
    printf("Digite oo valor 02: \n");
    scanf("%d", &v2);
    resultado = multiplicacao(v1, v2);
    printf("O resultado: %d \n", resultado);

    /*
        Função em C, funciona basicamente da mesma forma que em Python, você deve declarar a função e depois chamar ela.


    */
    return 0;
}

/*void apresentacao(void)
{

    printf("Ola bem vindo");


}
*/
int multiplicacao (int n1, int n2)
{
    int resultado;
    resultado = n1 * n2;
    return(resultado);

}