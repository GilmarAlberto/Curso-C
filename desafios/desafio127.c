/*
Implemente uma função chamada incrementoComPonteiro que recebe um ponteiro para um inteiro e incrementa o valor apontado por esse ponteiro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void incrementoComPonteiro(int* p){
    (*p)++;
}

int main(){
    int num;
    int *pont = &num;
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    srand(time(NULL));

    num = rand() % 1001;

    printf("Número: %4d\n", num);

    incrementoComPonteiro(pont);

    printf("Ponteiro: %4d\n", *pont);

    return 0;
}