/*
Escreva um loop "for" que gere uma sequência de Fibonacci até o décimo termo. A sequência de Fibonacci começa com 0 e 1, e cada termo subsequente é a soma dos dois termos anteriores.

The 10th Fibonacci number is 55. The Fibonacci sequence is a series of numbers where each number is the sum of the two numbers before it. The first two numbers in the sequence are 0 and 1, so the first 10 numbers in the sequence are:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

*/
#include <stdio.h>


int main(){

    int num = 0, i = 0, ant=1, atu = 1;

    printf("Digite um termo: ");
    scanf("%d", &num);

    

    printf("0 ");

    for(i = 1; i < num; i++){

        if(i == 1)
          printf(", 1, 1");
        else{

                   
            printf(", %d", ant+atu );

            atu=ant+atu;
            ant=atu-ant;

        }

    }
    
    return 0;
}