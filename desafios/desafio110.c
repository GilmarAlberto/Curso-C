/*
Copiar String: Desenvolva uma função que receba uma string como parâmetro, aloque dinamicamente memória para uma cópia dessa string e retorne um ponteiro para a nova string.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copia (char* point){
    char* ptr;
    int tam = strlen(point);

    ptr = (char *) malloc((tam + 1) * sizeof(char));

    strcpy(ptr, point);

    return ptr;
}

int main(){
    char *point1, *point2;

    system("config.bat");

    point1 = "Gilmar Alberto de Abreu Pinto";

    point2 = copia(point1);

    printf("O valor do segundo ponteiro é %s\n", point2);

    free(point2);

    return 0;
}