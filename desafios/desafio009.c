/*
Faça um programa que leia um número inteiro qualquer e mostre na tela a a sua 
tabuada.
*/
#include <stdio.h>

int main(void){

    int num = 0;
    int i = 0;

    printf("Digite o numero que deseja a Tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do numero %d\n", num);
    printf("********************\n");


    for (i = 1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }




    return 0;
}