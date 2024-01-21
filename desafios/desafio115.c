/*
Cópia de String usando Ponteiros: Escreva uma função que receba duas strings como parâmetros (uma origem e uma destino) e copie o conteúdo da string de origem para a string de destino usando ponteiros.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clonar( const char* string1, char* string2){
    strcpy(string2, string1);
}

int main(){
    const char* string1 = "Hello World!";
    char string2[20];
    system("config.bat");

    clonar(string1, string2);

    printf("%s", string2);



    return 0;
}