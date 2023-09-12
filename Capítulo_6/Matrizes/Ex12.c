/* 12-Faça um programa que leia uma matriz de tamanho 6x6. Calcule e imprima a soma dos
elementos dessa matriz que estão abaixo da diagonal principal. */

#include <stdio.h>

int main(){

    int matriz[6][6], soma = 0;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("Posição [%d][%d]: ", i , j);
            scanf("%d", &matriz[i][j]);
            if(i > j){
                soma += matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i > j){
                printf("%d\t", matriz[i][j]);
            }else{
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("A soma dos valores abaixo da diagonal principal é de %d.\n", soma);

    return 0;
}