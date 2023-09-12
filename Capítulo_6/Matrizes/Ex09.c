/* 9-Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3x3 de 
números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada 
posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela 
esse array. Por exemplo, a matriz
5   -8  10
1   2   15
25  10  7

deverá gerar o vetor

31  4   32 */

#include <stdio.h>

int main(){

    int matriz[3][3], vetor[3] = {0, 0, 0}, cont = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o %dº de 9 valores: ", cont);
            scanf("%d", &matriz[i][j]);
            cont++;
            if(j == 0){
                vetor[j] += matriz[i][j];
            }else{
                if(j == 1){
                    vetor[j] += matriz[i][j];
                }else{
                    if(j == 2){
                        vetor[j] += matriz[i][j];
                    }
                }
            }
        }
    }

    printf("A soma das colunas presentes na matriz é de: \n");
    for(int i = 0; i < 3; i++){
        printf("%d  ",vetor[i]);
    }
    printf("\n");

    return 0;
}