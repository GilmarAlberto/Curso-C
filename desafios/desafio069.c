/*
Alocação Dinâmica Simples: Escreva um programa que use a alocação dinâmica para criar uma variável inteira e atribuir um valor a ela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro = malloc(sizeof(int));

    if (ponteiro != NULL) {

        printf("%p\n", (void *)ponteiro); // Usando %p para imprimir o endereço da memória alocada

        *ponteiro = 10;

        printf("Conteudo do ponteiro: %d\n", *ponteiro);

        free(ponteiro); // Libera a memória alocada dinamicamente
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}
