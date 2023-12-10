/*
Registro de Alunos:

Crie uma estrutura Aluno que possui um campo para o nome e um array de notas.
Escreva uma função que calcula e retorna a média das notas do aluno, recebendo a estrutura como parâmetro.

*/

struct Aluno{
    char nome[50];
    float notas[3];
} aln;

float media(struct Aluno aluno1 ){

    return((aluno1.notas[0]+aluno1.notas[1]+aluno1.notas[2])/3);
}

#include <stdio.h>

int main(){

    printf("Digite o nome: ");
    scanf("%s", aln.nome);

    printf("Digite a nota 1: ");
    scanf("%f", &aln.notas[0]);

    printf("Digite a nota 2: ");
    scanf("%f", &aln.notas[1]);

    printf("Digite a nota 3: ");
    scanf("%f", &aln.notas[2]);

    printf("A media do aluno %s eh %.2f.", aln.nome, media(aln));

    return 0;
}