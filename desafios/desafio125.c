/*
Crie uma função chamada trocarValores que recebe dois ponteiros para inteiros e troca os valores apontados por eles.

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void imprime(int* num1, int* num2){
    printf("P1: %d\n", *num1);
    printf("P2: %d\n", *num2);
}

void trocarValores(int* num1, int* num2){
    int aux;

    aux   = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){

    int* num1;
    int* num2;
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    num1 = (int*)malloc(sizeof(int));
    num2 = (int*)malloc(sizeof(int));
    
    *num1 = 10;
    *num2 = 20;

    imprime(num1, num2);
    trocarValores(num1, num2);
    imprime(num1, num2);

    free(num1);
    free(num2);

    return 0;
}