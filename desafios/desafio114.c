/*
Retornar Substring: Elabore uma função que receba uma string, uma posição de início e um comprimento como parâmetros, aloque dinamicamente memória para armazenar a substring especificada e retorne um ponteiro para essa substring.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* pedaco(const char* string1, int inicio, int tamanho){
    char* resultado = (char*)malloc((tamanho + 1)* sizeof(char)) ;

    strncpy(resultado, string1+inicio, tamanho);

    return resultado;
}

int main(){
    const char *string1 = "Gilmar Alberto de Abreu Pinto";
    char *substring;
    system("config.bat");

    substring = pedaco(string1, 7, 7);

    printf("%s", substring);

    free(substring);
 
    return 0;
}