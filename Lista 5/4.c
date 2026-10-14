#include <stdio.h>

int main(){

int var1, var2;
scanf("%d %d", &var1,&var2);
printf("%p\n%p\n", &var1, &var2);

if (&var1 > &var2){
    printf("Maior: %p", &var1);
}
else {
    printf("Maior: %p", &var2);
}

}