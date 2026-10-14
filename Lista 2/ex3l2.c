#include <stdio.h>

int main(){

    int qnt=1, nInt, tresNove=0, dois=0, cinco=0;
    float n;
    
    do
    {
        qnt++;
        scanf("%f", &n);

        nInt=(int)n;
        
        
        if(nInt % 3 == 0 && nInt % 9 == 0)
        {
            tresNove++;
        }
        if(nInt % 2 == 0)
        {
            dois++;
        }
        if(nInt % 5 == 0)
        {
            cinco++;
        }
        if(nInt % 9 != 0 && nInt % 2 != 0 && nInt % 5 != 0)
        {
            printf("Numero nao eh divisivel pelos valores\n");
        }

    } while (qnt <= 10);
    
    printf("%d Numeros sao divisiveis por 3 e por 9\n%d Numeros sao divisiveis por 2\n%d Numeros sao divisiveis por 5", tresNove, dois, cinco);


}