/*
Escreva um programa que pergunte a quantidade de Km percorridos por
um carro alugado e a quantidade de dias pelos quais ele foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e
R$0,15 por Km rodado.
*/
#include <stdio.h>

int main(){

    float kmP = 0, aPagar = 0;
    int dias = 0;

    printf("Digite a quantidade de Km percorridos: ");
    scanf("%f", &kmP);

    printf("Digite a quantidade de dias pelos quais foi alugado: ");
    scanf("%d", &dias);
    
    aPagar = (60 * dias) + (0.15 * kmP);

    printf("O Total a Pagar eh: R$ %.2f", aPagar);

    return 0;
}