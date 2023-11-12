/*
Gere uma matriz 3x3 e, em seguida, substitua todos os números pares por 0 e todos os números ímpares por 1. Imprima a matriz resultante.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matriz[3][3];
    int i = 0, j = 0;

    srand(time(NULL));

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j] = rand() % 1001; // Gera um número entre 0 e 1000

            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            if(matriz[i][j]%2 == 0)
                matriz[i][j] = 0;
            else
                matriz[i][j] = 1;

            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }

    

    return 0;
}