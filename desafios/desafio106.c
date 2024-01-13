/*
Conversão de Temperatura: Desenvolva uma função chamada converterCelsiusParaFahrenheit que receba uma temperatura em Celsius como parâmetro e retorne a temperatura equivalente em Fahrenheit.
*/
#include <stdio.h>
#include <stdlib.h>

float converterCelsiusParaFahrenheit(float celsius){

    return (celsius * 9 / 5) + 32;
}

int main(){
    system("config.bat");
    float celsius;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit", celsius, (converterCelsiusParaFahrenheit(celsius)));

    return 0;
}