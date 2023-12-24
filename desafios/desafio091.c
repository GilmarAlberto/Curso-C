/*
Registro de Funcionários:

Crie uma estrutura chamada Funcionario para armazenar nome, salário e cargo.
Escreva uma função para cadastrar um novo funcionário, recebendo um ponteiro para a estrutura.
Implemente uma função para conceder um aumento de salário a um funcionário, recebendo um ponteiro para a estrutura e a porcentagem de aumento.

*/
#include <stdio.h>
#include <stdlib.h>


struct Funcionario{
    char nome[50];
    float salario;
    char cargo[50];
} func;

void CadFunc(struct Funcionario *func){

    printf("Nome   : ");
    scanf("%s", func->nome);

    printf("Salário: ");
    scanf("%f", &func->salario);

    printf("Cargo  : ");
    scanf("%s", func->cargo);
    
}

void AltSalario(struct Funcionario *func, int pctAumento){
    func->salario *= 1+(pctAumento/100.0);
}

int main(){
    system("config.bat");

    CadFunc(&func);
    AltSalario(&func, 10);

    printf("Nome   : %s   \n", func.nome);
    printf("Salário: %.2f \n", func.salario);
    printf("Cargo  : %s   \n", func.cargo);

    return 0;
}