/*
Soma dos Números Pares: Implemente uma função chamada somaParesAteN que aceite um número inteiro como parâmetro e retorne a soma de todos os números pares de 1 até esse número.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaParesAteN(int num){
    int i, soma = 0;

    for(i = 2; i <= num; i++){
        if(i % 2 == 0){
            soma+=i;
        }
    }

    return soma;

}

int main(){
    system("config.bat");

    srand(time(NULL));
    int num = rand() % 101; // Gera um número entre 0 e 100

    printf("A soma de todos os pares entre 1 e %d é %d", num, somaParesAteN(num));

    return 0;
}