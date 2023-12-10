/*
Cadastro de Pessoas:

Crie uma estrutura chamada Pessoa que armazena nome, idade e altura.
Escreva uma função que recebe uma pessoa como parâmetro e a exibe.

*/
#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
} pess;

int mostraPess(struct Pessoa pess){
    
    printf("Nome  : %s\n", pess.nome);
    printf("Idade : %d\n", pess.idade);
    printf("Altura: %.2f\n", pess.altura);

    return 0;
}

int main(){
    
    printf("Nome  : ");
    scanf("%s",pess.nome);
    printf("Idade : ");
    scanf("%d",&pess.idade);
    printf("Altura: ");
    scanf("%f",&pess.altura);

    mostraPess(pess);

    return 0;
}