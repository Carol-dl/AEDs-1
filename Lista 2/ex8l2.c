#include <stdio.h>
#include <math.h>

int main(){

int n, num1=0, num2=1, prox=0;    
scanf("%d", &n);
//printf("%d", num2);

do
{
    printf("%d ", num2);
    prox = num1 + num2;
    num1 = num2;
    num2 = prox;

} while(prox <= n);

}