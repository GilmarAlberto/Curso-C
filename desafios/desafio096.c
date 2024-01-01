/*

*/
#include <stdio.h>
#include <stdlib.h>

enum Meses {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main(){
    system("config.bat");

// Declarando uma variável do tipo enum Meses
    enum Meses mesAtual;

    // Pedindo ao usuário para inserir o número do mês
    printf("Digite o número do mês (1-12): ");
    scanf("%d", &mesAtual);

    // Verificando se o número está dentro do intervalo válido
    if (mesAtual >= JANEIRO && mesAtual <= DEZEMBRO) {
        // Imprimindo o nome do mês
        switch (mesAtual) {
            case JANEIRO:
                printf("Janeiro\n");
                break;
            case FEVEREIRO:
                printf("Fevereiro\n");
                break;
            case MARCO:
                printf("Março\n");
                break;
            case ABRIL:
                printf("Abril\n");
                break;
            case MAIO:
                printf("Maio\n");
                break;
            case JUNHO:
                printf("Junho\n");
                break;
            case JULHO:
                printf("Julho\n");
                break;
            case AGOSTO:
                printf("Agosto\n");
                break;
            case SETEMBRO:
                printf("Setembro\n");
                break;
            case OUTUBRO:
                printf("Outubro\n");
                break;
            case NOVEMBRO:
                printf("Novembro\n");
                break;
            case DEZEMBRO:
                printf("Dezembro\n");
                break;
        }
    } else {
        printf("Número de mês inválido. Insira um valor entre 1 e 12.\n");
    }

    return 0;
}