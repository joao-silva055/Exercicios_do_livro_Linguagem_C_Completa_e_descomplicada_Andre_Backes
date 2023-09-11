/* 1-Faça um programa que leia um número inteiro positivo N e imprima todos os
números de 0 até N em ordem crescente. */

#include <stdio.h>

int main(){

    int valor, i;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);

    for(i = 0; i <= valor; i++){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
