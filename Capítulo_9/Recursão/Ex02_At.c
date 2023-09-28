/* 2-Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos 
números de 1 a N. */

#include <stdio.h>

int somatorio_recursivo(int n){
    if(n == 1){
        return 1;
    }
    return n + somatorio_recursivo(n - 1);
}

int main(){

    int n, soma = 0, i;
    printf("Digite quantos valores serão somados: ");
    scanf("%d", &n);

    soma = somatorio_recursivo(n);

    printf("A soma dos valores de 1 a N é de %d.\n", soma);

    return 0;
}