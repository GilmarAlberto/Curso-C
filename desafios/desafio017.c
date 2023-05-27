/*
 Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente
 de um triângulo retângulo. Calcule e mostre o comprimento da hipotenusa.
*/
#include <stdio.h>
#include <math.h>

int main(){
    
    float catop = 0, catad = 0, hip = 0;

    printf("Digite o Cateto Oposto: ");
    scanf("%f", &catop);

    printf("Digite o Cateto Adjacente: ");
    scanf("%f", &catad);

    hip = sqrt((catop*catop)+(catad*catad));

    printf("O valor da hipotenusa eh %.2f", hip);

    return 0;
}