#include <stdio.h>
#include <stdlib.h>

/*
Ordenação Crescente com Bubble Sort: Implemente o algoritmo de ordenação por bolhas (bubble sort) para ordenar um vetor de números em ordem crescente.
*/

#define tam          9
#define falso        0
#define verdadeiro   1

int main(int argc, char** argv) {

    int vetor[tam], vetoraux[tam], i, temp, troca;

    for (i=0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    while(verdadeiro){
        troca = falso;
        for(i=0;i<tam-1; i++){ 
            if(vetor[i]>vetor[i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                troca = verdadeiro;
            }
        }
        
        if(! troca){
            break;
        }
    }
    printf("Vetor Ordenado: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }  

	return 0;
}
