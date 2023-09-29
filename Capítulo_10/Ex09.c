/* 9-Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices
para percorrer o vetor, apenas aritmética de ponteiros. */

#include <stdio.h>

void imprime_vetor(int *vtr, int szmx){
    for(int i = 0; i < szmx; i++){
        printf("%d ", *(vtr+i));
    }printf("\n");
}

int main(){

    int vetor[] = {10, 25, 63, 85, 52, 41, 8, 19, 46, 32};

    imprime_vetor(vetor, 10);

    return 0;
}