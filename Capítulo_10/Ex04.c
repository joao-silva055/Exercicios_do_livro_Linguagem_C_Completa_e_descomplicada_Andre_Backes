/* 4-Crie um programa que contenha uma matriz de float com três colunas. Imprima o 
endereço de cada posição dessa matriz */

#include <stdio.h>

int main(){

    float *mp[2][2];

    for(int i = 0; i < (2*2); i++){
        printf("*p[%d] = %p\n", i, *(*(mp + i)+i));
    }

    return 0;
}