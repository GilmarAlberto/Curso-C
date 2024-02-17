/*
Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas variaveis A e B por exemplo e, apos a execucao da funcao, A tera o valor de B e B tera o valor de A.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void inverte(int* p1, int* p2){
    int aux;

    aux  = *p1;
    *p1  = *p2;
    *p2  = aux;
}

int main(){

    int *num1 = (int*)malloc(sizeof(int));
    int *num2 = (int*)malloc(sizeof(int));
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Digite o primeiro número: ");
    scanf("%d", num1);

    printf("Digite o segundo número: ");
    scanf("%d", num2);

    printf("num1 = %d, num2 = %d\n", *num1, *num2);

    inverte(num1, num2);

    printf("num1 = %d, num2 = %d\n", *num1, *num2);

    free(num1);
    free(num2);

    return 0;
}