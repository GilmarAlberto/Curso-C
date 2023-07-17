/*
Classificação de notas: Crie um programa que peça ao usuário a nota de um aluno e exiba a seguinte mensagem de acordo com a faixa de notas: se a nota for maior ou igual a 7, mostre "Aprovado"; se for maior ou igual a 5 e menor que 7, mostre "Recuperação"; caso contrário, mostre "Reprovado".

*/
#include <stdio.h>

int main(){
    float nota = 0;

    printf("Digite a note de um aluno: ");
    scanf("%f", &nota);

    if(nota>=7){
        printf("Aprovado");
    }
    else if(nota>=5){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }
    return 0;
}