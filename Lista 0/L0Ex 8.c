#include <stdio.h>
#include <math.h>

int main(){

 double A, B;

 printf("Atribua um valor para A:\n");
 scanf("%lf", &A);
 printf("Atribua um valor para B\n");
 scanf("%lf", &B);

 A = A + B;
 B = A - B;
 A = A - B;
 
 printf("A = %lf\nB = %lf", A, B);




}
