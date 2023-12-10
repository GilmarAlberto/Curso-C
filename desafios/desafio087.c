/*
Verificação do Maior Número:
Declare uma estrutura Numeros com dois campos para armazenar números inteiros.
Implemente uma função que recebe a estrutura como parâmetro e retorna o maior número.
*/

#include <stdio.h>

struct Numeros{
    int num1;
    int num2;
} num;

int maior(struct Numeros num){

    return(num.num1>=num.num2 ? num.num1 : num.num2);
}

int main(){
    printf("Digite o primeiro numero: ");
    scanf("%d", &num.num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num.num2);

    printf("O maior numero eh %d\n", maior(num));

    return 0;
}