/* 4-Elabore um programa que leia do teclado do usuário o tamanho de um vetor a ser lido. 
Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o 
imprima. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tm, *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tm);

    vetor = (int *) malloc(tm*sizeof(int));

    if(vetor  == NULL){
        printf("Erro. Memória insuficiente!\n");
    }else{
        for(int i = 0; i < tm; i++){
            printf("Valor do vetor na posição [%d]: ", i);
            scanf("%d", (vetor+i));
        }
    
        for(int i = 0; i < tm; i++){
            printf("%d ", *(vetor+i));
        }printf("\n");
    }

    free(vetor);
    vetor = NULL;

    return 0;
}