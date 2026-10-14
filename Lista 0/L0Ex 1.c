#include <stdio.h>

int main(){

    int CDU, C, D, U, UDC;

    printf("Digite um numero de 3 digitos para que ele seja invertido\n");
    scanf("%d", &CDU);
    while (CDU >= 999 || CDU <= 100)
    {
        printf("O numero deve ter 3 digitos, digite corretamente\n");
        scanf("%d", &CDU);
    }
    
    if (CDU <= 999 && CDU >= 100)
    {
        C = CDU / 100;
        D = (CDU % 100) / 10;
        U = (CDU % 100) % 10;

        UDC = U * 100 + D * 10 + C;

        printf("Aqui esta o seu numero invertido: %d", UDC);
    }
}