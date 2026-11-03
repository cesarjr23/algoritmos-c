#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int prato, sobremesa, bebida, calPrato, calSobremesa, calBebida, calorias;

    printf("Prato: \n");
    printf("\n 1- Vegetariano\n 2- Peixe\n 3- Frango\n 4- Carne\n");
    printf("\nOp��o desejada: ");
    scanf("%d", &prato);

    if(prato!=1 && prato!=2 && prato!=3 && prato!=4){
        printf("Op��o inv�lida!");
        exit (0);
    }
    if(prato == 1){
        calPrato = 180;
    }
    if(prato == 2){
        calPrato = 230;
        }
    if(prato == 3){
        calPrato = 250;
        }
    if(prato == 4){
        calPrato = 350;
        }


    printf("\nSobremesa: \n");
    printf("\n 1- Abacaxi\n 2- Sorvete Diet\n 3- Mousse Diet\n 4- Mousse chocolate\n");
    printf("\nOp��o desejada: ");
    scanf("%d", &sobremesa);

    if(sobremesa!=1 && sobremesa!=2 && sobremesa!=3 && sobremesa!=4){
        printf("Op��o inv�lida!");
        exit (0);
        }
    if(sobremesa == 1){
        calSobremesa = 75;
        }
    if(sobremesa == 2){
        calSobremesa = 110;
        }
    if(sobremesa == 3){
        calSobremesa = 170;
        }
    if(sobremesa == 4){
        calSobremesa = 200;
        }


    printf("\nBebida: \n");
    printf("\n 1- Ch�\n 2- Suco de laranja\n 3- Suco de mel�o\n 4- Refrigerante Diet\n");
    printf("\nOp��o desejada: ");
    scanf("%d", &bebida);

    if(bebida!=1 && bebida!=2 && bebida!=3 && bebida!=4){
        printf("Op��o inv�lida!");
        exit (0);
        }
    if(bebida == 1){
        calBebida = 20;
         }
    if(bebida == 2){
        calBebida = 70;
        }
    if(bebida == 3){
        calBebida = 100;
        }
    if(bebida == 4){
        calBebida = 65;
        }


    calorias = calPrato+calSobremesa+calBebida;

    printf("Valor total de calorias: %d", calorias);

    return 0;
}