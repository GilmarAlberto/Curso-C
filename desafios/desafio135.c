/*
*** SEM PONTEIRO ***
 Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na segunda variavel. Escreva o conteudo das 2 variaveis na tela
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void menorMaior(int* p1, int* p2){
    int aux;

    if(*p2 > *p1){
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
}

int main(){
    int num1, num2;
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("num1: %d, num2: %d\n", num1, num2);

    menorMaior(&num1, &num2);
8
    printf("num1: %d, num2: %d\n", num1, num2);

    return 0;
}