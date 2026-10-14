#include <stdio.h>

int soma(int numero){

if (numero == 0){
    return 0;
}

return (numero % 10) + soma(numero /10);

}

int main(){
    int numero = 0;
    scanf("%d", &numero);
    printf("%d", soma(numero));
}