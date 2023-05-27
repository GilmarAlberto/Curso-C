/*
Faça um programa que leia a largura e a altura de uma parede em metro, calcule 
a sua área e a quantidade de tinta necessaria para pinto-la, sabendo que cada 
litro de tinta pinta uma área de 2m²
*/
#include <stdio.h>

int main(){
    float largura = 0;
    float altura = 0;
    float area = 0;
    float qtd_tinta = 0;

    printf("Digite a largura da parede: ");
    scanf("%f", &largura);

    printf("Digite a altura da parede: ");
    scanf("%f", &altura);

    area = largura * altura;
    qtd_tinta = area/2;

    printf("Sua parede tem dimensão de %.2f x %.2f e a area eh de %.2fm\n", largura, altura, area);
    printf("Para pintar essa parede voce precisara de %.2f litros de tinta.", qtd_tinta);

    return 0;
}