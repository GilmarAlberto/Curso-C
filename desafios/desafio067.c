/*
Incremento usando Ponteiros: Escreva um programa que declare uma variável inteira, atribua um valor a ela, e depois incremente o valor usando um ponteiro.

*/
#include <stdio.h>

int main(){

    int x = 10;
    int *ponteiro = &x;

    (*ponteiro)++;

    printf("x=%d", x);



    return 0;
}