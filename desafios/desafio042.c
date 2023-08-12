/*
Exercício de Calculadora Simples: Crie uma calculadora que peça ao usuário para inserir dois números e uma operação (+, -, *, /). Use uma declaração switch para executar a operação selecionada.

*/
#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0;
    char opc = ' ';

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &opc);

    switch (opc)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %.2f", num1, num2, (float)num1 / (float)num2);
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;

}