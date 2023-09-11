/*
Exercício 5: Adivinhar Número Crie um programa que gera um número aleatório entre 1 e 100. Em seguida, peça ao usuário para adivinhar o número. Utilize um loop do while para continuar pedindo palpites até que o usuário acerte. A cada tentativa, informe se o número é maior ou menor do que o palpite do usuário.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int numAle = 0;
    int num = 0;
    int ctdor = 0;

    srand(time(NULL));

    numAle = rand() % 101; // Gera um número entre 0 e 100

    do{

        ctdor++;

        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num==numAle){
            printf("\nVoce acertou em %d tentativas", ctdor);
        }
        else if(num > numAle){
            printf("Vc chutou pra cima! ");
        }
        else if(num < numAle){
            printf("Vc chutou pra baixo! ");
        }

    }while(num != numAle);

    return 0;
}