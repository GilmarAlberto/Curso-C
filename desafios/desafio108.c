/*
Média Ponderada: Implemente uma função chamada mediaPonderada que receba três notas e seus respectivos pesos como parâmetros e retorne a média ponderada dessas notas.

MP = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3)

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float mediaPonderada(int nota1, int peso1, int nota2, int peso2, int nota3, int peso3){

    return (float)(nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
}

int main(){
    system("config.bat");
    int nota1, nota2, nota3, peso1, peso2, peso3;

    srand(time(NULL));

    nota1 = rand() % 11; //nota de 0 a 10
    nota2 = rand() % 11;
    nota3 = rand() % 11;

    peso1 = 1 + rand() % 3; //peso de 1 a 3
    peso2 = 1 + rand() % 3;
    peso3 = 1 + rand() % 3;

    printf("Nota 1: %d - peso: %d\n", nota1, peso1);
    printf("Nota 2: %d - peso: %d\n", nota2, peso2);
    printf("Nota 2: %d - peso: %d\n", nota3, peso3);
    printf("Media Ponderada: %.2f\n", mediaPonderada(nota1, peso1, nota2, peso2, nota3, peso3));

    return 0;
}