#include <stdio.h>

double fatorial(int n){
    if( n == 0 || n == 1){
        return 1.0;
    }
    return n * fatorial(n-1);
}

double serie(int n){
    if (n == 1){
        return 1.0;
    }
    return (1.0 / fatorial(n)) + serie(n-1);

}


int main(){
    int n=0;
scanf("%d", &n);
printf("%.2lf", serie(n));

}