#include <stdio.h>
#include <math.h>

int main(){

    int anoN, idade;
    char aniversario;

    printf("Qual o seu ano de nascimento?\n");
    scanf(" %d",&anoN);
    printf("Voce ja fez aniversario este ano? Digite 'S' para SIM e 'N' para nao.\n");
    scanf(" %c", &aniversario);

    while (aniversario != 's' && aniversario != 'S' && aniversario != 'n' && aniversario != 'N')
    {
        printf("Resposta invalida. Digite 'S' para sim e 'N' para nao.\n");
        scanf(" %c", &aniversario);
    }
    

    if (aniversario == 'S' || aniversario == 's')
    {
        idade = 2026 - anoN;
    }
    else 
    {
        idade = (2026 - anoN) -1;
    }

    if (idade >= 18)
    {
        printf("%d\nPode dirigir", idade);
    }
    else {
        printf("%d\nNao pode dirigir", idade);
    }
}