/*
Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre a 
sua média.
*/
#include <stdio.h>

int main(){
    float n1 = 0;
    float n2 = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("A media entre %.2f e %.2f  eh %.2f", n1, n2, (n1+n2)/2);
    
    return 0;
}