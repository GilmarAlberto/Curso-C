/*
Gestão de Carros:

Crie uma estrutura chamada Carro para armazenar a marca, modelo e ano de fabricação.
Escreva uma função para cadastrar um novo carro, recebendo um ponteiro para a estrutura.
Implemente uma função para exibir as informações de um carro, recebendo um ponteiro para a estrutura.

*/
#include <stdio.h>
#include <stdlib.h>

struct Carro{
    char marca[20];
    char modelo[20];
    int  anoFabr;
} car;

void cadastrar(struct Carro *carro){
    printf("Marca         : ");
    scanf("%s", carro->marca);

    printf("Modelo        : ");
    scanf("%s", carro->modelo);

    printf("Ano Fabricação: ");
    scanf("%d", &carro->anoFabr);
}

void exibir(struct Carro *carro){
    printf("=============================\n");
    printf("Marca         : %s \n", carro->marca);
    printf("Modelo        : %s \n", carro->modelo);
    printf("Ano Fabricação: %d \n", carro->anoFabr);
}



int main(){
    system("config.bat");

    cadastrar(&car);
    exibir(&car);

    return 0;
}