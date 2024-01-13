/*
Fatorial: Desenvolva uma função chamada fatorial que aceite um número inteiro como parâmetro e retorne o fatorial desse número.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int num1){
    int fat = 1, i = 0;

    if(num1 == 0){
        return 1;
    }

    for(i=num1; i > 0; i--){
        fat *= i;
    }

    return fat;
}

int main(){
    int num1;
    system("config.bat");

    srand(time(NULL));

    num1 = rand() % 11; // Gera um número entre 0 e 10

    printf("O fatorial de %d é %d.", num1, fatorial(num1));

    return 0;
}