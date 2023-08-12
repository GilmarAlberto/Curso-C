/*
    Escreva um loop "for" que imprima os primeiros 20 números primos. Um número primo é aquele que é divisível apenas por 1 e por ele mesmo.

*/
#include <stdio.h>
#include <stdbool.h>

int main(){

    int i = 1;
    int num = 2;
    int divisor = 0 ;
    bool primo = true;
    float res = 0;


    while(i <= 20){

        divisor=num-1;

        for(divisor = num - 1; divisor > 1; divisor--){
           
            res = (num%divisor);
             
            if(res==0){
            
                
                primo=false;
                break;
            }
            
        }

        if(primo){
            printf("%d, ",num);
            i++;
        }

        num+=1; 
    
        primo = true;
    }
    return 0;
}