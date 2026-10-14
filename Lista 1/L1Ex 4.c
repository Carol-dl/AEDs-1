#include <stdio.h>
#include <math.h>

int main(){

    int nota;

    printf("Insira o valor da nota de 0 a 10:\n");
    scanf(" %d", &nota);

    while (nota <0 || nota >10)
    {
        printf("Nota invalida, digite novamente:\n");
        scanf(" %d", &nota);
    }

    if (nota >= 8 && nota <= 10)
    {
        printf("Otimo");
    }
    else if (nota >= 7 && nota < 8) 
    {
        printf("Bom");
    }
    else if (nota >= 5 && nota < 7) 
    {
        printf("Regular");
    }
    else if (nota <5)
    {
        printf("Insatisfatorio");
    }
    
}