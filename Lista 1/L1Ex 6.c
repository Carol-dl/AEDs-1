#include <stdio.h>
#include <math.h>

int main(){

double coefA, coefB, raiz;


printf("Insira o coeficiente 'a' da equacao:\n");
scanf( "%lf", &coefA);
printf("Insira o coeficiente 'b' da equacao:\n");
scanf( "%lf", &coefB);

raiz = (coefB * (-1)) / coefA;

printf("Raiz da equacao = %.2lf", raiz);



}