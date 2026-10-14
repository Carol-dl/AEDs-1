#include <stdio.h>
#include <math.h>

int main(){

    double x, y;

    printf("Insira o valor de x:\n");
    scanf(" %lf", &x);

    if (x <= 1)
    {
        y = 1;
    }
    else if (1 < x && x <= 2)
    {
        y = 2;
    }
    else if (2 < x && x <=3)
    {
        y = pow(x,2);
    }
    else if (x > 3)
    {
        y = pow(x,3);
    }

    printf("Y = %.2lf", y);


}