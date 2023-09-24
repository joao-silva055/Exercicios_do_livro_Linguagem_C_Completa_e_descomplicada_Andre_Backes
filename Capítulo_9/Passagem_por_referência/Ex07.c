/* 7-Crie uma matriz A contendo 10 linhas e 10 colunas e retorne a soma dos seus elementos. */

#include <stdio.h>
#define SZMAX 10

int soma_matriz(int a[][SZMAX], int szmx){
    int s = 0;
    for(int i = 0; i < szmx; i++){
        for(int j = 0; j < szmx; j++){
            s += a[i][j];
        }
    }
    return s;

}

int main(){

    int A[SZMAX][SZMAX], soma, ctd = 1;

    for(int i = 0; i < SZMAX; i++){
        for(int j = 0; j < SZMAX; j++){
            printf("Digite o valor da %dº posição: ", ctd);
            scanf("%d", &A[i][j]);
            ctd++;
        }
    }

    soma = soma_matriz(A, SZMAX);

    printf("A soma dos elementos da matriz é de %d.\n", soma);

    return 0;
}