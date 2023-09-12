/* 2-Faça um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor
contido nessa matriz. */

#include <stdio.h>

int main(){

    int matriz[3][3], maior;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i+1, j+1 );
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor digitado : %d\n", maior);

    return 0;
}