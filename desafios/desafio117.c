/*
Maior Valor em um Array: Escreva uma função que receba um array de inteiros e retorne o ponteiro para o elemento que contém o maior valor no array.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* encontraMaior(int num[], int tam) {
    int *maior = &num[0];

    for (int i = 1; i < tam; i++){
        if(num[i] > *maior){
            maior = &num[i];
        }
    }
    return maior;
}

int main(){
    system("config.bat");
    int numeros[10];
    int tam = sizeof(numeros) / sizeof(numeros[0]);

    srand(time(NULL));

    for(int i = 0; i < tam; i++){
        numeros[i] = rand() % 101; // gera um número entre 0 e 100.
        printf("%d ", numeros[i]);
    }

    int *num = encontraMaior(numeros, tam);

    printf("\nO maior número é %d \n", *num);

    return 0;
}