#include <stdio.h>
#include <math.h>

int main(){

    double raio, perimetro, area, pi;
    printf("Insira o valor do raio:\n");
    scanf("%lf",&raio);

    pi = 3.14159;
    perimetro = 2 * pi * raio;
    area = pi * pow(raio,2);

    printf("Perimetro = %.2lf\nArea = %.2lf",perimetro, area);

}
