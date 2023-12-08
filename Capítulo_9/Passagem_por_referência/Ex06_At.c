/* 6-Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas. 
Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A, 
Então A[i][j] = B[j][i]) */

#include <stdio.h>
#include <stdlib.h>
#define SZ_MAX 5

void TransposeMa(int Mb[][SZ_MAX]){
    int swap;
    for(int i = 0; i < SZ_MAX; i++){
        for(int j = 0; j < SZ_MAX; j++){
            if(j >= i){
                swap = Mb[i][j];
                Mb[i][j] = Mb[j][i];
                Mb[j][i] = swap;
            }
        }
    }
}

int main(){

    int Ma[SZ_MAX][SZ_MAX], index = 1;

    for(int i = 0; i < SZ_MAX; i++){
        for(int j = 0; j < SZ_MAX; j++){
            Ma[i][j] = index++;
        }
    }

    TransposeMa(Ma);

    for(int i = 0; i < SZ_MAX; i++){
        for(int j = 0; j < SZ_MAX; j++){
            printf("%3d  ", Ma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
