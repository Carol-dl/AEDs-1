#include <stdio.h>
#include <math.h>

int main(){
double cateto1, cateto2, hipo;

printf("Insira o valor de um cateto:\n");
scanf("%lf",&cateto1);
printf("Insira o valor do outro cateto:\n");
scanf("%lf",&cateto2);

hipo = sqrt(pow(cateto1,2) + pow(cateto2,2));

printf("Hipotenusa = %.2lf", hipo);

}


