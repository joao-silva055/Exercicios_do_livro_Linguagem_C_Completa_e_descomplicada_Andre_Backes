/* 9-Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e 
retorne o seu fatorial n!: n! = n*(n-1)*(n-2)*...*1 */

#include <stdio.h>

int fatorial(int n){
    if(n == 1){
        return n;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){

    int n;

    printf("Digite um valor para calcular o fatorial: ");
    scanf("%d",&n);

    printf("O fatorial de %d é %d.\n", n, fatorial(n));

    return 0;
}