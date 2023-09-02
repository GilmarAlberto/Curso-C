/*
Exercício 2: Soma dos Números Crie um programa que utilize um loop do while para calcular a soma dos números de 1 a 10 e, em seguida, exiba o resultado.
*/

#include <stdio.h>

int main(){

    int i = 1, soma = 0;

    do{
        soma += i++;
    }while(i<=10);

    printf("O resultado da soma dos 10 primeiros numeros eh: %d", soma);

    return 0;
}