/* 7-Elabore um programa que peça ao usuário para digitar 10 valores. Some esses 
valores e apresente o resultado na tela. */

#include <stdio.h>

int main(){

    float valores, soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%f", &valores);
        soma = soma + valores;
    }

    printf("A soma dos valores digitados é igual a %f.\n", soma);

    return 0;
}