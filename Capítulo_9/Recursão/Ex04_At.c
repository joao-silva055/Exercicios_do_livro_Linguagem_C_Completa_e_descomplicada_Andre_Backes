/* 3-Crie uma função recursiva que receba um número inteiro N e imprima todos os números 
naturais de 0 até N em ordem decrescente */

#include <stdio.h>
#include <stdlib.h>

void Print_in_descending_order(int n){
    if(n >= 0){
        printf("%d\n", n);
        Print_in_descending_order(n - 1);
    }
}

int main(){

    int value;

    printf("Digite um valor: ");
    scanf("%d", &value);

    Print_in_descending_order(value);

    return 0;
}
