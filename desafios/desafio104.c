/*
Média de Dois Números Reais: Crie uma função chamada media que receba dois números reais como parâmetros e retorne a média aritmética desses números.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(float num1, float num2){
    return (num1 + num2) / 2;
}

int main(){
    float num1, num2, temp1, temp2;
    system("config.bat");

    srand(time(NULL));
    temp1 = rand() % 1001; // Gera um número entre 0 e 1000
    temp2 = rand() % 1001; // Gera um número entre 0 e 1000

    num1 = temp1 / 3;
    num2 = temp2 / 3;

    printf("A média entre %.2f e %.2f é %.2f", num1, num2, media(num1, num2));  

    return 0;
}