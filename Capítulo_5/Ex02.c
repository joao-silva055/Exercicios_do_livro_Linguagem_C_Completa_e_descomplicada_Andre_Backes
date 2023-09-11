/* 2-Faça um programa que leia um número inteiro positivo N e imprima todos os
números de 0 até N em ordem decrescente. */

#include <stdio.h>

int main(){

    int i, valor;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);

    for(i = valor; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}