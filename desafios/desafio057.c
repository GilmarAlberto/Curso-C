/*
Crie um programa em C que preencha uma matriz 4x4 com números inteiros e, em seguida, imprima a média dos elementos da diagonal principal.

*/
#include <stdio.h>

int main(){

    int matriz[4][4];
    int soma = 0, i = 0, j = 0;
    float media = 0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if(i==j)
                soma += matriz[i][j];
        }
    }

    media = soma/4.0;

    printf("A media dos elementos da diagonal principal eh %.2f", media);

    return 0;
}