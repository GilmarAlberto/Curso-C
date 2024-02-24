/*
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereco de cada posicao desse array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
    //SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows.

    srand(time(NULL));

    float vetor[10];

    for(int i = 0; i < 10; i++){
        vetor[i] = (rand() % 101) / 3.0;
        printf("%.2f ", vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("\n%p ", (void *) &vetor[i]);
    }

    return 0;
}