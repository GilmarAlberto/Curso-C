/*
Invertendo uma String: Escreva uma função que receba uma string como parâmetro e inverta a ordem dos caracteres usando ponteiros.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverte(const char* string){
    int tam = strlen(string) + 1;
    int i, j = strlen(string)-1;
    char* resultado = (char*)malloc(tam * sizeof(char));

    for(i = 0; i < tam ; i++){  // Ajuste aqui, excluindo o último caractere nulo
        resultado[j--] = string[i];
    }

    resultado[tam - 1] = '\0';  // Adiciona o caractere nulo ao final da string invertida
    
    return resultado;
}

int main(){
    const char* string1 = "Gilmar Alberto de Abreu Pinto";
    char* string2;

    //system("config.bat");

    string2 = inverte(string1);

    printf("%s", string2);

    free(string2);

    return 0;
}
