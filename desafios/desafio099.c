/*
Soma de Dois Números: Crie uma função chamada soma que aceite dois números inteiros como parâmetros e retorne a soma desses números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma (int num1, int num2){
    return num1 + num2;
}

int main(){
    system("config.bat");
    int num1, num2;

    srand(time(NULL));

    num1 = rand() % 1001; // Gera um número entre 0 e 1000
    num2 = rand() % 1001; // Gera um número entre 0 e 1000

    printf("A soma de %d + %d é %d", num1, num2, soma(num1, num2));

    return 0;
}