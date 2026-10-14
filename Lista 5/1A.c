#include <stdio.h>

int main(){
int x = 10;
int* p = &x;
printf("%p\n", p);

p++;

printf("%p", p);

}
