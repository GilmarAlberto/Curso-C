/*
4. **Cadastro de Livros:**
   Crie uma struct para representar um livro com campos como título, autor e ano de publicação. Faça um programa que cadastre alguns livros e os exiba.
*/
#include <stdio.h>

struct livros {
    char titulo[50];
    char autor[50];
    int  anoPublicacao;
};

int main(){

    struct livros livro[3];

    for(int i = 0; i < 3; i++){
        printf("Titulo        : ");
        scanf("%s", &livro[i].titulo);
        printf("Autor         : ");
        scanf("%s", &livro[i].autor);
        printf("Ano Publicacao: ");
        scanf("%d", &livro[i].anoPublicacao);
    }

    printf("================================\n");
    for (int i = 0; i< 3; i++){
        printf("Titulo        : %s\n", livro[i].titulo);
        printf("Autor         : %s\n", livro[i].autor);
        printf("Ano Publicacao: %d\n", livro[i].anoPublicacao);

        printf("================================\n");

    }

    return 0;
}