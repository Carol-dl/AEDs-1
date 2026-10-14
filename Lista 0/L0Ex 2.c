#include <stdio.h>

int main(){

    float salario, kwRes, valorKw, valorPago, valorDesc; //sário min, kilowatts por hora, valor cada kilowatt, valor a ser pago, valor com desconto
    printf("Digite o valor do salario minimo:\n");
    scanf("%f",&salario);
    printf("Digite a quantidade de kilowatts gasta por uma residencia\n");
    scanf("%f",&kwRes);

    valorKw = (salario / 7) / 100;
    valorPago = valorKw * kwRes;
    valorDesc = valorPago - (valorPago * 0.1);

    printf("Valor de cada KW: %.2f\nValor a ser pago: %.2f\nValor a ser pago com desconto: %.2f",valorKw, valorPago, valorDesc);
}