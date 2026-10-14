#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2, resultado;

    printf("Insira um numero inteiro:\n");
    scanf("%d", &num1);
    printf("Insira outro numero inteiro:\n");
    scanf("%d", &num2);

    if (num1 + num2 >= 10)
    {
       resultado = (num1 + num2) + 5;
    }
    else 
    {
        resultado = (num1 + num2) + 7;
    }

    printf("Resultado final = %d",resultado);
}