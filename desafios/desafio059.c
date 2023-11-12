/*
Escreva um programa em C que preencha uma matriz 5x5 com valores aleatórios entre 1 e 100. Em seguida, encontre e imprima o maior valor presente na matriz.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matriz[5][5];
    int maior = 0, i = 0, j = 0;

    srand(time(NULL));

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = rand() % 1001; // Gera um número entre 0 e 1000

            if(matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }

    printf("O maior numero encontrado foi: %d ", maior);

    return 0;
}