/*
Crie um programa que leia quanto dinheiro uma pessoa tem na
carteira e mostre quanto dólares ela pode comprar.
Considere: US$ 1,00 = R$ 3,27
*Alteração: capturar o valor do dolar também. 

*/
#include <stdio.h>

int main(){
    float real = 0;
    float dolar = 0;

    printf("Quanto de dinheiro voce tem na carteira? R$ ");
    scanf("%f", &real);
    printf("Qual a cotacao do dolar? R$ ");
    scanf("%f", &dolar);

    printf("Voce pode comprar %.2f dolares.", real/dolar);

    return 0;
}