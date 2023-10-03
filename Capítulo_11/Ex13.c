/* 13-Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente
contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, 
o valor 1 nos elementos acima da diagonal principal e o valor -1 nos elementos abaixo da 
diagonal principal. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *matriz, n;

    printf("Didite o valor d n (nxn): ");
    scanf("%d", &n);

    matriz = (int*) malloc(n * n * sizeof(int*));

    if(matriz == NULL){
        printf("Erro. Memória Insuficiente!.\n");
        exit(1);
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    matriz[i * n +j] = 0;
                }else if(i < j){
                    matriz[i * n +j] = 1;
                }else{
                    matriz[i * n +j] = -1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", matriz[i * n + j]);
        }
        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}