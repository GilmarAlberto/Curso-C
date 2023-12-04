/*
5. **Registro de Funcionários:**
   Crie uma struct para representar um funcionário com campos como nome, cargo e salário. Escreva um programa que cadastre funcionários e calcule a média salarial.
*/
#include <stdio.h>

struct cadastro {
    char  nome[50];
    char  cargo[50];
    float salario;
};

int main(){

    struct  cadastro funcionario[3];
    float media = 0;

    for(int i = 0; i < 3; i++){
        printf("Nome   : ");
        scanf("%s", &funcionario[i].nome);
        printf("Cargo  : ");
        scanf("%s", &funcionario[i].cargo);
        printf("Salario: ");
        scanf("%f", &funcionario[i].salario);

        media += funcionario[i].salario;
    }

    printf("================================\n");
    
    printf("A media salarial eh R$ %.2f", media/3);

    return 0;
}
