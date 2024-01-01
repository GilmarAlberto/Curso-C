/*
Exemplo de Enum
*/

#include <stdio.h>
#include <stdlib.h>

// Definindo o enum para os dias da semana
enum DiasDaSemana {
    DOMINGO,    // 0
    SEGUNDA,    // 1
    TERCA,      // 2
    QUARTA,     // 3
    QUINTA,     // 4
    SEXTA,      // 5
    SABADO      // 6
};

int main() {
    // Declarando uma variável do tipo enum DiasDaSemana
    enum DiasDaSemana hoje;

    //Carregando variáeveis de ambiente.
    system("config.bat");

    // Atribuindo um valor
    hoje = QUARTA;

    // Imprimindo o dia da semana
    switch (hoje) {
        case DOMINGO:
            printf("Hoje é Domingo.\n");
            break;
        case SEGUNDA:
            printf("Hoje é Segunda-feira.\n");
            break;
        case TERCA:
            printf("Hoje é Terça-feira.\n");
            break;
        case QUARTA:
            printf("Hoje é Quarta-feira.\n");
            break;
        case QUINTA:
            printf("Hoje é Quinta-feira.\n");
            break;
        case SEXTA:
            printf("Hoje é Sexta-feira.\n");
            break;
        case SABADO:
            printf("Hoje é Sábado.\n");
            break;
        default:
            printf("Valor inválido.\n");
    }

    return 0;
}