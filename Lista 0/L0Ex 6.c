#include <stdio.h>
#include <math.h>

int main (){

    double razao, primeiro, dezTermo;
    printf("Insira a razao da PA:\n");
    scanf("%lf",&razao);
    printf("Insira o primeiro termo da PA:\n");
    scanf("%lf",&primeiro);

    dezTermo = primeiro + (10 - 1) * razao;

    printf("O decimo termo dessa PA = %.2lf", dezTermo);

}