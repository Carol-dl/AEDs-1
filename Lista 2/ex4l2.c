#include <stdio.h>
#include <math.h>

int main(){

int n, fat;
float E = 1.0;

scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    fat = 1;
    for (int valor = 1; valor <= i; valor++)
    {
        fat = fat*valor;
    }
    E = E + 1.0/fat;
}

printf("%.2f", E);

}