#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int base, altura, consumo, area;

    printf("Medida da base: ");
    scanf("%d", &base);

    printf("Medida da altura: ");
    scanf("%d", &altura);

    area = base*altura;
    consumo = area*3;

    printf("\nA quantidade de tinta a ser gasta é: %d litros", consumo);

    if(consumo>=9){
        printf("\nSerão gastas %d latas de 9 litros.", consumo/9);
        consumo = consumo%9;

        if(consumo>=5){
            printf("\nSerão gastas %d latas de 5 litros.", consumo/5);
            consumo = consumo%5;
        }

        if(consumo>=1){
            printf("\nSerão gastas %d latas de 1 litro.", consumo/1);
            consumo = consumo%1;
        }
    }


    return 0;

}