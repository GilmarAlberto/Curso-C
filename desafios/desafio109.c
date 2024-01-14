/*
Alocar Memória Dinamicamente para Inteiro: Crie uma função que receba um tamanho como parâmetro, aloque dinamicamente um array de inteiros desse tamanho e retorne um ponteiro para a primeira posição desse array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* alocacao(int tam){
    int *ptr;

    ptr = (int *) malloc(tam * sizeof(int));

    if(ptr == NULL){
        printf("Falha na alocação de memória!\n");
        return NULL;
    }

    return ptr;

}

int main(){
    system("config.bat");
    int tam;

    srand(time(NULL));

    tam = 1 + rand() % 100;

    int *vetor = alocacao(tam);

    if(vetor != NULL){
        printf("Memória alocada com sucesso no tamanho %d\n", tam);
        free(vetor);
    }


    return 0;
}