/*
O mesmo professor do desafio 019 quer sortear a ordem de apresentação
de trabalhos dos alunos. Faça um programa que leia o nome dos quatro
alunos e mostre a ordem sorteada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char alunos[4][50];
    int ordem[4];
    int i, j, temp;

    // Ler o nome dos alunos
    for (i = 0; i < 4; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i]);
    }

    // Gerar uma ordem aleatória
    srand(time(NULL));
    for (i = 0; i < 4; i++) {
        ordem[i] = i;
    }
    for (i = 3; i > 0; i--) {
        j = rand() % (i + 1);
        temp = ordem[i];
        ordem[i] = ordem[j];
        ordem[j] = temp;
    }

    // Exibir a ordem sorteada
    printf("Ordem de apresentacao dos trabalhos:\n");
    for (i = 0; i < 4; i++) {
        printf("%d. %s\n", i+1, alunos[ordem[i]]);
    }

    return 0;
}
