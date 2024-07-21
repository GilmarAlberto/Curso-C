/*
Elabore uma funcao que receba duas strings como parametros e verifique se a segunda
strin g ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres 
das strings.

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Função para encontrar o comprimento da string usando aritmética de ponteiros
int stringLength(const char* str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

// Função para verificar se a segunda string ocorre dentro da primeira usando aritmética de ponteiros
void encontraString(const char* string1, const char* string2) {
    int tam1 = stringLength(string1);
    int tam2 = stringLength(string2);
    /int found = 0;

    const char *ptr1 = string1;
    const char *ptr2;

    printf("%s\n", string1);
    printf("%s\n", string2);

    while (*ptr1 != '\0' && (ptr1 + tam2 - string1) <= tam1) {
        ptr2 = string2;
        const char *tempPtr = ptr1;
        while (*ptr2 != '\0' && *tempPtr == *ptr2) {
            tempPtr++;
            ptr2++;
        }
        if (*ptr2 == '\0') {
            found = 1;
            break;
        }
        ptr1++;
    }

    if (found) {
        printf("\nOcorre dentro da primeira!\n");
    } else {
        printf("\nNão ocorre dentro da primeira.\n");
    }
}

int main() {
    SetConsoleOutputCP(65001); // Permite a acentuação, mas só funciona no Windows.
    
    const char *string1 = "Gilmar Alberto de Abreu Pinto";
    const char *string2 = "Abreu";

    encontraString(string1, string2);

    return 0;
}
