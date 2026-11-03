#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL, ".UTF-8");

    int banco;
    float saldo;


    printf("Instituições financeiras:");
    printf("\n1- Banco Central de Alvinópolis City - BCA\n2- Casa da moeda de Alvinópolis City\n3- Banco Cota\n");

    printf("\nEntre com o código do banco desejado: ");
    scanf("%d", &banco);

    if(banco!=1 && banco!=2 && banco!=3){
        printf("Opção inválida!");
        exit (0);
    }

    printf("Saldo em conta: R$");
    scanf("%f", &saldo);


    if(banco == 1){
        if(saldo > 100000){
            printf("Cliente 5 estrelas!");
        }
        else
            if(saldo >= 5000 && saldo <= 100000){
                printf("Cliente 3 estrelas!");
        }
        else
            printf("Cliente 1 estrela!");
    }


    if(banco == 2){
        if(saldo > 1000000){
            printf("Cliente especial!");
        }
        else
            if(saldo >= 50000 && saldo <= 1000000){
                printf("Cliente quase especial!");
        }
        else
            printf("Cliente normal!");
    }


    if(banco == 3){
        if(saldo > 10000000){
            printf("Cliente Vip!");
        }
        else
            if(saldo >= 500000 && saldo <= 10000000){
                printf("Cliente Middle!");
        }
        else
            printf("Cliente Usual!");
    }



    return 0;
}