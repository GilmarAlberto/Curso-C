/*
Verificação de idade mínima: Crie um programa que pergunte a idade de uma pessoa e informe se ela pode ou não assistir a um filme para maiores de 18 anos.

*/
#include <stdio.h>

int main(){

    int idade=0;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("Pode assistir filme para maiores de 18 anos.");
    }
    else{
        printf("Nao pode assistir filme para maiores de 18 anos.");
    }

    return 0;
}