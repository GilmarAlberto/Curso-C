/*
Soma dos Elementos:		
		
Crie um vetor de inteiros.		
Preencha o vetor com valores informados pelo usuário.		
Calcule e imprima a soma de todos os elementos do vetor.		

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho, i = 0, soma = 0;

    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i=0; i<tamanho; i++){
        vetor[i] = rand() % 101; // Gera um número entre 0 e 100
        printf("%d ", vetor[i]);
        soma += vetor[i];
    }
    printf("Soma: %d", soma);

    return 0;
}