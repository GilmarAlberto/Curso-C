/*
Soma de Matrizes Dinâmicas: Escreva um programa que utilize a alocação dinâmica para criar duas matrizes de inteiros. Realize a soma das matrizes e imprima o resultado.

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){

    int **matriz1 = (int**)malloc(10 * sizeof(int*));
    int **matriz2 = (int**)malloc(10 * sizeof(int*));
    int **matriz3 = (int**)malloc(10 * sizeof(int*));

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    
    srand(time(NULL)); //inicializar a semente do gerador de números randômicos

    //Alocação de memória e popular com números aleatórios
    for(int i = 0; i < 10; i++){

        matriz1[i] = (int*)malloc(10 * sizeof(int));
        matriz2[i] = (int*)malloc(10 * sizeof(int));
        matriz3[i] = (int*)malloc(10 * sizeof(int));

        if(matriz1[i] == NULL || matriz2[i] == NULL || matriz3[i] == NULL){
                printf("Falha na alocação de memória!");
                return(1);
        }

        for(int j = 0; j < 10; j++){ 

            matriz1[i][j] = rand() % 101; // números de 0 a 100
            matriz2[i][j] = rand() % 101; // números de 0 a 100

            matriz3[i][j] = matriz1[i][j] + matriz2[i][j]; //soma dos elementos das duas matrizes

        }

    
    }

    printf("***** MATRIZ 1 *****\n");
    for(int i = 0; i < 10; i++){  
        for(int j = 0; j < 10; j++){
            printf("%4d", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("***** MATRIZ 2 *****\n");
    for(int i = 0; i < 10; i++){  
        for(int j = 0; j < 10; j++){
            printf("%4d", matriz2[i][j]);
        }
        printf("\n");
    }
    
    printf("***** MATRIZ 3 *****\n");
    for(int i = 0; i < 10; i++){  
        for(int j = 0; j < 10; j++){
            printf("%4d", matriz3[i][j]);
        }
        printf("\n");
    }


    //Desalocação de memória.
    for (int i = 0; i < 10; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }

    free(matriz1);
    free(matriz2);
    free(matriz3);
    
    return 0;
}