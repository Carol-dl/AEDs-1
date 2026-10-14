#include <stdio.h>

float funcao(int alunos){
    float nota, somaNota, nota6, mediaNota;
    for (int i = 0; i < alunos; i++)
    {
        scanf("%f", &nota);
        if (nota >= 6.00)
        {
            somaNota = somaNota + nota;
            nota6++;
        }
        
    }
    
    mediaNota = somaNota / nota6;
    return mediaNota;


}

int main(){
int alunos;
scanf("%d", &alunos);
printf("%.1f", funcao(alunos));

}