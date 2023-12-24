/*
Controle de Contas Bancárias:

Defina uma estrutura chamada ContaBancaria com os campos titular, saldo e número da conta.
Escreva uma função para cadastrar uma nova conta, recebendo um ponteiro para a estrutura.
Implemente uma função para realizar um saque em uma conta, recebendo um ponteiro para a estrutura e o valor do saque.

*/
#include <stdio.h>
#include <stdlib.h>

struct ContaBancaria{
    char  titular[50];
    float saldo;
    char  contaCorrente[15];
} cc;

void CadCC(struct ContaBancaria *cc){

    printf("Titular: ");
    scanf("%s", cc->titular);

    printf("Saldo  : ");
    scanf("%f", &cc->saldo);

    printf("C/C    :");
    scanf("%s", cc->contaCorrente);

}

void Saque(struct ContaBancaria *cc, float vlrSaque){

    if(vlrSaque > cc->saldo){
        printf("Saldo Insuficiente!\n");
    }else{
        cc->saldo -= vlrSaque;
    }
}

int main(){
    float vlrSaque;
    system("config.bat");

    CadCC(&cc);

    printf("Digite o valor do saque: ");
    scanf("%f", &vlrSaque);

    Saque(&cc, vlrSaque);

    printf("Titular: %s  \n", cc.titular);
    printf("Saldo  : %.2f\n", cc.saldo);
    printf("C/C    : %s  \n", cc.contaCorrente);

    return 0;
}