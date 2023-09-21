/* 13-Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o 
somatório de 1 até n: 1 + 2 + 3 + ... + n. */

#include <stdio.h>

int somatorio(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main(){

    int numero, soma;

    printf("Digite um valor para soma: ");
    scanf("%d", &numero);

    soma = somatorio(numero);

    printf("A soma de 1 até %d é de %d.\n", numero, soma);

    return 0;
}