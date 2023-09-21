/* 14-Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu 
fatorial n!: n! = n * (-1)*(n-2) * ... * 1. */

#include <stdio.h>

int fatorial(int f){
    int fat = 1;
    for(int i = 1; i <= f; i++){
        fat *= i;
    }
    return fat;
}

int main(){

    int valor, fat;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    fat = fatorial(valor);

    printf("O fatorial de %d é %d\n", valor, fat);

    return 0;
}