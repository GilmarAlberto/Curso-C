/*
Defina um enum chamado DiasDaSemana com os seguintes valores: DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO.

Crie uma função chamada imprimirMensagemDia que recebe um parâmetro do tipo DiasDaSemana e imprime uma mensagem diferente para cada dia.

No programa principal (função main), peça ao usuário para inserir um número de 1 a 7 representando um dia da semana.

Use a função imprimirMensagemDia para imprimir a mensagem correspondente ao dia escolhido pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum DiasDaSemana{
    DOMINGO = 1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

void imprimirMensagemDia(enum DiasDaSemana dia){
    char msg[20];

    switch(dia){
        case DOMINGO:{
            strcpy(msg, "Feliz Domingo\n");
            break;
        }
        case SEGUNDA:{ 
            strcpy(msg, "Feliz Segunda\n");
            break;
        }
        case TERCA:{
            strcpy(msg, "Feliz Terça\n");
            break;
        }
        case QUARTA:{
            strcpy(msg, "Feliz Quarta\n");
            break;
        }
        case QUINTA:{
            strcpy(msg, "Feliz Quinta\n");
            break;
        }
        case SEXTA:{
            strcpy(msg, "Feliz Sexta\n");
            break;
        }
        case SABADO:{
            strcpy(msg, "Feliz Sábado\n");
            break;
        }
        default:
            strcpy(msg, "Dia Inválido\n");
            break;

    }

    printf("%s", msg);

}
int main(){
    enum DiasDaSemana dia;
    system("config.bat");

    printf("Digite um dia da semana (1-7): ");
    scanf("%d", &dia);

    imprimirMensagemDia(dia);

    return 0;
}