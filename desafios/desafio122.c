/*
Cópia de Array usando Ponteiros: Escreva uma função que receba dois arrays de inteiros e copie o conteúdo de um array para o outro usando ponteiros.

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int* clonar(int *vet1, int *vet2, int tamanho){
    int tam = tamanho * sizeof(int);
    memcpy(vet2, vet1, tam);

    return(vet2);
}

void imprimirVetor(const char* nome, int *vetor, int tamanho) {
    printf("***** %s *****\n", nome);
    for (int i = 0; i < tamanho; i++) {
        printf("%4d", vetor[i]);
    }
    printf("\n");
}

int main(){
    int tamanho = 10;
    int *vetor1 = (int*)malloc(tamanho * sizeof(int));
    int *vetor2 = (int*)malloc(tamanho * sizeof(int));

    if (vetor1 == NULL || vetor2 == NULL) {
        fprintf(stderr, "Erro na alocação de memória.\n");
        return 1; // Código de retorno indicando erro
    }

    srand(time(NULL));

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows.

    for(int i = 0; i < tamanho; i++){
        vetor1[i] = rand() % 101;
    }

    imprimirVetor("VETOR 1", vetor1, tamanho);
    clonar(vetor1, vetor2, tamanho);
    imprimirVetor("VETOR 2", vetor2, tamanho);

    free(vetor1);
    free(vetor2);

    return 0;
}