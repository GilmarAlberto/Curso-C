/*
5. Faça um programa que declare uma variável do tipo `double` e atribua a ela um valor decimal. Em seguida, exiba a parte inteira desse número.

*/
#include <stdio.h>

int main(){
    double num;

    num = 3.14;

    printf("a parte inteira de %f eh %d", num, (int)num);
    return 0;
}