/*
Matriz Dinâmica: Escreva um programa que utilize a alocação dinâmica para criar uma matriz de inteiros. Preencha a matriz com valores e depois imprima seus elementos.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lin, col;

    system("config.bat");
    srand(time(NULL));

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &lin);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &col);

    // Use a matriz conforme necessário

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            matriz[i][j] = rand() % 101; // gera um número entre 0 e 100.
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Libere a memória alocada dinamicamente
    for (int i = 0; i < lin; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}





