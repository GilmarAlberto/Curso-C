/*
Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de 
boas-vindas.
*/

#include <stdio.h>

int main(){
    char nome[100];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Eh um prazer te conhecer, %s\n", nome);

    return 0;
}