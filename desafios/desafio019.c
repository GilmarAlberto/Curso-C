/*
Um professor quer sortear um dos seus quatro alunos para apagar o quadro.
Faça um programa que ajude ele, lendo o nome dos alunos e escrevendo na tela
nome do escolhido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char alunos[4][50];
    int escolhido;
    
    // Ler o nome dos alunos
    for (int i = 0; i < 4; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i]);
    }

    // Gerar um número aleatório entre 0 e 3 para escolher o aluno
    srand(time(NULL));
    escolhido = rand() % 4;

    // Exibir o nome do aluno escolhido
    printf("O aluno escolhido para apagar o quadro: %s\n", alunos[escolhido]);

    return 0;
}
