#include <stdio.h>

void info(){
        
     int filhos = 0, totalfilhos = 0, mediafilhos = 0, n=0;
     float salario = 0, totalsalario = 0, mediasalario = 0;
     scanf("%f %d", &salario, &filhos);

    
    while(salario >= 0){
        
        totalsalario += salario;
        totalfilhos += filhos;
        n++;

        scanf("%f %d", &salario, &filhos);
}


if(salario < 0){
mediasalario = totalsalario / n;
mediafilhos = totalfilhos / n;
printf("%.2f", mediasalario);
}

}

int main(){

    info();


}