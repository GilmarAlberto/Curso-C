/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereco de cada posicao dessa matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 
    float matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Endereço[%d][%d] = %p\n",i,j, (void *)&matriz[i][j]);
        }
    }
    return 0;
}