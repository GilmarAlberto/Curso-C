/*
Fazer um conversor:
1) De decimal para hexadecimal;
2) De hexadecimal para decimal;
*/
#include <stdio.h>

int main(){

    int opcao = 0, valor = 0;

    printf("Conversor bases numericas \n");
    printf("1 - Decimal para Hexadecimal\n");
    printf("2 - Hexadecimal para Decimal\n");
    printf("Informe a opcao: ");
    scanf("%d", &opcao);

    if(opcao ==1){
        printf("\nInforme o valor em Decimal: ");
        scanf("%d", &valor);
        printf("%d em Hexadecimal eh: %x\n", valor, valor);
    }
    else if (opcao == 2){
        printf("\nInforme o valor em Hexadecimal: ");
        scanf("%x", &valor);
        printf("%x em Decimal eh: %d\n", valor, valor);
    }
    else{
        printf("\nOpcao invalida!\n");
    }

    return 0;
}