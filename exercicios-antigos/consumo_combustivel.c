#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");

    float distancia, consumo, gasolina, quantGasolina, valor;

    printf("\nDistância até o destino (km): ");
    scanf("%f", &distancia);

    printf("\nConsumo do veículo(km/l): ");
    scanf("%f", &consumo);

    printf("\nPreço da gasolina: ");
    scanf("%f", &gasolina);

    quantGasolina = distancia/consumo;
    valor = quantGasolina*gasolina;

    printf("\nQuantidade de gasolina a ser colocada: %.1f litros\n", quantGasolina);
    printf("\nValor: R$ %.2f\n", valor);


    return 0;
}