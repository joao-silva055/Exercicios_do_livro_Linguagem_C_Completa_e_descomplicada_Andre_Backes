/* 3-Crie uma função recursiva que receba um número inteiro N e imprima todos os números 
naturais de 0 até N em ordem crescente */

#include <stdio.h>

void imprime_naturais(int n){
    if(n == 0){
        printf("%d", n);
        return;
    }else{
        imprime_naturais(n - 1);
        printf("%d", n);
    }
}

int main(){

    int n;

    printf("Até qual valor deseja imprimir: ");
    scanf("%d", &n);

    imprime_naturais(n);

    return 0;
}