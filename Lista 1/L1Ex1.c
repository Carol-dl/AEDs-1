#include <stdio.h>

int main(){

    int num1, num2;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    printf("Digite outro numero:\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("O maior deles = %d", num1);
    }
    else if (num2 > num1)
    {
        printf("O maior deles = %d", num2);
    }
    else {
        printf("Os dois numeros sao iguais");
    }


}