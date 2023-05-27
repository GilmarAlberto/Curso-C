#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    getchar();
    printf("O numero digitado foi: %d", numero);
}