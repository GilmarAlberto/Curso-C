/*
Diferença de tamanho entre struct e union
*/
#include <stdio.h>
#include <stdlib.h>

union estrutura01
{
    int inteiro;
    char caracter;
    float decimal;
};

struct estrutura02
{
    int inteiro2;
    char caracter2;
    float decimal2;
};


int main(){
    system("config.bat");

    printf("Union: %d\n", sizeof(union estrutura01));
    printf("Struct: %d\n", sizeof(struct estrutura02));

    return 0;
}