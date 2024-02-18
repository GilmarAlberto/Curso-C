/*
*** COM PONTEIRO ***
Crie um programa que contenha uma funçao que permita passar por parametro dois numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void soma(int* p1, int* p2){
    *p1 += *p2;
}

int main(){
    int* num1 = (int*)malloc(sizeof(int));
    int* num2 = (int*)malloc(sizeof(int));
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows.

    printf("Digite num1: ");
    scanf("%d", num1);

    printf("Digite num2: ");
    scanf("%d", num2);

    printf("num1: %d, num2: %d\n", *num1, *num2);

    soma(num1, num2);

    printf("num1: %d, num2: %d\n", *num1, *num2);

    free(num1);
    free(num2);

    return 0;
}