/*
Maior Entre Três Números: Implemente uma função chamada maiorNumero que receba três números inteiros como entrada e retorne o maior entre eles.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorNumero(int num1, int num2, int num3){
    int maior;

    maior = num1;

    if(num2 > maior){
        maior = num2;
    }

    if(num3 > maior){
        maior = num3;
    }

    return maior;
}

int main(){
    int num1, num2, num3;
    system("config.bat");

    srand(time(NULL));

    num1 = rand() % 1001; // Gera um número entre 0 e 1000
    num2 = rand() % 1001; // Gera um número entre 0 e 1000
    num3 = rand() % 1001; // Gera um número entre 0 e 1000

    printf("O maior número entre %d, %d e %d é %d", num1, num2, num3, maiorNumero(num1, num2, num3));

    return 0;
}