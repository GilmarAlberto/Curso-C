/*
7. Crie um programa que declare uma variável do tipo `short` e atribua a ela um número. Em seguida, exiba o quadrado desse número.

*/
#include <stdio.h>

int main(){
    short num;

    num = 4;

    printf("O quadrado de %d eh %d", num, num*num);

    return 0;
}