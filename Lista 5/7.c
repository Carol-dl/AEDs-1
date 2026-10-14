#include <stdio.h>


int ordenar(int *a, int *b, int *c) {
    int temp;
    
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a == *b && *b == *c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int v1, v2, v3;

    scanf("%d %d %d", &v1, &v2, &v3);
    int iguais = ordenar(&v1, &v2, &v3);
    printf("%d, %d, %d\n", v1, v2, v3);
    

    return 0;
}