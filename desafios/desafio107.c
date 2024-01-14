/*
Potência: Crie uma função chamada potencia que receba dois números reais como parâmetros e retorne o resultado da potência do primeiro número elevado ao segundo número.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(float num1, float num2){

    return pow(num1, num2);

}

int main(){
    system("config.bat");
    float num1, num2;
    num1 = 3.14;
    num2 = 2.5;

    printf("A potência de %.2f e %.2f é %.2f", num1, num2, potencia(num1, num2));


    return 0;
}