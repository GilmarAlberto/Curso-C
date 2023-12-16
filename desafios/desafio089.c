/*
Cadastro de Alunos:

Crie uma estrutura chamada Aluno, contendo os campos nome, idade e nota.
Implemente uma função para cadastrar um aluno, recebendo um ponteiro para a estrutura como parâmetro.
Implemente uma função para exibir os dados de um aluno, também recebendo um ponteiro para a estrutura como parâmetro.

*/
#include <stdio.h>
#include <locale.h>

struct Aluno
{
    char nome[50];
    int  idade;
    float nota;
};

void exibir(struct Aluno *al1){

    printf("===========================\n");
    printf("Nome: %s\n"   , al1->nome);
    printf("Idade: %d\n"  , al1->idade);
    printf("Nota: %.2f\n" , al1->nota);
}

void cadastrar(struct Aluno *al1){

    printf("===========================\n");

    printf("Nome: ");
    scanf("%s", al1->nome);

    printf("Idade: ");
    scanf("%d", &al1->idade);

    printf("Nota: ");
    scanf("%f", &al1->nota);

}

int main(){
    setlocale(LC_ALL,"Portuguese_Brasil");

    struct Aluno al;

    cadastrar(&al);
    exibir(&al);

    return 0;
}