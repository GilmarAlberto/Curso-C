#include <stdio.h>
#include <string.h>

/*

Vamos criar um exercício que abrange essas funções específicas em C:

Exercício: Manipulação de Strings em C
Implemente as seguintes funções em C:

void concatenarStrings(char destino[], const char origem[]): Utilize a função strcat para concatenar a string origem à string destino.

void concatenarNCaracteres(char destino[], const char origem[], int n): Utilize a função strncat para concatenar os primeiros n caracteres da string origem à string destino.

int compararStrings(const char str1[], const char str2[]): Utilize a função strcmp para comparar as strings str1 e str2.

int compararStringsIgnorandoCase(const char str1[], const char str2[]): Utilize a função strcmpi (ou uma implementação que ignore case) para comparar as strings str1 e str2.

int calcularComprimentoString(const char str[]): Utilize a função strlen para calcular e retornar o comprimento da string.

void converterParaMinusculas(char str[]): Utilize a função strlwr para converter todos os caracteres da string para minúsculas.

void converterParaMaiusculas(char str[]): Utilize a função strupr para converter todos os caracteres da string para maiúsculas.

void copiarString(char destino[], const char origem[]): Utilize a função strcpy para copiar a string origem para a string destino.

No programa principal (main), crie um conjunto de strings e demonstre o uso de cada uma das funções criadas.
*/

#include <stdio.h>
#include <string.h>

void concatenarStrings(char destino[], const char origem[]) {
    //Implementar a função usando strcat

    strcat(destino, origem);
}

void concatenarNCaracteres(char destino[], const char origem[], int n) {
    //Implementar a função usando strncat

    strncat(destino, origem, n);
}

int compararStrings(const char str1[], const char str2[]) {
    //Implementar a função usando strcmp

    return strcmp(str1, str2);
}

int compararStringsIgnorandoCase(const char str1[], const char str2[]) {
    //Implementar a função usando stricmp

    return stricmp(str1, str2);
}

int calcularComprimentoString(const char str[]) {
    //Implementar a função usando strlen

    return strlen(str);
}

void converterParaMinusculas(char str[]) {
    //Implementar a função usando strlwr

    strlwr(str);
}

void converterParaMaiusculas(char str[]) {
    // Implementar a função usando strupr

    strupr(str);
}

void copiarString(char destino[], const char origem[]) {
    //Implementar a função usando strcpy

    strcpy(destino, origem);
}

int main() {
    // Exemplo de uso

    char str1[50] = "Ola";
    char str2[50] = " Mundo!";
    char resultado[100];

    // Copiar String
    copiarString(resultado, str1);
    printf("Copiar String: %s\n", resultado);

 
    // Concatenar Strings
    concatenarStrings(resultado, str2);
    printf("Concatenar Strings: %s\n", resultado);

    // Concatenar N Caracteres
    concatenarNCaracteres(resultado, str1, 3);
    printf("Concatenar N Caracteres: %s\n", resultado);

    // Comparar Strings: 0 - igual; < 0 - antes; > 0 - depois 

    int comp = compararStrings(str2, "Ola");
    printf("Comparar Strings: %d\n", comp);

    // Comparar Strings Ignorando Case
    int compIgnorandoCase = compararStringsIgnorandoCase("OLÁ", "OLÁ");
    printf("Comparar Strings Ignorando Case: %d\n", compIgnorandoCase);

    // Calcular Comprimento da String
    int comprimento = calcularComprimentoString(str1);
    printf("Comprimento da String: %d\n", comprimento);

    // Converter para Minúsculas
    converterParaMinusculas(str1);
    printf("Converter para Minúsculas: %s\n", str1);

    // Converter para Maiúsculas
    converterParaMaiusculas(str1);
    printf("Converter para Maiúsculas: %s\n", str1);

 
    return 0;
}