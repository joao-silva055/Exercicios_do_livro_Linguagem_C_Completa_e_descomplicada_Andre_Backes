/* 15-Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e 
imprima a matriz B, sendo b = A². */

#include <stdio.h>
#include <math.h>

int main(){

    int A[5][5], B[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            B[i][j] = pow(A[i][j], 2);
        }
    }

    printf("--------------B = A²-------------\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}