#include <stdio.h>

int divisaor (int numerador, int denominador){

    if (numerador < denominador){
        return numerador;
    }
    return divisaor(numerador - denominador, denominador);
}

int main(){

int numerador, denominador, resto;
scanf("%d %d", &numerador, &denominador);
printf("%d", divisaor(numerador, denominador));

}