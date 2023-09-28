/* 7-Escreva uma função recursiva que receba por parâmentro dois valores inteiros x e y 
e calcule e retorne o resultado de x^y para o programa principal. */

#include <stdio.h>

int retorna_exp(int x, int y){
    if(y == 1){
        return x;
    }
    return x * retorna_exp(x, y - 1);
}

int main(){

    int x, y, exp;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    exp = retorna_exp(x, y);

    printf("O valor de X sobre Y é: %d.\n", exp);

    return 0;
}