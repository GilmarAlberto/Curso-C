/*
Crie um vetor de inteiros.					
Preencha o vetor com valores informados pelo usuário.					
Encontre e imprima o maior e o menor elemento do vetor.					

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho, i = 0, maior = 0, menor = 0;

    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i=0; i<tamanho; i++){
        vetor[i] = rand() % 101; // Gera um número entre 0 e 100
        printf("%d ", vetor[i]);

        if(i==0){
            menor = vetor[i];
            maior = vetor[i];
        }else if(vetor[i] < menor){
            menor = vetor[i];
        }else if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("\nMenor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}