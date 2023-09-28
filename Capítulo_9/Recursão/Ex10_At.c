/* 10-Escreva uma função recursiva que receba um número inteiro, maior ou igual a zero, e 
retorne o enésimo termo da sequencia de Fibonacci. Essa sequência começa no termo de ordem
zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    
    int n, enesimo;
    printf("Digite o enésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    enesimo = fibonacci(n - 1);

    printf("O enésimo valor da sequência é %d.\n", enesimo);

    return 0;
}