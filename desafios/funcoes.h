/*
Funcoes genericas 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* gera_vetor(int *tamanho){
    int* vetor;
    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", tamanho);

    vetor = malloc(*tamanho * sizeof(int));

    for(int i=0; i<*tamanho; i++){
        vetor[i] = rand() % 101; // Gera um número entre 0 e 100
    }

     return vetor;
}

