/* 3-Crie uma função recursiva que receba um número inteiro N e imprima todos os números 
naturais de 0 até N em ordem decrescente */

#include <stdio.h>

void imprime_naturais(int n){
     if(n == 0){
        printf("%d", n);
        return;
    }else{
        printf("%d", n);
        imprime_naturais(--n);
    }
}

int main(){

    int n, ctd = 0;

    printf("Qual valor ira começar a contagem: ");
    scanf("%d", &n);

    imprime_naturais(n);

    return 0;
}