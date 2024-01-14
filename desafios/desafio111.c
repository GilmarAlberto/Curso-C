/*
Encontrar Máximo em um Array: Implemente uma função que receba um array de inteiros e seu tamanho como parâmetros, encontre o elemento de valor máximo no array e retorne um ponteiro para esse elemento.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* encontraMaximo(int vetor[], int tam){
    int *max = &vetor[0], i;

    for(i = 1; i < tam; i++){
        if(vetor[i] > *max){
            max = &vetor[i];
        }
    }

    return max;

}

int main(){
    system("config.bat");
    int numeros[10], i;
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    srand(time(NULL));

    for(i = 0; i < tamanho; i++){
        numeros[i] = rand() % 101; // gera um número entre 0 e 100.
        printf("%d ", numeros[i]);
    }

    int *num = encontraMaximo(numeros, tamanho);

    printf("\nO maior número é %d \n", *num);
    
    return 0;
}