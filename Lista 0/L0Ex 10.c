#include <stdio.h>
#include <math.h>

int main(){

    int hora, minutos, minPassados;

    printf("Valor da hora:\n");
    scanf("%d", &hora);
    printf("Valor dos minutos:\n");
    scanf("%d", &minutos);

    hora = hora * 60;
    minPassados = (hora + minutos);

    printf("Neste dia ja se passaram %d minutos", minPassados);


}