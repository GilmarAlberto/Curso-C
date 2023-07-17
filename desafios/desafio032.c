/*
Cálculo de desconto: Faça um programa que solicite ao usuário o valor de uma compra e calcule o desconto de acordo com as seguintes regras: se o valor for maior que R$ 100, aplique um desconto de 10%; caso contrário, não aplique desconto.

*/
#include <stdio.h>

int main(){

    float valor = 0.0;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if(valor>100){
        printf("O valor com desconto  eh R$ %.2f", valor*.9);
    }
    else{
        printf("O valor nao tem desconto: R$ %.2f", valor);
    }
    return 0;
}