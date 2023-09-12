/* 5-Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos valores 
negativos ela possui. */

#include <stdio.h>

int main(){

    int matriz[4][4], negativos = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < 0){
                negativos++;
            }
        }
    }
    
    printf("Foram digitador %d valores negativos.\n", negativos);

    return 0;
}