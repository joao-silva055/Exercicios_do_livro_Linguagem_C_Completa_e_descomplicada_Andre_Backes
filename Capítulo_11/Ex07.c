/* 7-Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros 
alocados dinamicamente. O array deve ser preenchido com valores de 0 a N-1. */

#include <stdio.h>
#include <stdlib.h>

int* preenche_vetor(int *v, int szmx){
    for(int i = 0; i < szmx; i++){
        *(v+i) = i;
    }
    return v;
};

int main(){

    int *vetor, tmv;

    printf("Digite o tamanho do vetor :");
    scanf("%d", &tmv);

    vetor = (int *) calloc(tmv, sizeof(int));
    if(vetor == NULL){
        printf("Erro. Memória Insuficiente!\n");
    }else{
        vetor = preenche_vetor(vetor, tmv);
    }

    for(int i = 0; i < tmv; i++){
        printf("[%d] ", *(vetor+i));
    }printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;
}