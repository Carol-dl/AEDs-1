#include <stdio.h>
#include <math.h>

int main(){

    double salarioA, salarioN;
    char opcao;

    printf("Selecione entre as opcoes A, B ou C:\n");
    scanf(" %c", &opcao);
    printf("Insira o valor do salario atual:\n");
    scanf(" %lf", &salarioA);

    switch (opcao)
    {
    case 'A':
        salarioN = salarioA * 1.08;
        break;

    case 'B':
        salarioN = salarioA * 1.11;
        break;

    case 'C':
        if (salarioA <= 1000)
        {
            salarioN = salarioA + 350;
        }
        else if (salarioA > 1000)
        {
            salarioN - salarioA + 200;
        }
        break;
    
    default: 
    printf("Opcao invalida");
        break;
    }

    printf("O novo salario = %.2lf", salarioN);
    


}
