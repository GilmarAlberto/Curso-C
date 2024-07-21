/*
Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
array. A funcao devera preencher os elementos de array com esse valor. Nao utilize
 ́ındices para percorrer o array, apenas aritmetica de ponteiros
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void preencherArray(int *vetor, int num){

    int *ptr = vetor;
    int *end = vetor + 5;

    while (ptr < end) {
        *ptr = num;
        ptr++;
    }
    
}

int main(){
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    
    int vetor[5];

    preencherArray(vetor, 10);

    int *ptr = vetor;
    int *end = vetor + 5;  // Ponteiro para o fim do array

    while (ptr < end) {
        printf("%2d\n", *ptr);
        ptr++;
    }

    return 0;
}