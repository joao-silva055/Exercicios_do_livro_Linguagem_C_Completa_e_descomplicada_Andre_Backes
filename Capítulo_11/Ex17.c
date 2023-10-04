/* 17-Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas. 
A função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, 
em que cada posição de B é a soma dos numeros daquela coluna da matriz. */

#include <stdio.h>
#include <stdlib.h>

int* RetornaPtrB(int a[], int n){
    int *c;
    c = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            *(c+i) += a[j * n + i];
        }
    }
    return c;
}

int main(){

    int *A, *B, N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    A = (int*) malloc(N * N * sizeof(int));
    B = (int*) calloc(N, sizeof(int));

    if(B == NULL){
        printf("Erro. Memória Insuficiente!\n");
        exit(1);
    }else{
        //Preenche a matriz com alguns valores
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                A[i * N +j] = i+j*2;     
            }
        }
        B = RetornaPtrB(A, N);
    }

    printf("Soma das colunas da matriz A[n][n]\n");
    for(int i = 0; i < N; i++){
        printf("[%d] ", *(B+i));
    }printf("\n");

    free(B);
    B = NULL;

    return 0;
}