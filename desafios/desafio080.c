/*
2. **Calculadora Simples:**
   Crie uma struct para representar um par de números e outra para operações (soma, subtração, multiplicação, divisão). Faça um programa que realize operações básicas com essas structs.

*/
#include <stdio.h>

struct numeros{
    float num1;
    float num2;
};

struct operacoes{
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;
};

int main(){
    struct numeros num;
    struct operacoes op;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num.num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num.num2);

    op.soma          = num.num1 + num.num2;
    op.subtracao     = num.num1 - num.num2;
    op.multiplicacao = num.num1 * num.num2;

    printf("Soma         : %.2f\n", op.soma);
    printf("Subtracao    : %.2f\n", op.subtracao);
    printf("Multiplicacao: %.2f\n", op.multiplicacao);
    
    if(num.num2 != 0){
        op.divisao = num.num1 / num.num2;
        printf("Divisao      : %.2f\n", op.divisao);
    }
    else{
        printf("Divisao por zero não pode ser realizada!\n");
    }

    return 0;
}