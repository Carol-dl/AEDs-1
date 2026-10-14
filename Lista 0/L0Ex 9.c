#include <stdio.h>
#include <math.h>

int main(){

    double numerador, denominador, decimal;

    printf("Insira o numerador da fracao:\n");
    scanf("%lf", &numerador);
    printf("Insira o denominador da fracao:\n");
    scanf("%lf", &denominador);

    decimal = numerador / denominador;

    printf("Valor da fracao em decimal = %lf", decimal);

}