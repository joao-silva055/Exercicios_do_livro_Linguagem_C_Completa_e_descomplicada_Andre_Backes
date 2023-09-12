/* 13-Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma dos 
elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária */

#include <stdio.h>

int main(){

    int matriz[5][5], soma = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(!(i == j) && !(i == 5 - 1 - j)){
                soma += matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(!(i == j) && !(i == 5 - 1 - j)){
                printf("%d\t", matriz[i][j]);
            }else{
                printf("-\t");
            }
        }
        printf("\n");
    }

    printf("A soma dos valores não pertencentes a diagonal principal e secundária é de %d.\n", soma);

    return 0;
}