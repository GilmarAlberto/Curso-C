/*
Área de um Círculo: Implemente uma função chamada calcularAreaCirculo que aceite o raio de um círculo como parâmetro e retorne a área desse círculo.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float calcularAreaCirculo(int raio){
    return M_PI * raio * raio;
}

int main(){
    system("config.bat");
    srand(time(NULL));
    int raio = rand() % 101; // Gera um número entre 0 e 100

    printf("A area do círculo cujo raio é %d é %.2f", raio, calcularAreaCirculo(raio));

    return 0;
}