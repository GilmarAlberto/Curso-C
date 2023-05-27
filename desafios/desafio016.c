/*
Crie um programa que leia um número Real qualquer pelo teclado e
mostre na tela a sua porção Inteira.
*/
#include <stdio.h>

int main(){

    float numf = 0;
    int numi = 0;

    printf("Digite um numero real qualquer: ");
    scanf("%f", &numf);

    numi = (int)numf;

    printf("A porcao inteira eh %d", numi);

    return 0;
}