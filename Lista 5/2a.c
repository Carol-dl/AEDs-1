#include <stdio.h>

int main(){

int valor = 1;
int *valorPtr = &valor;

printf("%d\n", valor);
printf("%p\n", &valorPtr);

}