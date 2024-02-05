/*
Operações com Ponteiros e Estruturas: Crie uma estrutura que represente um livro (com título, autor e ano de publicação). Escreva funções que realizem operações como alterar o autor de um livro usando ponteiros 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

struct Livro
{
    char titulo[50];
    char autor[50];
    char ano[5];
};

void imprime(struct Livro *pLivro){

    printf("Titulo: %s\n", pLivro->titulo);
    printf("Autor : %s\n", pLivro->autor);
    printf("Ano   : %s\n", pLivro->ano);
}

void altera(struct Livro *pLivro){

    strcpy(pLivro->titulo, "1984");
    strcpy(pLivro->autor , "George Orwell");
    strcpy(pLivro->ano   , "1949");

}

int main(){
    struct Livro livro1;
    struct Livro *pLivro;

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    pLivro = &livro1;

    strcpy(pLivro->titulo, "O Pequeno Príncipe");
    strcpy(pLivro->autor , "Antoine de Saint-Exupéry");
    strcpy(pLivro->ano   , "1943");

    imprime(pLivro);
    altera(pLivro);
    imprime(pLivro);
    
    return 0;
}