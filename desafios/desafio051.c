#include <stdio.h>
#include <stdlib.h>

/*
Inversão de Vetor: Crie um programa que receba um vetor de números e inverta a ordem dos elementos no vetor. Por exemplo, se o vetor for [1, 2, 3, 4, 5], após a inversão, deve se tornar [5, 4, 3, 2, 1].

*/

#define tam          5
#define falso        0
#define verdadeiro   1

int main(int argc, char** argv) {

    int vetor[tam], vetoraux[tam], i, temp;

    for (i=0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

      // Inverter o vetor
    for (i = 0; i < tam / 2; i++) {
        // Trocar o elemento i com o elemento correspondente no final do vetor
        temp = vetor[i];
        vetor[i] = vetor[tam - 1 - i];
        vetor[tam - 1 - i] = temp;
    }

    // Imprimir o vetor invertido
    printf("Vetor invertido: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }    

	
	return 0;
}
