/*
Desenvolva um programa em C que leia duas matrizes 2x2, multiplique-as e imprima a matriz resultante.

*/
#include <stdio.h>

int main(){

    int matriz1[2][2], matriz2[2][2], matriz3[2][2];
    int i = 0, j = 0;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite o elemento [%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite o elemento [%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    matriz3[0][0] = (matriz1[0][0] * matriz2[0][0]) + (matriz1[0][1] * matriz2[1][0]);
    matriz3[0][1] = (matriz1[0][0] * matriz2[0][1]) + (matriz1[0][1] * matriz2[1][1]);
    matriz3[1][0] = (matriz1[1][0] * matriz2[0][0]) + (matriz1[1][1] * matriz2[1][0]);
    matriz3[1][1] = (matriz1[1][0] * matriz2[0][1]) + (matriz1[1][1] * matriz2[1][1]);

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Elemento [%d][%d] da matriz resultante: %d\n", i, j, matriz3[i][j]);
        }
    }

    return 0;
}