/*
Banco de Dados Bancário:

Crie uma estrutura ContaBancaria com campos para titular e saldo.
Desenvolva uma função que atualiza o saldo da conta, recebendo a conta e um valor como parâmetros.

*/
#include <stdio.h>
#include <string.h>

struct ContaBancaria{
    char titular[50];
    float saldo;
} cb;

void atualizaSaldo(struct ContaBancaria *conta, const char *titular, float novoSaldo){
    strncpy(conta->titular,titular, sizeof(conta->titular)-1);
    conta->saldo   = novoSaldo;
}


int main(){

    atualizaSaldo(&cb, "Gilmar", 1320.00);

    printf("Nome : %s\n"  , cb.titular);
    printf("Saldo: %.2f\n", cb.saldo);

    return 0;
}