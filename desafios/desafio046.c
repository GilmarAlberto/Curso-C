/*
Exercício 3: Fatorial Elabore um programa que empregue um loop while para calcular o fatorial de um número dado pelo usuário. O fatorial de um número N é o produto de todos os inteiros positivos menores ou iguais a N.

*/
#include <stdio.h>

int main(){

    int num = 0, fat = 1, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O fatorial de um numero negativo nao e definido.\n");
    } else if (num == 0) {
        printf("O fatorial de 0 eh 1.\n");
    } else {
        while (i <= num) {
            fat *= i; // Multiplica 'fat' pelo valor de 'i' a cada iteração.
            i++;
        }
        printf("O fatorial de %d eh %d\n", num, fat);
    }

    return 0;
}