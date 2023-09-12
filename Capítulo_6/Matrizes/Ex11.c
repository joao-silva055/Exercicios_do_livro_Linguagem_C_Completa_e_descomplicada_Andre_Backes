/* 11-Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma dos
elementos dessa matriz que estão acima da diagonal principal. */

#include <stdio.h>

int main(){

    int matriz[5][5], soma = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Posição [%d][%d]: ", i , j);
            scanf("%d", &matriz[i][j]);
            if(i < j){
                soma += matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i < j){
                printf("%d\t", matriz[i][j]);
            }else{
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("A soma dos valores acima da diagonal principal é de %d.\n", soma);

    return 0;
}