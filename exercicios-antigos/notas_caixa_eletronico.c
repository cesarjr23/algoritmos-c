/*
Um algoritmo para gerenciar os saques de um caixa eletr�nico deve possuir algum mecanismo para
decidir o n�mero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o
saque. Um poss�vel crit�rio seria o da "distribui��o �tima" no sentido de que as notas de menor
valor fossem distribu�das em n�mero m�nimo poss�vel. Por exemplo, se a quantia solicitada fosse
R$ 87,00, o algoritmo deveria indicar uma nota de R$ 50,00, tr�s notas de R$ 10,00, uma nota de
R$ 5,00 e duas notas de R$ 1,00. Escreva um algoritmo que receba o valor da quantia solicitada e
retorne a distribui��o das notas de acordo com o crit�rio da distribui��o �tima. Obs.: Notas
dispon�veis: R$50,00 , R$20,00, R$10,00, R$5,00 e R$1,00
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saque;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &saque);

     if(saque >=50){
                printf("\n%d Notas de 50", saque/50); //se o valor digitado for maior que 50, o codigo pega esse valor e divide por 50
                saque = saque%50; //ele pega o resto da divisao e pula para o proximo if, se o valor do resto for menor que 20 ele pula para o proximo
                                  //e assim por diante
            }
             if(saque >=20){
                printf("\n%d Notas de 20", saque/20);
                saque = saque%20;
            }
             if(saque >=10){
                printf("\n%d Notas de 10", saque/10);
                saque = saque%10;
            }
             if(saque >=5){
                printf("\n%d Notas de 5", saque/5);
                saque = saque%5;
            }
            if(saque >=1){
                printf("\n%d Notas de 1", saque/1);
                saque = saque%1;
            }


    return 0;
}