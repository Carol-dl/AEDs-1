#include <stdio.h>
#include <math.h>

int main(){

char input;

printf("Insira um simbolo:\n");
scanf("%c", &input);

switch (input)
{
case '<':
    printf("SINAL DE MENOR");
    break;

    case '>':
    printf("SINAL DE MAIOR");
    break;

    case '=':
    printf("SINAL DE IGUAL");
    break;

default: 
    printf("OUTRO SINAL");
    break;
}

}