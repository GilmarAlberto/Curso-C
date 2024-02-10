/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as vari  ́aveis aos ponteiros (use &). Modifique os valores de
cada vari  ́avel usando os ponteiros. Imprima os valores das vari  ́aveis antes e ap  ́os a
modificac ̧  ̃ao.

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int   num;
    float real;
    char  caracter;

    int   *pNum;
    float *pReal;
    char  *pCaracter;
    
    SetConsoleOutputCP(65001); //Permite a acentuação mas só funciona no windows. 

    pNum      = &num;
    pReal     = &real;
    pCaracter = &caracter;

    *pNum      = 10;
    *pReal     = 3.1415;
    *pCaracter = 'S';

    printf("Num: %d, Real: %.4f, Char: %c\n", num, real, caracter);

    *pNum      = 20;
    *pReal     = 6.2830;
    *pCaracter = 'N';

    printf("Num: %d, Real: %.4f, Char: %c\n", num, real, caracter);

    return 0;
}