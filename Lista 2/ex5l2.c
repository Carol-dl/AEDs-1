#include <stdio.h>
#include <math.h>

int main(){

float salario=0, salarioTotal=0, mediaS, maiorS=0, percent, sal100=0;
int filhos=0, totalFilhos=0, mediaF, total=0;

while(salario >= 0)
{
   
   scanf("%f", &salario); 
   scanf("%d", &filhos);

   if(salario >= 0)
   {
    total++;
    salarioTotal=salarioTotal+salario;
    totalFilhos=totalFilhos+filhos;
    if (salario > maiorS)
    {
        maiorS = salario;
    }
    if (salario <= 100)
    {
        sal100++;
    }
    }
}

mediaS = salarioTotal/total;
mediaF = totalFilhos/total;
percent = sal100*100/total;

printf("%.2f\n%d\n%.2f\n%.2f\n", mediaS, mediaF, maiorS, percent);


}