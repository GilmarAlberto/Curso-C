/*
Faça um programa que leia randomicamente três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int ordena (int* num1, int* num2, int* num3){

    int aux;

    if(*num2 < *num1){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }

    if(*num3 < *num1){
        aux = *num1;
        *num1 = *num3;
        *num3 = aux;
    }

    if(*num3 < *num2){
        aux = *num2;
        *num2 = *num3;
        *num3 = aux;
    }

    if(*num1 == *num2 && *num1 == *num3){
        return(1);
    }
    
    return(0);

}

int main(){
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    srand(time(NULL));

    int num1 = rand() % 101;
    int num2 = rand() % 101;
    int num3 = rand() % 101;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

    int ret = ordena(&num1, &num2, &num3);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 =  %d\n", num3);
 
    if(ret == 1){
        printf("Os valores são iguais!\n");
    }
    else{
        printf("Os valores são diferentes!\n");
    }


    return 0;
}