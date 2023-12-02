/*
- Declare uma variável inteira num e atribua a ela um valor.
- Crie um ponteiro ptr1 e aponte-o para o endereço de num.
- Crie outro ponteiro ptr2 e aponte-o para o endereço de ptr1.
- Crie um terceiro ponteiro ptr3 e aponte-o para o endereço de ptr2.
- Modifique o valor de num através de ptr3.
- Imprima o novo valor de num.
*/
#include <stdio.h>

int main(){
    int num = 64;
    int *point1 = &num;
    int **point2 = &point1;
    int ***point3 = &point2;

    ***point3 = 10;

    printf("%d", num);

    return 0;
}