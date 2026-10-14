#include <stdio.h>
#include <stdbool.h>

int divisores (int valor, int *max, int *min){
    bool dividiu = false;

    for (int i = 2; i < valor; i++) {
        if (valor % i == 0) {
            if (dividiu == false){
                *min = i;
                dividiu = true;
            }
            }
            *max = i;
}
if (dividiu ==  true) {
        return 1; 
    } else {
        return 0; 
    }
}


int main(){
int valor, *max, *min;

    scanf("%d", &valor);

    int resultado = divisores(valor, &min, &max);

    if (resultado == 0) {
        printf("%d PRIMO", valor);
    } else {
        printf("%d NAO PRIMO.\n", valor);
        printf("Min: %d\n", min);
        printf("Max: %d\n", max);
    }

    return 0;



}