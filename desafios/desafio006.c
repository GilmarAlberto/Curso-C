/*
Crie um algoritmo que leia um número e mostre o seu dobro, triplo e raiz 
quadrada.

*/
#include <stdio.h>
#include <math.h>

int main(){

    int n1 = 0;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("O dobro de %d eh %d\n ", n1, n1*2);
    printf("O triplo de %d eh %d\n", n1, n1*3);
    printf("A raiz quadrada de %d eh %f\n", n1, sqrt(n1));

    return 0;
}