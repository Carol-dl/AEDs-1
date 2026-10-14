#include <stdio.h>

int main(){


int voto=1, candidato1=0, candidato2=0, candidato3=0, candidato4=0, nulo=0, branco=0; 

while(voto != 0)
{
   
   scanf("%d", &voto); 
   

   if(voto != 0)
   {
    if(voto == 1)
    {
        candidato1++;
    }
    if(voto == 2){
        candidato2++;
    }
    if(voto == 3){
        candidato3++;
    }
    if(voto == 4){
        candidato4++;
    }
    if(voto == 5){
        nulo++;
    }
    if(voto == 6){
        branco++;
    }
    
    }
}

printf("%d\n%d\n%d\n%d\n%d\n%d", candidato1, candidato2,candidato3,candidato4,nulo, branco);



}