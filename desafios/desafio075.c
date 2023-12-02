/*
Para o exercício 11, você pode usar um ponteiro para percorrer o array e acumular a soma dos valores apontados pelo ponteiro.

*/
#include <stdio.h>
#include "funcoes.h"

int main(){
    int tamanho = 0, soma = 0;
    int *vetor = gera_vetor(&tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", *(vetor+i));
        soma += *(vetor+i);
    }

    printf("\nA soma dos valores do vetor eh de %d", soma);

    free(vetor);

    return 0;
}