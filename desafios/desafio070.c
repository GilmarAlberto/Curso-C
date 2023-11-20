/*
Declarar um ponteiro para uma variável inteira e atribuir um valor a ele.

*/
#include <stdio.h>

int main(){
    int valor = 10;
    int *ponteiro = &valor;

    printf("ponteiro = %d\n", *ponteiro);

    return 0;
}