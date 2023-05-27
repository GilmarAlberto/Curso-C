/*
Faça um algoritmo que leia o salário de um funcionário e mostre
seu novo salário com 15% de aumento.

salario = float(input('Digite o seu salário atual: R$ '))

print(f'Seu novo salário com 15% de aumento é R$ {salario*1.15 :.2f}')
*/
#include <stdio.h>

int main(){

    float salario = 0;

    printf("Digite o seu salario atual: R$ ");
    scanf("%f", &salario);

    printf("Seu novo salario com 15%% de aumento eh R$ %.2f", salario*1.15);

    return 0;
}