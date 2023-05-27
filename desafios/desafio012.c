/*
Faça um algoritmo que leia o preço de um produto e mostre seu
novo preço com 5% de desconto
*/

#include <stdio.h>

int main(){

    float preco;

    printf("Digite o preco do produto R$: ");
    scanf("%f", &preco);

    printf("O novo valor com desconto de 5%% eh R$ %.2f", preco*0.95);

    return 0;
}