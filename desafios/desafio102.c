/*
Verificar Número Primo: Crie uma função chamada ehPrimo que receba um número inteiro como argumento e retorne 1 se o número for primo e 0 caso contrário.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPrimo(int num){
    int i;
    for(i = num; i > 0; i--){
        if(num % i == 0 && i > 1 && i != num && num != 1){
            return 0;
        }
    }

    return 1;
}
int main(){
    system("config.bat");

    srand(time(NULL));
    int num = rand() % 21; // Gera um número entre 0 e 20
    
    if(ehPrimo(num)){
        printf("O número %d é primo!", num);
    }else{
        printf("O número %d não é primo!", num);
    }
    return 0;
}