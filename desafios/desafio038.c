/*
Implemente um loop "for" que calcule o fatorial de um número fornecido pelo usuário.
*/
#include <stdio.h>

int main(){

    int num=0;
    int fat=1;
    int i=1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        fat *=i;
    }

    printf("O fatorial de %d eh %d", num, fat);
    

    return 0;
}