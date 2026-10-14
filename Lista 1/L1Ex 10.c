#include <stdio.h>
#include <math.h>

int main (){

    int velomax, motorista, dif;

printf("Velocidade maxima permitida:\n");
scanf(" %d", &velomax);
printf("Velocidade do motorista:\n");
scanf(" %d", &motorista);

dif = motorista - velomax;

if (dif <= 0)
{
    printf("Motorista respeitou a lei");
}
else if (dif <= 10 && dif > 0)
{
    printf("Multa de 50 reais");
}
else if (dif <= 30 && dif > 10)
{
    printf("Multa de 100 reais");
}
else if (dif > 30)
{
    printf("Multa de 200 reais");
}


}