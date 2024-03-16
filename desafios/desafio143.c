/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
    int vetor[5];
    int *ptr = vetor;

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        *(ptr + i) = rand() % 101;
        printf("%4d", *(ptr + i));
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%4d", *(ptr + i) * 2);
    }

    return 0;
}