/*
10. Crie um programa que declare uma variável do tipo `long double` e atribua a ela um valor decimal. Em seguida, exiba o valor dessa variável dividido por 3.

*/
#include <stdio.h>
#include <math.h>

int main() {
    long double num = 3.141592653589793;
    long double resultado = num / 3;

    char buffer[100];
    snprintf(buffer, sizeof(buffer), "%.15Lf", resultado);

    printf("O valor dividido por 3 eh: %s\n", buffer);

    return 0;
}

