/*
2. Declarar dois ponteiros para uma variável inteira e trocar os valores apontados pelos ponteiros.

*/
#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int *ponteiro1 = &num1;
    int *ponteiro2 = &num2;
    int temp = *ponteiro1;

    printf("ponteiro1 = %d\n", *ponteiro1);
    printf("ponteiro2 = %d\n", *ponteiro2);

    *ponteiro1 = *ponteiro2;
    *ponteiro2 = temp;

    printf("ponteiro1 = %d\n", *ponteiro1);
    printf("ponteiro2 = %d\n", *ponteiro2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}