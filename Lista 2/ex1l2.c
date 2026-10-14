#include <stdio.h>

int main(){

long int qntN, n;
long int positivos=0, negativos=0, zeros=0;


// printf("Quantos valores tem a sequencia?");
scanf("%ld", &qntN);

for(long int nNumeros=1; nNumeros <= qntN; nNumeros++)
{
    scanf("%ld", &n);
    if(n > 0)
    {
        positivos++;
    }
    else if(n < 0)
    {
        negativos++;
    }
    else
    {
        zeros++;
    }
}
 printf("%ld POSITIVOS\n%ld NEGATIVOS\n%ld ZEROS",positivos, negativos, zeros);

}

