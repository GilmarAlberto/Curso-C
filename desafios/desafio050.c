/*
Maior e Menor Valor: Faça um programa que leia um vetor de inteiros e encontre o maior e o menor valor no vetor.
*/

#include <stdio.h>

#define tam          5
#define falso        0
#define verdadeiro   1

int main(int argc, char *argv[]){

    int vetor[tam], i, menor=0, maior=0;

    printf("Entre com o valor de %d elementos\n", tam);

    for(i = 0;i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        if(i == 0){
            menor = vetor[i];
            maior = vetor[i];
        }else if (vetor[i] < menor){
            menor = vetor[i];
        }else if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("O menor numero eh %d\n", menor);
    printf("O maior numero eh %d\n", maior);

    return 0;
}