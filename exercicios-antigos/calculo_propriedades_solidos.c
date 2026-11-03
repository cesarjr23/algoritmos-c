
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    const float PI = 3.14f;
    const float DENSIDADE_ACO = 7.8f;
    const float DENSIDADE_ALUMINIO = 2.6f;
    const float DENSIDADE_COBRE = 8.8f;

    float raioE, areaE, volE;
    float alturaPr, larguraPr, profundidadePr, areaPr, volPr;
    float alturaCl, raioCl, areaCl, volCl;

    float volumeTotal;
    float pesoAco, pesoAluminio, pesoCobre;
    float litrosAco, litrosAluminio, litrosCobre;

    int materiais[3];
    int latas9, latas5, latas1, resto;

    // ESFERA
    printf("\n=== ESFERA ===\n");

    printf("Forneca o raio da esfera (cm): ");
    if (scanf("%f", &raioE) != 1 || raioE <= 0) {
        printf("Raio invalido!\n");
        return 1;
    }

    areaE = 4 * PI * raioE * raioE;
    volE = (4.0f / 3.0f) * PI * raioE * raioE * raioE;

    printf("\nArea da esfera: %.2f cm²\n", areaE);
    printf("Volume da esfera: %.2f cm³\n", volE);
    printf("Peso em aco: %.2f gramas\n", volE * DENSIDADE_ACO);
    printf("Peso em aluminio: %.2f gramas\n", volE * DENSIDADE_ALUMINIO);
    printf("Peso em cobre: %.2f gramas\n", volE * DENSIDADE_COBRE);

    // PARALELEPIPEDO
    printf("\n=== PARALELEPIPEDO ===\n");

    printf("Forneca a altura (cm): ");
    if (scanf("%f", &alturaPr) != 1 || alturaPr <= 0) {
        printf("Altura invalida!\n");
        return 1;
    }

    printf("Forneca a largura (cm): ");
    if (scanf("%f", &larguraPr) != 1 || larguraPr <= 0) {
        printf("Largura invalida!\n");
        return 1;
    }

    printf("Forneca a profundidade (cm): ");
    if (scanf("%f", &profundidadePr) != 1 || profundidadePr <= 0) {
        printf("Profundidade invalida!\n");
        return 1;
    }

    areaPr = 2 * (alturaPr * larguraPr +
                  alturaPr * profundidadePr +
                  larguraPr * profundidadePr);

    volPr = alturaPr * larguraPr * profundidadePr;

    printf("\nArea do paralelepipedo: %.2f cm²\n", areaPr);
    printf("Volume do paralelepipedo: %.2f cm³\n", volPr);
    printf("Peso em aco: %.2f gramas\n", volPr * DENSIDADE_ACO);
    printf("Peso em aluminio: %.2f gramas\n", volPr * DENSIDADE_ALUMINIO);
    printf("Peso em cobre: %.2f gramas\n", volPr * DENSIDADE_COBRE);

    // CILINDRO
    printf("\n=== CILINDRO ===\n");

    printf("Forneca o raio do cilindro (cm): ");
    if (scanf("%f", &raioCl) != 1 || raioCl <= 0) {
        printf("Raio invalido!\n");
        return 1;
    }

    printf("Forneca a altura do cilindro (cm): ");
    if (scanf("%f", &alturaCl) != 1 || alturaCl <= 0) {
        printf("Altura invalida!\n");
        return 1;
    }

    areaCl = 2 * PI * raioCl * raioCl +
             2 * PI * raioCl * alturaCl;

    volCl = PI * raioCl * raioCl * alturaCl;

    printf("\nArea do cilindro: %.2f cm²\n", areaCl);
    printf("Volume do cilindro: %.2f cm³\n", volCl);
    printf("Peso em aco: %.2f gramas\n", volCl * DENSIDADE_ACO);
    printf("Peso em aluminio: %.2f gramas\n", volCl * DENSIDADE_ALUMINIO);
    printf("Peso em cobre: %.2f gramas\n", volCl * DENSIDADE_COBRE);

    // PESO TOTAL DA ESTATUA
    printf("\n=== PESO TOTAL DA ESTATUA ===\n");

    volumeTotal = volE + volPr + volCl;

    pesoAco = volumeTotal * DENSIDADE_ACO;
    pesoAluminio = volumeTotal * DENSIDADE_ALUMINIO;
    pesoCobre = volumeTotal * DENSIDADE_COBRE;

    printf("Volume total: %.2f cm³\n", volumeTotal);
    printf("Peso total em aco: %.2f gramas\n", pesoAco);
    printf("Peso total em aluminio: %.2f gramas\n", pesoAluminio);
    printf("Peso total em cobre: %.2f gramas\n", pesoCobre);

    // CONSUMO DE TINTA
    // Mantidas as proporcoes do exercicio original.
    litrosAco = pesoAco * 0.02f;
    litrosAluminio = pesoAluminio * 0.01f;
    litrosCobre = pesoCobre * 0.015f;

    printf("\n=== DISTRIBUICAO DAS LATAS DE TINTA ===\n");

    const char *nomes[3] = {
        "ACO", "ALUMINIO", "COBRE"
    };

    float litros[3] = {
        litrosAco, litrosAluminio, litrosCobre
    };

    for (int i = 0; i < 3; i++) {
        // Arredonda para cima, pois nao podemos
        // comprar uma fracao de litro em lata fechada.
        int quantidade = (int)ceilf(litros[i]);

        latas9 = quantidade / 9;
        resto = quantidade % 9;

        latas5 = resto / 5;
        resto = resto % 5;

        latas1 = resto;

        printf("\nMaterial: %s\n", nomes[i]);
        printf("Tinta necessaria: %.2f litros\n", litros[i]);
        printf("Quantidade considerada: %d litros\n", quantidade);
        printf("Latas de 9 litros: %d\n", latas9);
        printf("Latas de 5 litros: %d\n", latas5);
        printf("Latas de 1 litro: %d\n", latas1);
    }

    return 0;
}
