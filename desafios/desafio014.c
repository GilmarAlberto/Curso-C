/*
Escreva um programa que converta uma temperatura digitando em graus
Celsius e converta para graus Fahrenheit.

F = C x 1,8 + 32
*/

#include <stdio.h>

int main(){

    float celsus = 0;
    float far = 0;

    printf("Informe a temperadura em graus Celsus: ");
    scanf("%f", &celsus);

    far = celsus * 1.8 + 32;

    printf("A temperatura de %.2f graus celsus equivale a %.2f graus fahrenheit.", celsus, far);
    

    return 0;
}