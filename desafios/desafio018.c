/*
Faça um programa que leia um ângulo qualquer e mostre na tela o
valor do seno, cosseno e tangente desse ângulo.
*/
#include <stdio.h>
#include <math.h>

int main(){

    double graus = 0, seno = 0, coss = 0, tang = 0, radiano = 0, pi = 3.14159265358979323846;

    

    printf("Digite um angulo: ");
    scanf("%lf", &graus);

    radiano = graus * pi / 180;

    seno = sin(radiano);
    coss = cos(radiano);
    tang = tan(radiano);

    printf("O seno de %.2f eh %.2f\n",graus, seno);
    printf("O cosseno de %.2f eh %.2f\n", graus, coss);
    printf("A tangente de %.2f eh %.2f\n", graus, tang);

    return 0;
}