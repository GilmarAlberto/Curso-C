/*
Concatenar Strings: Crie uma função que receba duas strings como parâmetros, aloque dinamicamente memória para armazenar a concatenação dessas strings e retorne um ponteiro para a nova string resultante.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatena(const char *string1, const char *string2){
    int   tamanho   = strlen(string1) + strlen(string2) + 1;
    char* resultado = (char*)malloc(tamanho * sizeof(char));

    if (resultado == NULL) {
        // Tratar erro de alocação de memória, se necessário
        exit(EXIT_FAILURE);
    }

    strcpy(resultado, string1);
    strcat(resultado, string2);

    return resultado;

}

int main(){
    const char *string1 = "Hello ";
    const char *string2 = "World!";
    char *string3;
    
    string3 = concatena(string1, string2);

    printf("%s\n", string3);

    free(string3);

    return 0;
}