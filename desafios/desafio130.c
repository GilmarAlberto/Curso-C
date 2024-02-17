/*
Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int num1, num2;
    int *p1 = &num1;
    int *p2 = &num2;
    int *maiorEnd;

    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    maiorEnd = (p1 > p2 ? p1 : p2 );

    printf("Endereço num1: %p\n", (void*)p1);
    printf("Endereço num2: %p\n", (void*)p2);
    printf("Maior Endereço de Memória: %p\n",(void*)maiorEnd);
    printf("O valor no maior endereço é %d\n", *maiorEnd);
    
    return 0;
}