/*
Criar um vetor e organizar os dados
Os dados do vetor dever ser exibidos em ordem crescente
*/
#include <stdio.h>

#define tam          5
#define falso        0
#define verdadeiro   1

int main(int argc, char *argv[]){

    int vetor[tam], i, change = falso, final = tam, store;

    printf("Entre com o valor de %d elementos\n", tam);

    for(i = 0;i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    do{
        change = falso;
        for(i = 0; i < tam; i++){
            if(vetor[i] > vetor[i+1]){
                store = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = store;
                change = verdadeiro;
            }
        }
    }while(change);

    for(i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }

}
