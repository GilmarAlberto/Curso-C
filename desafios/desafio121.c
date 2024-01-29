/*
Struct com Ponteiros: Crie uma struct que represente um ponto no plano cartesiano (com coordenadas x e y). Escreva funções que calculem a distância entre dois pontos usando ponteiros.

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

// Definição da struct
struct Ponto {
    float x;
    float y;
};

// Função para calcular a distância entre dois pontos usando ponteiros
float calcularDistancia(struct Ponto* ponto1, struct Ponto* ponto2) {
    float distancia = sqrt(pow((ponto2->x - ponto1->x), 2) + pow((ponto2->y - ponto1->y), 2));
    return distancia;
}

int main() {
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    // Exemplo de utilização
    struct Ponto pontoA = {2.0, 3.0};
    struct Ponto pontoB = {5.0, 7.0};

    // Chamar a função para calcular a distância
    float distancia = calcularDistancia(&pontoA, &pontoB);

    // Exibir o resultado
    printf("A distância entre os pontos é: %f\n", distancia);

    return 0;
