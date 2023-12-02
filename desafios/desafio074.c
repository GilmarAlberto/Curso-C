/*
11. Escreva uma função que recebe um array de números inteiros e retorna o valor médio do array.

*/
#include <stdio.h>
#include "funcoes.h"

int main(){
    int tamanho = 0, soma = 0;
    float media = 0;
    int* vetor = gera_vetor(&tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
        soma += vetor[i];
    }

    media = (float)soma / tamanho;

    printf("\nA media eh %.2f\n", media);

    free(vetor);

    return 0;
}