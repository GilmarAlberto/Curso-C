/*
Verificação de vogais: Escreva um programa que solicite ao usuário uma letra e verifique se ela é uma vogal ou uma consoante.

*/
#include <stdio.h>
#include <ctype.h>

int main(){

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    letra = tolower(letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("A letra eh uma vogal");
    }
    else{
        printf("A letra eh uma consoante");
    }


    return 0;
}