/*
Crie um programa que leia dois números e mostre a soma entre eles.
*/

#include <stdio.h>

int n1,n2;

int main(){

    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite outro valor: ");
    scanf("%d", &n2);

    printf("A soma entre %d e %d eh igual a %d", n1, n2, n1+n2);

    return 0;

}