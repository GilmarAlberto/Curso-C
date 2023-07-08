/*
7. Faça um programa que solicite ao usuário três números inteiros e determine qual deles é o maior. Em seguida, exiba o maior número na tela.

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 0, num2 = 0, num3 = 0, maior = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        maior = num1;
    }
    else if(num2 > num3){
        maior = num2;
    }
    else{
        maior = num3;
    }

    printf("O maior numero entre %d, %d e %d eh %d\n ", num1, num2, num3, maior);

    system("PAUSE");
    



    return 0;
}