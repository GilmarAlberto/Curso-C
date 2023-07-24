/*
Faça um loop "for" que calcule a soma dos números de 1 a 100.

*/
#include <stdio.h>

int main(){

    int i=0, soma = 0;

    for(i=1;i<=100;i++){
        soma+=i;
    }
    printf("A soma dos numeros de 1 a 100 eh %d", soma);

    return 0;
}