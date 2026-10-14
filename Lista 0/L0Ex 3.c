#include <stdio.h>
#include <math.h>

int main(){

    double base, altura, area, perimetro, diagonal;
    printf("Digite o valor da base do retangulo:\n");
    scanf("%lf",&base);
    printf("Digite o valor da altura do retangulo:\n");
    scanf("%lf",&altura);

    perimetro = (base * 2) + (altura * 2);
    area = base * altura;
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("Perimetro = %.2lf\nArea = %.2lf\nDiagonal = %.2lf",perimetro,area,diagonal);
}