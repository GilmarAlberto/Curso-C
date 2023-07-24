/*
Crie um loop "for" que imprima a tabuada de 1 a 10, ou seja

*/
#include <stdio.h>

int main(){
    int i=0, j=0;

    for(i=1;i<=10;i++){
        printf("Tabuada do %d\n",i);
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }

    return 0;
}