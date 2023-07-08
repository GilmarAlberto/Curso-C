/*
4. Faça um programa que solicite ao usuário o raio de um círculo e calcule a área desse círculo (use a fórmula: área = π * raio²). Em seguida, exiba a área na tela.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(){

    float raio = 0.0;
    float area = 0.0;
    
    printf("Digite o raio de um circulo: ");
    scanf("%f",&raio);

    area = PI * pow(raio,2);

    printf("A area do raio %.2f eh %.2f", raio, area);



    return 0;
}