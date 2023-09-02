/*
Exercício 4: Números Pares Escreva um programa que use um loop do while para imprimir todos os números pares de 2 até o número digitado pelo usuário, um em cada linha.

*/
#include <stdio.h>

int main(){

    int num = 0, i = 2;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do{
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }while(i<=num);
    

    return 0;
}