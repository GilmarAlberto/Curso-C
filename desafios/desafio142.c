/*
Escreva a função maior_primo que recebe um número inteiro maior ou igual a 2 como parâmetro e devolve o maior número primo menor ou igual ao número passado à função

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior_primo(int num){    

    for(int i = num; i >= 2; i--){
        int primo = 1;      
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0 ){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            return i;
        }
    }

    return -1;
}

int main(){
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    int num = 0, maior;

    printf("Digite um número > 2: ");
    scanf("%d", &num);

    if(num < 2){
        printf("Numero menor que 2!");
        return 0;
    }

    maior = maior_primo(num);

    printf("O maior número primo é: %d", maior);

    return 0;
}