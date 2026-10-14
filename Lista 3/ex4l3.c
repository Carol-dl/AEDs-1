#include <stdio.h>

void trig(int x, int y, int z){
if(x < y + z && y < x + z && z < y + x){
    if(x == y && y == z && z == x){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(x == y || y == z || z == x){
        printf("TRIANGULO ISOSCELES\n");
    }
    else{
        printf("TRIANGULO ESCALENO");
    }
}
else{
    printf("NAO TRIANGULO\n");
}

}

int main(){
int x, y, z;
while(x >= 0){
scanf("%d %d %d", &x, &y, &z);
if(x > 0){
trig(x,y,z);
}
}
}