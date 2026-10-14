#include <stdio.h>
#include <math.h>

int main(){

int n;
float S = 1.0;

scanf("%d", &n);

for (int i = 2; i <= n; i++)
{
    
    S = S + 1.0/i;
}

printf("%.2f", S);

}