/* 1-Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1³ + 2³ + ... + n³ */

#include <stdio.h>

int soma_recursiva(int n, int soma){
    if(n >= 0){
        soma += (n*n*n);
        soma_recursiva(n - 1, soma);
    }else{
        return soma;
    }
}

int main(){

    int n, soma = 0;
    printf("Digite a quantidade de números que deseja somar: ");
    scanf("%d", &n);

    soma =  soma_recursiva(n, soma);

    printf("A soma dos valores digitados elevado ao cubo é %d.\n", soma);

    return 0;
}
