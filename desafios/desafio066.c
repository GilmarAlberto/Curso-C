/*
Troca de Valores: Escreva um programa que declare duas variáveis inteiras, atribua valores a elas, e troque os valores usando ponteiros.

*/
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
