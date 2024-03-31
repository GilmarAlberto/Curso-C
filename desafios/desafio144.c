/*
Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    int vetor[5];               
    
    srand(time(NULL));

    // Preenche o array com números aleatórios e imprime-os
    printf("Array original:\n");

    for(int i = 0; i < 5; i++){
        vetor[i] = rand() % 101;
        printf("%d ", vetor[i]);
    }

    // Verifica os valores pares e imprime o endereço das posições
    printf("\nPosições contendo valores pares:\n");

    for(int i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            printf("%d - %3d - %p\n", i, vetor[i], (void *)&vetor[i]);
        }
    }

    return 0;
}