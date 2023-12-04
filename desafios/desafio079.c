/*
1. **Cadastro de Alunos:**
   Crie uma struct para representar um aluno com campos como nome, idade, e nota. Faça um programa que cadastre três alunos e exiba suas informações.

*/
#include <stdio.h>

struct alunos{
    char  nome[50];
    int   idade;
    float nota; 
};

int main(){
    struct alunos turma[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", &turma[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &turma[i].idade);
        printf("Digite a nota: ");
        scanf("%f", &turma[i].nota);
    }

    printf("================================\n");
    
    for (int i = 0; i < 3; i++){
        printf("Nome : %s\n", turma[i].nome);
        printf("Idade: %d\n", turma[i].idade);
        printf("Nota : %.2f\n", turma[i].nota);
        printf("================================\n");
    }

    return 0;
}