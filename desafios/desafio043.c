/*
Exercício de Escolha de Lanche: Crie um programa que apresente opções de lanches ao usuário e permita que ele escolha. Use uma declaração switch para mostrar a mensagem correspondente ao lanche escolhido.
1 - Hamburger
2 - Pizza
3 - Cachorro Quente
4 - Salada
*/
#include <stdio.h>

int main(){

    int opc = 0;

    printf("Cardapio\n");
    printf("========\n");
    printf("1 - Hamburger\n");
    printf("2 - Pizza\n");
    printf("3 - Cachorro Quente\n");
    printf("4 - Salada\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Vc escolheu Hamburger");
        
        break;
    case 2:
        printf("Vc escolheu Pizza");
        break;
    case 3:
        printf("Vc escolheu Cachorro Quente");
        break;
    case 4:
        printf("Vc escolheu Salada");
        break;
    default:
        printf("Opcao invalida");
        break;
    }
    
    return 0;
}