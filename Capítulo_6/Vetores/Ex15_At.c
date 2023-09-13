/* 15-Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos 
desse vetor e imprima o vetor na tela. */

#include <stdio.h>

int main(){

    float vetor[10], aux;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº valor de 10: ", i+1);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vetor[j] > vetor[i]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%.2f ",vetor[i]);
    }
    printf("\n");

    return 0;
}