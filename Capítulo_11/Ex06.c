/* 6-Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da 
matriz deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e 
retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário. */

#include <stdio.h>
#include <stdlib.h>

int busca_linear(int m[], int l, int c, int b){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(m[i * c + j] == b){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int linhas, colunas, *matriz, busca;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (int *) malloc(linhas * colunas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * colunas + j]);
        }
    }

    printf("Digite um valor para busca: ");
    scanf("%d", &busca);

    if(busca_linear(matriz, linhas, colunas, busca)){
        printf("O valor está contido na matriz.\n");
    }else{
        printf("O valor não está na matriz.\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}