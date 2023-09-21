/* 15-Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída n 
linhas com pontos de exclamação, conforme a seguir, em que usamos n = 5:
!
!!
!!!
!!!!
!!!!! */

#include <stdio.h>

void triangulo_r(int l){

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }

}

int main(){

    int linhas;

    printf("Digite um valor: ");
    scanf("%d", &linhas);

    triangulo_r(linhas);

    return 0;
}