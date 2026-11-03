#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

        int T10, T4, T1, litrosAco,litrosCob,litrosAlu, resto;
        float raioE, areaE, volE , alturaPr , larguraPr , profundidadePr,areaPr , volPr, alturaCl , raioCl, areaCl, volCl, pAco, pAlu, pCob , pesototal;


    printf("\nForne�a o raio da esfera: ");
    scanf("%f", &raioE);


    areaE=4*(3.14*(raioE*raioE));

    volE=(4*(3.14*((raioE*raioE)*raioE)))/3;

    pAco=volE*7.8;

    pAlu=volE*2.6;

    pCob=volE*8.8;

    printf("\nArea da esfera = %.2f cm�", areaE);
    printf("\nVolume da esfera = %.2f cm�",volE);
    printf("\nPeso em a�o= %.2f gramas",pAco);
    printf("\nPeso em aluminio= %.2f gramas",pAlu);
    printf("\nPeso em cobre= %.2f gramas",pCob);

    printf("\nForne�a a altura do paralelep�pedo: ");
    scanf("%f", &alturaPr);

    printf("\nForne�a a largura do paralelep�pedo:");
    scanf("%f", &larguraPr);

    printf("\nForne�a a profundidade do paralelep�pedo:");
    scanf("%f", &profundidadePr);

    areaPr=2*(alturaPr*larguraPr)+2*(alturaPr*profundidadePr)+2*(larguraPr*profundidadePr);
    volPr=alturaPr*larguraPr*profundidadePr;
    pAco=volPr*7.8;
    pAlu=volPr*2.6;
    pCob=volPr*8.8;

    printf("\nArea do paralelepipedo =%.2f cm�", areaPr);
    printf("\nVolume do paralelepipedo =%.2f cm�\n",volPr);
    printf("\nPeso em a�o= %.2f gramas",pAco);
    printf("\nPeso em aluminio= %.2f gramas",pAlu);
    printf("\nPeso em cobre= %.2f gramas",pCob);

    printf("\nForne�a o raio do cilindro: ");
    scanf("%f", &raioCl);

    printf("\nForne�a a altura do cilindro: ");
    scanf("%f", &alturaCl);

    areaCl=2*(3.14*(raioCl*raioCl))+2*(3.14)*(raioCl*alturaCl);

    volCl=3.14*((raioCl*raioCl)*alturaCl);
    pAco=volPr*7.8;

    pAlu=volPr*2.6;

    pCob=volPr*8.8;

    printf("\nArea do cilindro =%.2f cm�", areaCl);
    printf("\nVolume do cilindro =%.2f cm�\n",volCl);
    printf("\nPeso em a�o= %.2f gramas",pAco);
    printf("\nPeso em aluminio= %.2f gramas",pAlu);
    printf("\nPeso em cobre= %.2f gramas",pCob);


    pesototal = volCl+ volE+volPr;

    pAco=pesototal*7.8;

    pAlu=pesototal*2.6;

    pCob=pesototal*8.8;

    printf("\nPeso total da estatua em a�o:%.2f gramas", pAco);
    printf("\nPeso total da estatua em aluminio:%.2f gramas", pAlu);
    printf("\nPeso total da estatua em a�o:%.2f gramas", pCob);

    litrosAco = pAco*0.02;

    litrosAlu = pAlu*0.01;

    litrosCob = pCob*0.015;

    T10= litrosAco/10;

    resto=litrosAco - (10*10);

    if (resto>=4)
    {
        T4= resto/4;
    }
    if (resto<4)
        T1=resto;


    if (T10!=0)
    printf("\n%d Latas de 9 litros.", T10 );
    if (T4!=0)
    printf("\n%d Latas de 5 litros.", T4 );
    if (T1!=0)

    printf("\n%d Latas de 1 litro para o material A�O", T1);

    T10= litrosAlu/10;

    resto=litrosAlu - (10*10);

    if (resto>=4)
    {
        T4= resto/4;
    }
    if (resto<4)
        T1=resto;


    if (T10!=0)
    printf("\n%d Latas de 9 litros.", T10 );
    if (T4!=0)
    printf("\n%d Latas de 5 litros.", T4 );
    if (T1!=0)

    printf("\n%d Latas de 1 litro para o material ALUMINIO", T1);

    T10= litrosCob/10;
    resto=litrosCob - (10*10);

    if (resto>=4)
    {
        T4= resto/4;
    }
    if (resto<4)
        T1=resto;


    if (T10!=0)
    printf("\n%d Latas de 9 litros.", T10 );
    if (T4!=0)
    printf("\n%d Latas de 5 litros.", T4 );
    if (T1!=0)

    printf("\n%d Latas de 1 litro Para o material COBRE", T1);





    return 0;


}