/*
Área de Retângulo:

Defina uma estrutura Retangulo com campos para comprimento e largura.
Implemente uma função que recebe um retângulo como parâmetro e retorna a área.

*/
#include <stdio.h>

struct Retangulo{
    float comprimento;
    float largura;
} retangulo;

float calcularArea(struct Retangulo r){

    return r.comprimento * r.largura;
}

int main(){

    printf("Digite o comprimento: ");
    scanf("%f", &retangulo.comprimento);
    printf("Digite a largura: ");
    scanf("%f", &retangulo.largura);

    printf("A area do retangulo eh %.2f",calcularArea(retangulo));

    return 0;
}