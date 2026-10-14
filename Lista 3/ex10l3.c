#include <stdio.h>

char funcao(int idade){
    
    if( idade >= 5 && idade <=7){
        return 'F';
    }
    if (idade >= 8 && idade <= 10){
        return 'E';
    }
    if (idade >= 11 && idade<= 13){
        return 'D';
    }
    if (idade >= 14 && idade <= 15)
    {
        return 'C';
    }
    if (idade >= 16 && idade <= 17)
    {
        return 'B';
    }
    if (idade >= 18)
    {
        return 'A';
    }
}

int main(){
    int idade, nadadores;
    scanf("%d", &nadadores);
    for (int i = 1; i <= nadadores; i++)
    {
    scanf("%d", &idade);
    printf("%c\n", funcao(idade));
    }
    
}