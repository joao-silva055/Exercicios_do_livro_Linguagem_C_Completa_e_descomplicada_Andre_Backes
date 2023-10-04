/* 16-Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N 
colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para um vetor C de 
tamanho N alocado dinamicamente, em que C é o produto da matriz A pelo vetor B. */

#include <stdio.h>
#include <stdlib.h>

int* RetornaPtrC(int a[], int b[], int n){
    int *c;
    c = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            *(c+i) += a[i * n + j] * b[j];
        }
    }
    return c;
}

int main(){

    int *a, *b, *c, n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    a = (int*) malloc(n * n * sizeof(int));
    b = (int*) malloc(n * sizeof(int));
    if(a == NULL && b == NULL){
        printf("Roor. Memória Insuficiente!\n");
        exit(1);
    }else{
        printf("Coleta dos valores de B e A\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("Digite o valor de A[%d]: ", (i * n +j));
                scanf("%d", &a[i * n +j]);
            }
        }
        for(int i = 0; i < n; i++){
            printf("Digite o valor de B[%d]: ", i);
            scanf("%d", &b[i]);
        }
    }

    c = RetornaPtrC(a, b, n);

    printf("C igual o produto de A[][] por B[]\n");
    for(int i = 0; i < n; i++){
        printf("[%d] ", *(c+i));
    }printf("\n");

    free(c);
    c = NULL;

    return 0;
}