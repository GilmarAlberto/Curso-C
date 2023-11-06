/*
**Descrição do Programa: Manipulação de Strings em Ansi C**

Este programa em Ansi C consiste em uma série de funções para manipulação de strings. As funções incluem:

1. **Inverter String:** Uma função que inverte os caracteres de uma string.

2. **Contar Vogais:** Uma função que conta o número de vogais em uma string.

3. **Remover Espaços:** Uma função que remove os espaços em branco de uma string.
4. **Substituir Caractere:** Uma função que substitui todas as ocorrências de um caractere por outro em uma string.


O programa realiza testes dessas funções em duas strings diferentes, exibindo os resultados na saída padrão. Certifique-se de implementar cada função corretamente para garantir o funcionamento adequado do programa.

*/

#include <stdio.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char *str) {
    int vai = 0;
    int vem = strlen(str)-1;
    char temp[strlen(str)+1];

    for (vai = 0; vai < strlen(str); vai++){
        temp[vem] = str[vai];
        vem -= 1;
    }

    temp[strlen(str)] = '\0';

    strcpy(str,temp);
}

// Função para contar vogais em uma string
int contarVogais(char *str) {
    int total = 0;
    int i = 0;

    for(i=0; i<strlen(str); i++){
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                total+=1;
                break;
        }
    }
    return total;
}

// Função para remover espaços em branco de uma string
void removerEspacos(char *str) {
    char temp[strlen(str)+1];
    int i = 0;
    int j = 0;
    for(i=0; i< strlen(str); i++){
        if(str[i] != ' '){
            temp[j] = str[i];
            j++;
        }
    }

    temp[strlen(str)] = '\0';

    strcpy(str,temp);

}

// Função para substituir um caractere em uma string
void substituirCaracter(char *str, char caractereSubstituir, char caractereSubstituicao) {
    int i=0;

    for(i=0; i< strlen(str); i++){
        if(str[i]==caractereSubstituir){
            str[i] = caractereSubstituicao;
        }

    }
}

int main() {
    // Teste das funções
    char string1[] = "Hello, World!";
    char string2[] = "Programming is fun!";
    
    // Teste da função inverterString
    inverterString(string1);
    printf("String invertida: %s\n", string1);

    // Teste da função contarVogais
    printf("Numero de vogais em '%s': %d\n", string2, contarVogais(string2));

    // Teste da função removerEspacos
    removerEspacos(string2);
    printf("String sem espacos: %s\n", string2);

    // Teste da função substituirCaracter
    substituirCaracter(string1, 'o', 'x');
    printf("String com 'o' substituido por 'x': %s\n", string1);

    return 0;
}
