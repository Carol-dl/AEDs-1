#include <stdio.h>
#include <math.h>

int main(){

int n, num1=0, num2=1, prox;    
scanf("%d", &n);
printf("%d", num2);

for (int termo = 1; termo < n; termo++)
{
    prox = num1 + num2;
    num1 = num2;
    num2 = prox;
    printf(" %d", prox);

}

}