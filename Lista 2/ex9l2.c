#include <stdio.h>

int main(){

float compra, venda, lucro, totalC, totalV, totalL;
int lucromenos10=0, lucro10=0, lucro20=0;

while(compra != 0)
{
   
   scanf("%f", &compra); 
   scanf("%f", &venda);

   if(compra != 0)
   {
    lucro = venda - compra;
    if (lucro < compra * 0.1){
        lucromenos10++;
    }
    if (lucro >= compra * 0.1 && lucro <= compra * 0.2){
        lucro10++;
    }
    if (lucro > compra * 0.2){
        lucro20++;
    }
    totalL = lucro + totalL;
    totalV = venda + totalV;
    totalC = compra + totalC;
    }
}

printf("%d\n%d\n%d\n%.2f\n%.2f\n%.2f", lucromenos10, lucro10, lucro20, totalC, totalV, totalL);



}