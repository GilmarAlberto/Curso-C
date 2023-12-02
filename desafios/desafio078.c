    /*
    - Declare uma variável float valor e atribua a ela um valor decimal.
    - Crie um ponteiro ptr1 e aponte-o para o endereço de valor.
    - Crie outro ponteiro ptr2 e aponte-o para o endereço de ptr1.
    - Crie um terceiro ponteiro ptr3 e aponte-o para o endereço de ptr2.
    - Modifique o valor de valor multiplicando-o por 2 usando ptr3.
    - Imprima o novo valor de valor com precisão de duas casas decimais.
    */

    #include <stdio.h>

    int main(){
        float num = 64.10;
        float *point1 = &num;
        float **point2 = &point1;
        float ***point3 = &point2;

        ***point3 *= 2;

        printf("%.2f", num);

        return 0;
    }