#include <stdio.h>
#include <math.h>

int main(){

    double razao, primeiro, quintoTermo;
    printf("Insira a razao da PG:\n");
    scanf("%lf",&razao);
    printf("Insira o primeiro termo da PG:\n");
    scanf("%lf",&primeiro);

    quintoTermo = primeiro * pow(razao,5 - 1);
    printf("O quinto termo = %.2lf", quintoTermo);


}