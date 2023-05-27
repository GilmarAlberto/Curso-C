 /*
 Faça um programa que leia um número inteiro e mostre na tela
 o seu sucessor e antecessor.
*/
#include <stdio.h>

int main(){
    int n1 = 0;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    
    printf("O seu sucessor eh %d\n", n1+1);
    printf("O seu antecessor eh %d\n", n1-1);

    return 0;

}