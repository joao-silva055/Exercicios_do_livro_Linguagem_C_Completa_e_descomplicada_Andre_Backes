/* 6-Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas. 
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, 
Então A[i][j] = B[j][i]) */

#include <stdio.h>
#include <stdlib.h>
#define SIZEMAX 3
void mostra_matriz(int a[][SIZEMAX], int szmax){
    int aux;
    for(int i = 0; i < SIZEMAX; i++){
        for(int j = 0; j < szmax; j++){
            if(j >= i){
                aux = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = aux;
            }
            printf("\t[%d]", a[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int A[SIZEMAX][SIZEMAX];

    for(int i = 0; i < SIZEMAX; i++){
        for(int j = 0; j < SIZEMAX; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    mostra_matriz(A, SIZEMAX);

    return 0;
}