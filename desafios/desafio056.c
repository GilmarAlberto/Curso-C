/*
Escreva um programa em C que leia uma matriz 3x3 e imprima a soma de todos os seus elementos.
*/
#include <stdio.h>

int main(){

    int matriz[3][3];
    int soma = 0, i = 0, j = 0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos eh %d", soma);

    return 0;
}