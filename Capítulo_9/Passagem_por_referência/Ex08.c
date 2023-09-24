/* 8-Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas e seis 
colunas. Essa função deve retornar por refêrencia, a soma dos elementos da sua diagonal 
principal e da sua diagonal secundária. */

#include <stdio.h>
const int SZMAX = 6;

int soma_diagonais(int a[][SZMAX], int szmax, int *s){
    for(int i = 0; i < szmax; i++){
        for(int j = 0; j < szmax; j++){
            if(i == j){
                *s += a[i][j];
            }
            if(i == szmax - 1 - j){
                    *s += a[i][j];
            }
        }
    }
    return *s;
}

int main(){

    int A[SZMAX][SZMAX], soma_diags = 0, ctd = 1; 

    for(int i = 0; i < SZMAX; i++){
        for(int j = 0; j < SZMAX; j++){
            printf("Digite o valor do %dº elemento: ", ctd);
            scanf("%d", &A[i][j]);
            ctd++;
        }
    }

    soma_diagonais(A, SZMAX, &soma_diags);

    printf("A soma das duas diagonais é de %d.\n", soma_diags);

    return 0;
}