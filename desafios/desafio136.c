/*
*** COM PONTEIRO ***
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma funcão que retorne a soma do dobro dos dois numeros lidos. A funcão deverá armazenar o dobro de A na propria variável A e o dobro de B na própria variável B. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void dobro(int* p1, int* p2){
    *p1 *= 2;
    *p2 *= 2;
}

int main(){
    int* num1 = (int*)malloc(sizeof(int));
    int* num2 = (int*)malloc(sizeof(int));
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Digite o primeiro número: ");
    scanf("%d", num1);

    printf("Digite o segundo número: ");
    scanf("%d", num2);

    printf("num1: %d, num2: %d\n", *num1, *num2);
    dobro(num1, num2);
    printf("num1: %d, num2: %d\n", *num1, *num2);
    
    free(num1);
    free(num2);

    return 0;
}