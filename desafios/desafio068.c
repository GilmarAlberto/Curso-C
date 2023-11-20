/*
Atribuição de Ponteiro Nulo: Escreva um programa que declare um ponteiro e atribua a ele o valor nulo.

*/
#include <stdio.h>

int main(){

    int *ponteiro = NULL;

    printf("%p\n", (void *)ponteiro); // Usando %p para imprimir o endereço do ponteiro

    return 0;
}