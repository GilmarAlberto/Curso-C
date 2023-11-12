/*
Multiplicação por Escalar:

Crie um vetor de inteiros.
Preencha o vetor com valores informados pelo usuário.
Peça ao usuário para inserir um número escalar.
Multiplique cada elemento do vetor pelo número escalar e imprima o vetor resultante.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho, i = 0, num;

    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho], resultado[tamanho];

    for(i=0; i<tamanho; i++){
        vetor[i] = rand() % 101; // Gera um número entre 0 e 100
        printf("%d ", vetor[i]);

    }
    
    printf("\nDigite o numero escalar: ");
    scanf("%d", &num);

    for(i=0; i<tamanho; i++){  
        resultado[i] = vetor[i] * num;
        printf("%d ", resultado[i]);
    }  

    return 0;
}