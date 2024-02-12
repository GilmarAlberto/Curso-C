/*
Escreva um programa que contenha duas variáveis inteiras. Compare seus enderecos e
exiba o maior endereco
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int num1, num2;
    int *num3 = &num1;
    int *num4 = &num2;
    int *maior;
    char varMaior;

    maior    = (*num3 > *num4) ? num3 : num4;
    varMaior = (*num3 > *num4) ? '1' : '2';

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Endereço num1: %p\n", (void*)num3);
    printf("Endereço num2: %p\n", (void*)num4);
    printf("O maior endereço de memória é de %c com o valor %p", varMaior, (void*)maior);

    return 0;
}