/*
Escreva uma função chamada somaArrays que recebe dois arrays de inteiros e um ponteiro para um inteiro. A função deve calcular a soma dos elementos correspondentes dos dois arrays e armazenar o resultado no local apontado pelo ponteiro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void popula(int* vet1, int* vet2, int tam){
    for(int i = 0; i < tam; i++){
        vet1[i] = rand() % 101;
        vet2[i] = rand() % 101;
    }

}

void somaArrays(int* vet1, int* vet2, int* vet3, int tam){

    for(int i = 0; i < tam; i++){
        vet3[i] = vet1[i] + vet2[i];
    }
}

void imprime(int *vet, const char* msg, int tam){
    printf("**** %s ****\n", msg);

    for(int i = 0; i < tam; i++){
        printf("%4d ", vet[i]);
    }

    printf("\n");

}

int main(){
    int tam = 10;
    int* vetor1 = (int*)(malloc(tam * sizeof(int)));
    int* vetor2 = (int*)(malloc(tam * sizeof(int)));
    int* vetor3 = (int*)(malloc(tam * sizeof(int)));

    if(vetor1 == NULL || vetor2 == NULL || vetor3 == NULL){
        printf("Erro na criação dos vetores!");
        return 1;
    }
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    srand(time(NULL));

    popula(vetor1, vetor2, tam);

    somaArrays(vetor1, vetor2, vetor3, tam);

    imprime(vetor1, "Vetor 1", tam);
    imprime(vetor2, "Vetor 2", tam);
    imprime(vetor3, "Vetor 3", tam);

    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}