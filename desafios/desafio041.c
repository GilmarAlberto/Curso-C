/*
Escreva um loop "for" aninhado que imprima um padrão de estrelas no formato de um triângulo retângulo. O triângulo deve ter 5 linhas, começando com uma estrela na primeira linha, duas estrelas na segunda linha e assim por diante, até cinco estrelas na última linha.

*/
#include <stdio.h>

int main(){

    int i = 1, j = 1;

    for(i=1; i<=5; i++){

        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }

    return 0;
}