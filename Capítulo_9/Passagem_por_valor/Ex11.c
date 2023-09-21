/* 11-Escreva uma função que receba por parâmetro dois valores inteiros x e y e calcule 
e retorne o resultado de x^y para o programa principal. Não use nenhuma função pronta 
para isso. */

#include <stdio.h>

int exponenciacao(int base, int expoente){
    int resultado_exp = 1;
    for(int i = 1; i <= expoente; i++){
        resultado_exp *= base;
    }
    return resultado_exp;
}

int main(){

    int x, y, resultado;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    resultado = exponenciacao(x, y);

    printf("O valor de %d sobre %d é de %d.\n", y, x, resultado);

    return 0;
}