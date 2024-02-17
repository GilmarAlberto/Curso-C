/*
Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do teclado. Em seguida, compare seus enderecos e exiba o conteudo do menor endereco
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int num1, num2;
    int *p1 = &num1, *p2 = &num2, *menor;
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    menor = (p1 < p2 ? p1 : p2);

    printf("Endereço de p1: %p\n", (void*)p1);
    printf("Endereço de p2: %p\n", (void*)p2);
    printf("Menor endereço de memória: %p\n", (void*)menor);
    printf("O valor no menor endereço de memória é: %d\n", *menor);

    return 0;
}