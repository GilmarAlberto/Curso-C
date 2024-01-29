/*
Média de Ponteiros: Escreva uma função que receba um array de números reais e retorne a média dos valores usando ponteiros.


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

float* funcMedia(float numeros[], int tam){
    float *media = (float*)malloc(sizeof(float));

    if(media == NULL){
        exit(EXIT_FAILURE);
    }

    *media = 0.00;

    for(int i = 0; i < tam; i++){

        *media += numeros[i];
    }

    *media /= tam;

    return media;

}

int main(){
    int tamanho = 10;
    float *numeros = (float *)malloc(tamanho * sizeof(float));
    float *media = (float*)malloc(sizeof(float));

     if(numeros == NULL || tamanho <= 0){
        exit(EXIT_FAILURE);
    }

    SetConsoleOutputCP(65001);

    srand(time(NULL));

    for(int i = 0; i < tamanho; i++){
        numeros[i] = (float)(rand() % 901 + 100) / 3.0;
        printf("%8.2f", numeros[i]);
    }

    printf("\n");
    
    media = funcMedia(numeros, tamanho);

    printf("A media é %.2f", *media);

    free(numeros);
    free(media);

    return 0;
}