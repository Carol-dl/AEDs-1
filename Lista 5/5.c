#include <stdio.h>

int main(){

char charr = 'c';
int inte = 1;
float floate = 2.0;
double doublee = 3.0;

int * ptrint = &inte;
char * ptrchar = &charr;
float * ptrflaot = &floate;
double * ptrdouble = &doublee;

printf("%c, %p, %p\n", charr, &charr, sizeof(charr));
printf("%d, %p, %p\n", inte, &inte, sizeof(inte));
printf("%.2f, %p, %p\n", floate, &floate, sizeof(floate));
printf("%.2lf, %p, %p\n", doublee, &doublee, sizeof(doublee));

printf("%p, %p, %p\n", ptrchar, &ptrchar, sizeof(ptrchar));
printf("%p, %p, %p\n", ptrint, &ptrint, sizeof(ptrint));
printf("%p, %p, %p\n", ptrflaot, &ptrflaot, sizeof(ptrflaot));
printf("%p, %p, %p\n", ptrdouble, &ptrdouble, sizeof(ptrdouble));

}