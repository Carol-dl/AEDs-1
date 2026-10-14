#include <stdio.h>
#include <math.h>

float calculo(int n){

    float s=0.0f;
    for (int i = 1; i <= n; i++)
    {
       s = (float)(i * i + 1) / (i + 3) + s;
    }
    return s;
    }
    
   
int main(){
    int n=0;
    scanf("%d", &n);
    if(n > 0){
        printf("%.6f", calculo(n));
    }
    
}