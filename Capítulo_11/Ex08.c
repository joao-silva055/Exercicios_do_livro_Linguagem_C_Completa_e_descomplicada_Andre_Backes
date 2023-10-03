/* 8-Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o 
ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a 
zero, um ponteiro nulo deverá ser retornado. */

#include <stdio.h>
#include <stdlib.h>

int* retorna_ptr(int n){
    int *ptr;
    if(n <= 0){
        return ptr = NULL;
    }
    ptr = (int *) calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Erro. Memória Insuficiente!\n");
        return ptr;
    }else{
        printf("Memória alocada com sucesso.\n");
    }
    return ptr;

}

int main(){

    int n, *vetor;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    vetor = retorna_ptr(n);

    free(vetor);
    vetor = NULL;

    return 0;
}