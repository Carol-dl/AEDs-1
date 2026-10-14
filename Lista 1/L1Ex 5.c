#include <stdio.h>
#include <math.h>

int main(){

    double diaria, diariaP, valor80, valor50, dif;

    printf("Qual o valor da diaria do hotel?\n");
    scanf(" %lf", &diaria);

    diariaP = diaria - (diaria * 0.25);
    valor80 = (80 * 0.8) * diariaP;
    valor50 = (80 * 0.5) * diaria;
    dif = valor80 - valor50;

    printf("Diaria promocional = %.2lf\nPromocional com 80%% ocupado = %.2lf\nNormal com 50%% ocupado = %.2lf\nDiferenca entre eles = %.2lf", diariaP, valor80, valor50, dif);


}