/*
3. **Agenda de Contatos:**
   Crie uma struct para representar um contato com campos como nome, telefone e email. Implemente um programa que permita adicionar e listar contatos.
*/
#include <stdio.h>

struct agenda {
    char nome[50];
    char telefone[20];
    char email[50];
};

int main(){

    struct agenda contato[3];

    for(int i = 0; i < 3; i++){
        printf("Nome    : ");
        scanf("%s", &contato[i].nome);
        printf("Telefone: ");
        scanf("%s", &contato[i].telefone);
        printf("Email   : ");
        scanf("%s", &contato[i].email);
    }

    printf("================================\n");
    for (int i = 0; i< 3; i++){
        printf("Nome    : %s\n", contato[i].nome);
        printf("Telefone: %s\n", contato[i].telefone);
        printf("Email   : %s\n", contato[i].email);

        printf("================================\n");

    }

    return 0;
}