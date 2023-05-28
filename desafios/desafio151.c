/*
6. Faça um programa que solicite ao usuário um número inteiro e verifique se esse número é par ou ímpar. Exiba na tela uma mensagem indicando o resultado.

*/
#include <stdio.h>

int main(){

    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("O numero %d eh par!", num);
    }
    else{
        printf("O numero %d eh impar!", num);
    }

    return 0;
}