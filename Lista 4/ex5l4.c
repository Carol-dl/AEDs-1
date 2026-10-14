#include <stdio.h>


// a = b * (a / b) + (a % b) 

int eucli(int a, int b){
if (a == 0){
    return b;
}
if (b == 0){
    return a;
}
return eucli(b, a % b);
}

int main(){
int a=0, b=0;
scanf("%d %d",&a, &b);
printf("%d", eucli(a,b));

}