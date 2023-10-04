/* 14-Escreva uma função que receba como parâmetro dois valores, A e B, de tamanho N cada. 
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em
que c[i] = A[i] + B[i]. */

#include <stdio.h>
#include <stdlib.h>

int* RetornaPtrC(int A[], int B[], int N){
    int *C;
    C = (int*) malloc(N * sizeof(int*));

    for(int i = 0; i < N; i++){
       *(C+i) = A[i] + B[i];
    }
    return C;
}

int main(){

    int *c, n;

    printf("Digite o valor de N (nxn): ");
    scanf("%d", &n);

    c = (int*) malloc(n * sizeof(int));
    if(c == NULL){
        printf("Erro. Memória Isuficiente!\n");
        exit(1);
    }
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    
    c = RetornaPtrC(a, b, n);

    printf("Valores do vetor C[...]\n");
    for(int i = 0; i < n; i++){
        printf("[%d] ", *(c+i));
    }printf("\n");

    free(c);
    c = NULL;

    return 0;
}