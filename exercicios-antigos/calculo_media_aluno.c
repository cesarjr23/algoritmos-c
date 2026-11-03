#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, me, ma;
    int matricula;
    char nome[40];

    printf("Digite seu nome: ");
    fgets(nome,40,stdin);

    printf("Digite o n�mero de sua matr�cula: ");
    scanf("%d", &matricula);

    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);

    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);

    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);

    me = (nota1+nota2+nota3)/3;
    ma = ((nota1+nota2*2+nota3*3+me)/7);


    printf("\nNome do aluno: %s", nome);
    printf("N�mero da sua matr�cula: %d", matricula);
    printf("\nM�dia dos exerc�cios: %.2f", me);
    printf("\nM�dida de aproveitamento: %.2f", ma);


    if (ma >= 9){
            printf("\nConceito A. \nParab�ns, voc� foi aprovado!!!");

    }
    else
        if(ma>=7.5 && ma<=9){
                printf("\nConceito B. \nParab�ns, voc� foi aprovado!!!");
        }
    else
        if(ma>=6 && ma<=7.5){
                printf("\nConceito C. \nParab�ns, voc� foi aprovado!!!");
        }
    else
        if(ma>=4 && ma<=6){
                printf("\nConceito D. \nReprovado!!!");
        }
    else
        if(ma<4){
                printf("\nConceito E. \nReprovado!!!");

    }

    return 0;
}