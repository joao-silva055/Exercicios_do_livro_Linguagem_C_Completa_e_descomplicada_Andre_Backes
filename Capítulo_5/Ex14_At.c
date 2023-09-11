/* 14-Escreva um programa que leia um número inteiro, maior ou igual a zero, 
do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência 
começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado 
pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int main(){

    int anterior = 0, posterior = 1, fibo, enesimo;

    do{
        printf("Digite um valor maior ou igual a zero: ");
        scanf("%d", &enesimo);
    }while(enesimo < 0);

    if(enesimo == 0){
        printf("%d\n", anterior);
        return 0;
    }else{
        if(enesimo == 1){
            printf("O %d° termo da sequência de Fibonacci é %d. \n", enesimo, posterior);
            return 0;
        }
    }

    //fibo = anterior + posterior;
    for(int i = 2; i <= enesimo; i++){
       fibo = anterior + posterior;
       anterior = posterior;
       posterior = fibo; 
    }
    printf("O %d° termo da sequência de Fibonacci é %d. \n", enesimo, fibo);

    return 0;
}