/*
Média de Números: Crie um programa que solicita ao usuário que insira um conjunto de números em um vetor e calcule a média dos números inseridos.

*/

#include <stdio.h>

#define tam          5
#define falso        0
#define verdadeiro   1

int main(int argc, char *argv[]){

    int vetor[tam], i;
    float soma = 0;
    float media = 0;

    printf("Entre com o valor de %d elementos\n", tam);

    for(i = 0;i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        soma+=vetor[i];
    }

    media = soma/tam;
    
    printf("A media eh: %.2f", media);

    return(0);

}
