/*
Ordenação com Ponteiros: Escreva uma função que ordene um array de inteiros em ordem crescente usando ponteiros.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   
void ordenar(int *numeros, int tamanho) {
int aux;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (*(numeros + j) < *(numeros + i)) {
                // Troca os elementos se estiverem fora de ordem
                aux = *(numeros + i);
                *(numeros + i) = *(numeros + j);
                *(numeros + j) = aux;
            }
        }
    }
}

int main(){
    int tamanho = 10;
    int *numeros = (int *)malloc(tamanho * sizeof(int));

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        numeros[i] = rand() % 101;
        printf("%4d", numeros[i]);
    }

    printf("\n");
    
    ordenar(numeros, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%4d", numeros[i]);
    }

    free(numeros);

    return 0;
}