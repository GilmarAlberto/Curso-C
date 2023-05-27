/*
Escreva um programa que leia um valor em metros e o exiba convertido em 
centímetros e milímetros.
*/
#include <stdio.h>

int main(){

    float metros = 0;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    printf("%.3f metros equivalem a:\n", metros );
    printf("%.3f km\n", metros/1000);
    printf("%.3f hm\n", metros/100);
    printf("%.3f dam\n", metros/10);
    printf("%.3f dm\n", metros*10);
    printf("%.3f cm\n", metros*100);
    printf("%.3f mm\n", metros*1000);

    return 0;
}