/*
4. Declarar um ponteiro para um array de inteiros e imprimir os valores do array.

*/
#include <stdio.h>

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int *ponteiro = vetor;
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    int i = 0;

    for(i=0; i<tam; i++){
        printf("ponteiro %d = %d\n", i, *(ponteiro+i));
    }

    return 0;
}