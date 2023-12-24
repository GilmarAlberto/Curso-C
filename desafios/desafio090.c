/*
Manipulação de Produtos:

Defina uma estrutura chamada Produto, com os campos nome, preço e quantidade em estoque.
Escreva uma função para cadastrar um novo produto, recebendo um ponteiro para a estrutura.
Implemente uma função para atualizar a quantidade em estoque de um produto, recebendo um ponteiro para a estrutura e a quantidade vendida.

*/
#include <stdio.h>
#include <stdlib.h>

struct Produto{
    char  nome[50];
    float preco;
    int   qtd;
} prod;

void CadProduto(struct Produto *prod){
    printf("==============================\n");

    printf("Nome      : ");
    scanf("%s", prod->nome);

    printf("Preço     : ");
    scanf("%f", &prod->preco);

    printf("Quantidade: ");
    scanf("%d", &prod->qtd);

}

void AtuProduto(struct Produto *prod, int qtd){
    prod->qtd = qtd;
}

int main(){
    system("config.bat");

    CadProduto(&prod);
    AtuProduto(&prod, 50);

    printf("Nome      : %s  \n", prod.nome);
    printf("Preço     : %.2f\n", prod.preco);
    printf("Quantidade: %d  \n", prod.qtd);

    return 0;
}

