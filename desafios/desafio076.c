/*
Para o exercício 12, você pode usar um ponteiro para percorrer a string e verificar se o valor apontado pelo ponteiro é uma vogal.

*/
#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "Gilmar Alberto de Abreu Pinto";
    char *ponteiro = nome;
    int tam = strlen(nome);
    int total = 0;
    int i = 0;

    for(i=0; i<tam; i++){
        switch(*(ponteiro+i)){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("A posicao %d do ponteiro eh uma vogal\n", i);
                total+=1;
                
                break;
        }
    }

    printf("O total de vogais encontradas eh de: %d\n", total);

    return 0;
}