/*
Ordenação Crescente:

Crie um vetor de inteiros.
Preencha o vetor com valores informados pelo usuário.
Ordene os elementos do vetor em ordem crescente e imprima o vetor resultante.10

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho, i = 0, mudou = 1, aux = 0;

    srand(time(NULL));

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i=0; i<tamanho; i++){
        vetor[i] = rand() % 101; // Gera um número entre 0 e 100
        printf("%d ", vetor[i]);

    }

    while(mudou == 1){
        mudou = 0;

        for(i=0; i<tamanho-1; i++){  
            if(vetor[i+1] < vetor[i]){
                aux = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = aux;
                mudou = 1;
            }
        }
    }

    printf("\n");
    
    for(i=0; i<tamanho; i++){  
        printf("%d ", vetor[i]);
    }  

    return 0;
}