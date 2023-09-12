/* 6-Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos 
em sua diagonal principal. */

#include <stdio.h>

int main(){

    int matriz[3][3], soma = 0, cont = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o %dº de 9: ", cont);
            scanf("%d", &matriz[i][j]);
            cont++;
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma dos valores na diagonal principal é %d.\n", soma);

    return 0;
}