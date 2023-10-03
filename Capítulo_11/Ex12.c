/* 12-Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para
uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter
o valor 1 na diagonal secundária e 0 nas demais posições. */

#include <stdio.h>
#include <stdlib.h>

int* RetornaPtrMatriz(int n){
    int *m;
    m = (int*) malloc(n * n * sizeof(int*));

    if(m == NULL){
        printf("Erro. Memória Insuficiente!.\n");
        exit(1);
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == n - 1 - j){
                    m[i * n +j] = 1;
                }else{
                    m[i * n + j] = 0;
                }
            }
        }
    }
    return m;
}

int main(){

    int *matriz, n;

    printf("Didite o valor d n (nxn): ");
    scanf("%d", &n);

    matriz = RetornaPtrMatriz(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("[%d]", matriz[i * n + j]);
        }
        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}